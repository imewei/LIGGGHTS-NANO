// python wrapper for vtkDGVert
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDGVert.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGVert(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGVert_ClassNew(); }

#ifndef DECLARED_PyvtkDGCell_ClassNew
extern "C" { PyObject *PyvtkDGCell_ClassNew(); }
#define DECLARED_PyvtkDGCell_ClassNew
#endif

static PyObject *
PyvtkDGVert_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGVert::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGVert::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGVert *tempr = vtkDGVert::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGVert *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGVert::NewInstance());

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
PyvtkDGVert_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGVert::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGVert::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInside(*temp0, temp1) :
      op->vtkDGVert::IsInside(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDGVert_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkDGVert::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetNumberOfSideTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideTypes() :
      op->vtkDGVert::GetNumberOfSideTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetNumberOfSidesOfDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesOfDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesOfDimension(temp0) :
      op->vtkDGVert::GetNumberOfSidesOfDimension(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetSideConnectivity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = (ap.IsBound() ?
      &op->GetSideConnectivity(temp0) :
      &op->vtkDGVert::GetSideConnectivity(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDGVert_GetSideConnectivity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetSideConnectivity() :
      op->vtkDGVert::GetSideConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDGVert_GetSideConnectivity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDGVert_GetSideConnectivity_s1(self, args);
    case 0:
      return PyvtkDGVert_GetSideConnectivity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSideConnectivity");
  return nullptr;
}


static PyObject *
PyvtkDGVert_GetSidesOfSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSidesOfSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = (ap.IsBound() ?
      &op->GetSidesOfSide(temp0) :
      &op->vtkDGVert::GetSidesOfSide(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeFloat32Array *tempr = (ap.IsBound() ?
      op->GetReferencePoints() :
      op->vtkDGVert::GetReferencePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGVert_GetSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGVert *op = static_cast<vtkDGVert *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetSideOffsetsAndShapes() :
      op->vtkDGVert::GetSideOffsetsAndShapes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGVert_Methods[] = {
  {"IsTypeOf", PyvtkDGVert_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGVert_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGVert_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGVert\nC++: static vtkDGVert *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGVert_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGVert\nC++: vtkDGVert *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGVert_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGVert_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsInside", PyvtkDGVert_IsInside, METH_VARARGS,
   "IsInside(self, rst:vtkVector3d, tolerance:float) -> bool\nC++: bool IsInside(const vtkVector3d &rst, double tolerance)\n    override;\n\nMethods to query cell shape and reference parameterization.\n\nThese methods do not return information about particular cells or\nsides specified by the cell-grid's arrays; only metadata about\nthe cell.\n"},
  {"GetDimension", PyvtkDGVert_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of this cell type (0, 1, 2, or\n3).\n"},
  {"GetNumberOfSideTypes", PyvtkDGVert_GetNumberOfSideTypes, METH_VARARGS,
   "GetNumberOfSideTypes(self) -> int\nC++: int GetNumberOfSideTypes() override;\n\nReturn the number of different side shapes of this cell type.\n\nExample: a wedge has 4 side shapes: Quadrilateral, Triangle,\nEdge, and Vertex.\n"},
  {"GetNumberOfSidesOfDimension", PyvtkDGVert_GetNumberOfSidesOfDimension, METH_VARARGS,
   "GetNumberOfSidesOfDimension(self, dimension:int) -> int\nC++: int GetNumberOfSidesOfDimension(int dimension) override;\n\nReturn the number of boundaries this type of cell has of a given\ndimension.\n\nDG cells can be thought of as CW-complex cells; they are tuples\nof corner points which represent an open point set plus its\nclosure decomposed into a union of open sets of lower dimension.\nFor example, a hexahedron is an 8-tuple of corner points\nrepresenting an underlying space shaped as an open, rectangular\nprism plus six 4-tuples representing its quadrilateral faces,\nplus twelve 2-tuples representing its edges, plus 8 1-tuples\nrepresenting its corners. Thus, a hexahedron has 6 + 12 + 8 = 26\nsides (plus its interior).\n\nPassing a dimension of -1 will return 1 side; DG cells use a\n-1-dimensional side to indicate an entire cell should be treated\nas a side. This is useful for subsetting cells without re-writing\nthe arrays holding connectivity and field values; it also allows\na vtkDGCell instance to hold both sides of input cells mixed with\na subset of the input cells. For example, given 3 triangles as\ninput, generating an output with 1 input triangle unchanged and\nedges or vertices from the other two triangles requires per-cell\nblanking or subsetting of cells.\n"},
  {"GetSideConnectivity", PyvtkDGVert_GetSideConnectivity, METH_VARARGS,
   "GetSideConnectivity(self, side:int) -> (int, ...)\nC++: const std::vector<vtkIdType> &GetSideConnectivity(int side)\n    override;\nGetSideConnectivity(self) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *GetSideConnectivity() override;\n\nReturn the connectivity of the given side.\n\nThe side connectivity is a vector holding the indexes of\ncorner-points of the side into the connectivity vector of this\ncell.\n\nPassing a side of -1 should return the connectivity of the cell's\ninterior (a vector of the counting numbers from 0 to\nthis->GetNumberOfCorners()). This feature is used when rendering\ncells of dimension 2 or lower.\n"},
  {"GetSidesOfSide", PyvtkDGVert_GetSidesOfSide, METH_VARARGS,
   "GetSidesOfSide(self, side:int) -> (int, ...)\nC++: const std::vector<vtkIdType> &GetSidesOfSide(int side)\n    override;\n\nReturn a vector of side IDs given an input side ID.\n\nPassing a side of -1 will return the sides of the element itself.\nThe returned values **are not** corner-point IDs; they **are**\nside IDs. You can call GetSideConnectivity on each entry of the\nreturned vector to obtain corner-point IDs.\n"},
  {"GetReferencePoints", PyvtkDGVert_GetReferencePoints, METH_VARARGS,
   "GetReferencePoints(self) -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *GetReferencePoints() override;\n\nReturn a singleton array initialized with the reference-cell's\ncorner point coordinates.\n\nWhen implementing a subclass, call FillReferencePoints() in your\noverride. This should always return the same vtkTypeFloat32Array\neach time so that the array is only uploaded to the GPU once.\n"},
  {"GetSideOffsetsAndShapes", PyvtkDGVert_GetSideOffsetsAndShapes, METH_VARARGS,
   "GetSideOffsetsAndShapes(self) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *GetSideOffsetsAndShapes() override;\n\nReturn a singleton array initialized with 2-tuples of (offset,\nshape) values.\n\nWhen implementing a subclass, call FillSideOffsetsAndShapes() in\nyour override. This should always return the same\nvtkTypeInt32Array each time so that the array is only uploaded to\nthe GPU once.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGVert_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGVert_GetDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("reference_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGVert_GetReferencePoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetReferencePoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_connectivity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGVert_GetSideConnectivity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSideConnectivity\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_offsets_and_shapes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGVert_GetSideOffsetsAndShapes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSideOffsetsAndShapes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_side_types"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGVert_GetNumberOfSideTypes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfSideTypes\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGVert_Doc =
  "vtkDGVert - Metadata for a discontinuous Galerkin vertex.\n\n"
  "Superclass: vtkDGCell\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGVert_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGVert", // tp_name
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
  PyvtkDGVert_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGVert_StaticNew()
{
  return vtkDGVert::New();
}

PyObject *PyvtkDGVert_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGVert_Type, PyvtkDGVert_Methods,
    "vtkDGVert",
 &PyvtkDGVert_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDGCell_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGVert_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGVert(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGVert_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGVert", o) != 0)
  {
    Py_DECREF(o);
  }

}

