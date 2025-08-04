// python wrapper for vtkGraphAnnotationLayersFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphAnnotationLayersFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGraphAnnotationLayersFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGraphAnnotationLayersFilter_ClassNew(); }


static PyObject *
PyvtkGraphAnnotationLayersFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphAnnotationLayersFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphAnnotationLayersFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphAnnotationLayersFilter *tempr = vtkGraphAnnotationLayersFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphAnnotationLayersFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphAnnotationLayersFilter::NewInstance());

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
PyvtkGraphAnnotationLayersFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphAnnotationLayersFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphAnnotationLayersFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToBoundingRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHullShapeToBoundingRectangle();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToBoundingRectangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToConvexHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHullShapeToConvexHull();
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToConvexHull();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInWorld(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInDisplay(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkGraphAnnotationLayersFilter::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphAnnotationLayersFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphAnnotationLayersFilter_Methods[] = {
  {"IsTypeOf", PyvtkGraphAnnotationLayersFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphAnnotationLayersFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphAnnotationLayersFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphAnnotationLayersFilter\nC++: static vtkGraphAnnotationLayersFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphAnnotationLayersFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphAnnotationLayersFilter\nC++: vtkGraphAnnotationLayersFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphAnnotationLayersFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphAnnotationLayersFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OutlineOn", PyvtkGraphAnnotationLayersFilter_OutlineOn, METH_VARARGS,
   "OutlineOn(self) -> None\nC++: void OutlineOn()\n\nProduce outlines of the hulls on output port 1.\n"},
  {"OutlineOff", PyvtkGraphAnnotationLayersFilter_OutlineOff, METH_VARARGS,
   "OutlineOff(self) -> None\nC++: void OutlineOff()\n\n"},
  {"SetOutline", PyvtkGraphAnnotationLayersFilter_SetOutline, METH_VARARGS,
   "SetOutline(self, b:bool) -> None\nC++: void SetOutline(bool b)\n\n"},
  {"SetScaleFactor", PyvtkGraphAnnotationLayersFilter_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, scale:float) -> None\nC++: void SetScaleFactor(double scale)\n\nScale each hull by the amount specified. Defaults to 1.0.\n"},
  {"SetHullShapeToBoundingRectangle", PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle, METH_VARARGS,
   "SetHullShapeToBoundingRectangle(self) -> None\nC++: void SetHullShapeToBoundingRectangle()\n\nSet the shape of the hulls to bounding rectangle.\n"},
  {"SetHullShapeToConvexHull", PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull, METH_VARARGS,
   "SetHullShapeToConvexHull(self) -> None\nC++: void SetHullShapeToConvexHull()\n\nSet the shape of the hulls to convex hull. Default.\n"},
  {"SetMinHullSizeInWorld", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld, METH_VARARGS,
   "SetMinHullSizeInWorld(self, size:float) -> None\nC++: void SetMinHullSizeInWorld(double size)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"SetMinHullSizeInDisplay", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay, METH_VARARGS,
   "SetMinHullSizeInDisplay(self, size:int) -> None\nC++: void SetMinHullSizeInDisplay(int size)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"SetRenderer", PyvtkGraphAnnotationLayersFilter_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {"GetMTime", PyvtkGraphAnnotationLayersFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGraphAnnotationLayersFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("outline"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGraphAnnotationLayersFilter_SetOutline(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGraphAnnotationLayersFilter_SetOutline(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetOutline\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale_factor"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGraphAnnotationLayersFilter_SetScaleFactor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGraphAnnotationLayersFilter_SetScaleFactor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetScaleFactor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("min_hull_size_in_world"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetMinHullSizeInWorld\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("min_hull_size_in_display"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetMinHullSizeInDisplay\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("renderer"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGraphAnnotationLayersFilter_SetRenderer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGraphAnnotationLayersFilter_SetRenderer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRenderer\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGraphAnnotationLayersFilter_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGraphAnnotationLayersFilter_Doc =
  "vtkGraphAnnotationLayersFilter - Produce filled convex hulls around\nsubsets of vertices in a vtkGraph.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Produces a vtkPolyData comprised of filled polygons of the convex\n"
  "hull of a cluster. Alternatively, you may choose to output bounding\n"
  "rectangles. Clusters with fewer than three vertices are artificially\n"
  "expanded to ensure visibility (see vtkConvexHull2D).\n\n"
  "The first input is a vtkGraph with points, possibly set by passing\n"
  "the graph through vtkGraphLayout (z-values are ignored). The second\n"
  "input is a vtkAnnotationsLayer containing vtkSelectionNodeS of vertex\n"
  "ids (the 'clusters' output of vtkTulipReader for example).\n\n"
  "Setting OutlineOn() additionally produces outlines of the clusters on\n"
  "output port 1.\n\n"
  "Three arrays are added to the cells of the output: \"Hull id\"; \"Hull\n"
  "name\"; and \"Hull color\".\n\n"
  "Note: This filter operates in the x,y-plane and as such works best\n"
  "with an interactor style that does not allow camera rotation, such as\n"
  "vtkInteractorStyleRubberBand2D.\n\n"
  "@sa\n"
  "vtkContext2D\n\n"
  "@par Thanks: Thanks to Colin Myers, University of Leeds for providing\n"
  "this implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphAnnotationLayersFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkGraphAnnotationLayersFilter", // tp_name
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
  PyvtkGraphAnnotationLayersFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphAnnotationLayersFilter_StaticNew()
{
  return vtkGraphAnnotationLayersFilter::New();
}

PyObject *PyvtkGraphAnnotationLayersFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphAnnotationLayersFilter_Type, PyvtkGraphAnnotationLayersFilter_Methods,
    "vtkGraphAnnotationLayersFilter",
 &PyvtkGraphAnnotationLayersFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGraphAnnotationLayersFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphAnnotationLayersFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphAnnotationLayersFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphAnnotationLayersFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

