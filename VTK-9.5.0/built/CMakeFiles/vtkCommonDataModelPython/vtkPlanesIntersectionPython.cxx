// python wrapper for vtkPlanesIntersection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPlanesIntersection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPlanesIntersection(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPlanesIntersection_ClassNew(); }

#ifndef DECLARED_PyvtkPlanes_ClassNew
extern "C" { PyObject *PyvtkPlanes_ClassNew(); }
#define DECLARED_PyvtkPlanes_ClassNew
#endif

static PyObject *
PyvtkPlanesIntersection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlanesIntersection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlanesIntersection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlanesIntersection *tempr = vtkPlanesIntersection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanesIntersection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlanesIntersection::NewInstance());

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
PyvtkPlanesIntersection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlanesIntersection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlanesIntersection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_SetRegionVertices_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetRegionVertices(temp0);
    }
    else
    {
      op->vtkPlanesIntersection::SetRegionVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanesIntersection_SetRegionVertices_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetRegionVertices(temp0, temp1);
    }
    else
    {
      op->vtkPlanesIntersection::SetRegionVertices(temp0, temp1);
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
PyvtkPlanesIntersection_SetRegionVertices(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlanesIntersection_SetRegionVertices_s1(self, args);
    case 2:
      return PyvtkPlanesIntersection_SetRegionVertices_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRegionVertices");
  return nullptr;
}


static PyObject *
PyvtkPlanesIntersection_GetNumberOfRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionVertices() :
      op->vtkPlanesIntersection::GetNumberOfRegionVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetNumRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumRegionVertices() :
      op->vtkPlanesIntersection::GetNumRegionVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetRegionVertices(temp0, temp1) :
      op->vtkPlanesIntersection::GetRegionVertices(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsRegion(temp0) :
      op->vtkPlanesIntersection::IntersectsRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_PolygonIntersectsBBox(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PolygonIntersectsBBox");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkPlanesIntersection::PolygonIntersectsBBox(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_Convert3DCell(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Convert3DCell");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    vtkPlanesIntersection *tempr = vtkPlanesIntersection::Convert3DCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlanesIntersection_Methods[] = {
  {"IsTypeOf", PyvtkPlanesIntersection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlanesIntersection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlanesIntersection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlanesIntersection\nC++: static vtkPlanesIntersection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlanesIntersection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlanesIntersection\nC++: vtkPlanesIntersection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlanesIntersection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlanesIntersection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRegionVertices", PyvtkPlanesIntersection_SetRegionVertices, METH_VARARGS,
   "SetRegionVertices(self, pts:vtkPoints) -> None\nC++: void SetRegionVertices(vtkPoints *pts)\nSetRegionVertices(self, v:[float, ...], nvertices:int) -> None\nC++: void SetRegionVertices(double *v, int nvertices)\n\nIt helps if you know the vertices of the convex region. If you\ndon't, we will calculate them.  Region vertices are 3-tuples.\n"},
  {"GetNumberOfRegionVertices", PyvtkPlanesIntersection_GetNumberOfRegionVertices, METH_VARARGS,
   "GetNumberOfRegionVertices(self) -> int\nC++: int GetNumberOfRegionVertices()\n\n"},
  {"GetNumRegionVertices", PyvtkPlanesIntersection_GetNumRegionVertices, METH_VARARGS,
   "GetNumRegionVertices(self) -> int\nC++: int GetNumRegionVertices()\n\n"},
  {"GetRegionVertices", PyvtkPlanesIntersection_GetRegionVertices, METH_VARARGS,
   "GetRegionVertices(self, v:[float, ...], nvertices:int) -> int\nC++: int GetRegionVertices(double *v, int nvertices)\n\n"},
  {"IntersectsRegion", PyvtkPlanesIntersection_IntersectsRegion, METH_VARARGS,
   "IntersectsRegion(self, R:vtkPoints) -> int\nC++: int IntersectsRegion(vtkPoints *R)\n\nReturn 1 if the axis aligned box defined by R intersects the\nregion defined by the planes, or 0 otherwise.\n"},
  {"PolygonIntersectsBBox", PyvtkPlanesIntersection_PolygonIntersectsBBox, METH_VARARGS,
   "PolygonIntersectsBBox(bounds:[float, float, float, float, float,\n    float], pts:vtkPoints) -> int\nC++: static int PolygonIntersectsBBox(double bounds[6],\n    vtkPoints *pts)\n\nA convenience function provided by this class, returns 1 if the\npolygon defined in pts intersects the bounding box defined in\nbounds, 0 otherwise.\n\n* The points must define a planar polygon.\n"},
  {"Convert3DCell", PyvtkPlanesIntersection_Convert3DCell, METH_VARARGS,
   "Convert3DCell(cell:vtkCell) -> vtkPlanesIntersection\nC++: static vtkPlanesIntersection *Convert3DCell(vtkCell *cell)\n\nAnother convenience function provided by this class, returns the\nvtkPlanesIntersection object representing a 3D cell.  The point\nIDs for each face must be given in counter-clockwise order from\nthe outside of the cell.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPlanesIntersection_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("region_vertices"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlanesIntersection_SetRegionVertices(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlanesIntersection_SetRegionVertices(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRegionVertices\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("num_region_vertices"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlanesIntersection_GetNumRegionVertices(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumRegionVertices\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_region_vertices"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlanesIntersection_GetNumberOfRegionVertices(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfRegionVertices\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPlanesIntersection_Doc =
  "vtkPlanesIntersection - A vtkPlanesIntersection object is a\n   vtkPlanes object that can compute whether the arbitrary convex\nregion\n   bounded by it's planes intersects an axis-aligned box.\n\n"
  "Superclass: vtkPlanes\n\n"
  "A subclass of vtkPlanes, this class determines whether it\n"
  "   intersects an axis aligned box.   This is motivated by the\n"
  "   need to intersect the axis aligned region of a spatial\n"
  "   decomposition of volume data with various other regions.\n"
  "   It uses the algorithm from Graphics Gems IV, page 81.\n\n"
  "@par Caveat:\n"
  "   An instance of vtkPlanes can be redefined by changing the planes,\n"
  "   but this subclass then will not know if the region vertices are\n"
  "   up to date.  (Region vertices can be specified in\n"
  "SetRegionVertices\n"
  "   or computed by the subclass.)  So Delete and recreate if you want\n"
  "   to change the set of planes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlanesIntersection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPlanesIntersection", // tp_name
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
  PyvtkPlanesIntersection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlanesIntersection_StaticNew()
{
  return vtkPlanesIntersection::New();
}

PyObject *PyvtkPlanesIntersection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlanesIntersection_Type, PyvtkPlanesIntersection_Methods,
    "vtkPlanesIntersection",
 &PyvtkPlanesIntersection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlanes_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPlanesIntersection_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlanesIntersection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlanesIntersection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlanesIntersection", o) != 0)
  {
    Py_DECREF(o);
  }

}

