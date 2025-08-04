// python wrapper for vtkAbstractSplineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractSplineRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAbstractSplineRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAbstractSplineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkCurveRepresentation_ClassNew
extern "C" { PyObject *PyvtkCurveRepresentation_ClassNew(); }
#define DECLARED_PyvtkCurveRepresentation_ClassNew
#endif

static PyObject *
PyvtkAbstractSplineRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractSplineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractSplineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractSplineRepresentation *tempr = vtkAbstractSplineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractSplineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractSplineRepresentation::NewInstance());

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
PyvtkAbstractSplineRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractSplineRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractSplineRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkAbstractSplineRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkAbstractSplineRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkAbstractSplineRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSpline *tempr = (ap.IsBound() ?
      op->GetParametricSpline() :
      op->vtkAbstractSplineRepresentation::GetParametricSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  vtkParametricSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
  {
    if (ap.IsBound())
    {
      op->SetParametricSpline(temp0);
    }
    else
    {
      op->vtkAbstractSplineRepresentation::SetParametricSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetHandlePositions() :
      op->vtkAbstractSplineRepresentation::GetHandlePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractSplineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractSplineRepresentation *op = static_cast<vtkAbstractSplineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkAbstractSplineRepresentation::GetSummedLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractSplineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAbstractSplineRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractSplineRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractSplineRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractSplineRepresentation\nC++: static vtkAbstractSplineRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractSplineRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractSplineRepresentation\nC++: vtkAbstractSplineRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractSplineRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractSplineRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPolyData", PyvtkAbstractSplineRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd) override;\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resolution, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or\nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {"SetResolution", PyvtkAbstractSplineRepresentation_SetResolution, METH_VARARGS,
   "SetResolution(self, resolution:int) -> None\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget. The default value is 499.\n"},
  {"GetResolution", PyvtkAbstractSplineRepresentation_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"GetParametricSpline", PyvtkAbstractSplineRepresentation_GetParametricSpline, METH_VARARGS,
   "GetParametricSpline(self) -> vtkParametricSpline\nC++: virtual vtkParametricSpline *GetParametricSpline()\n\nSet the parametric spline object. Can be redefined in the child\nclasses for further updates when a spline is set. The default\nvalue is nullptr.\n"},
  {"SetParametricSpline", PyvtkAbstractSplineRepresentation_SetParametricSpline, METH_VARARGS,
   "SetParametricSpline(self, spline:vtkParametricSpline) -> None\nC++: virtual void SetParametricSpline(vtkParametricSpline *spline)\n\n"},
  {"GetHandlePositions", PyvtkAbstractSplineRepresentation_GetHandlePositions, METH_VARARGS,
   "GetHandlePositions(self) -> vtkDoubleArray\nC++: vtkDoubleArray *GetHandlePositions() override;\n\nGet the position of the spline handles.\n"},
  {"GetSummedLength", PyvtkAbstractSplineRepresentation_GetSummedLength, METH_VARARGS,
   "GetSummedLength(self) -> float\nC++: double GetSummedLength() override;\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAbstractSplineRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractSplineRepresentation_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractSplineRepresentation_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractSplineRepresentation_SetResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetResolution/SetResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parametric_spline"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractSplineRepresentation_GetParametricSpline(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractSplineRepresentation_SetParametricSpline(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractSplineRepresentation_SetParametricSpline(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetParametricSpline/SetParametricSpline\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_positions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractSplineRepresentation_GetHandlePositions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHandlePositions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("summed_length"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractSplineRepresentation_GetSummedLength(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSummedLength\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAbstractSplineRepresentation_Doc =
  "vtkAbstractSplineRepresentation - abstract representation for a\nspline.\n\n"
  "Superclass: vtkCurveRepresentation\n\n"
  "vtkAbstractSplineRepresentation is a vtkWidgetRepresentation for an\n"
  "abstract spline. This 3D widget defines a spline that can be\n"
  "accessed, set and configured. Deriving classes are then able to\n"
  "combine their own handles using this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractSplineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkAbstractSplineRepresentation", // tp_name
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
  PyvtkAbstractSplineRepresentation_Doc, // tp_doc
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

PyObject *PyvtkAbstractSplineRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractSplineRepresentation_Type, PyvtkAbstractSplineRepresentation_Methods,
    "vtkAbstractSplineRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCurveRepresentation_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAbstractSplineRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractSplineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractSplineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractSplineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

