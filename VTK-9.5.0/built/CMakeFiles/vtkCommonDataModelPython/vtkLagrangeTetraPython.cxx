// python wrapper for vtkLagrangeTetra
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLagrangeTetra.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLagrangeTetra(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLagrangeTetra_ClassNew(); }

#ifndef DECLARED_PyvtkHigherOrderTetra_ClassNew
extern "C" { PyObject *PyvtkHigherOrderTetra_ClassNew(); }
#define DECLARED_PyvtkHigherOrderTetra_ClassNew
#endif

static PyObject *
PyvtkLagrangeTetra_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeTetra::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangeTetra::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangeTetra *tempr = vtkLagrangeTetra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangeTetra *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangeTetra::NewInstance());

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
PyvtkLagrangeTetra_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLagrangeTetra::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLagrangeTetra::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkLagrangeTetra::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkLagrangeTetra::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkLagrangeTetra::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateFunctions(temp0, temp1);
    }
    else
    {
      op->vtkLagrangeTetra::InterpolateFunctions(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateDerivs(temp0, temp1);
    }
    else
    {
      op->vtkLagrangeTetra::InterpolateDerivs(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetEdgeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderCurve *tempr = (ap.IsBound() ?
      op->GetEdgeCell() :
      op->vtkLagrangeTetra::GetEdgeCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeTetra_GetFaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeTetra *op = static_cast<vtkLagrangeTetra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderTriangle *tempr = (ap.IsBound() ?
      op->GetFaceCell() :
      op->vtkLagrangeTetra::GetFaceCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangeTetra_Methods[] = {
  {"IsTypeOf", PyvtkLagrangeTetra_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangeTetra_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangeTetra_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLagrangeTetra\nC++: static vtkLagrangeTetra *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangeTetra_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLagrangeTetra\nC++: vtkLagrangeTetra *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLagrangeTetra_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLagrangeTetra_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCellType", PyvtkLagrangeTetra_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nReturn the type of cell.\n"},
  {"GetEdge", PyvtkLagrangeTetra_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkLagrangeTetra_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"InterpolateFunctions", PyvtkLagrangeTetra_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    weights:[float, ...]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *weights) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives) No-ops at this level. Typically overridden\nin subclasses.\n"},
  {"InterpolateDerivs", PyvtkLagrangeTetra_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, ...]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override;\n\n"},
  {"GetEdgeCell", PyvtkLagrangeTetra_GetEdgeCell, METH_VARARGS,
   "GetEdgeCell(self) -> vtkHigherOrderCurve\nC++: vtkHigherOrderCurve *GetEdgeCell() override;\n\n"},
  {"GetFaceCell", PyvtkLagrangeTetra_GetFaceCell, METH_VARARGS,
   "GetFaceCell(self) -> vtkHigherOrderTriangle\nC++: vtkHigherOrderTriangle *GetFaceCell() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLagrangeTetra_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("cell_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLagrangeTetra_GetCellType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("edge_cell"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLagrangeTetra_GetEdgeCell(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEdgeCell\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("face_cell"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLagrangeTetra_GetFaceCell(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFaceCell\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLagrangeTetra_Doc =
  "vtkLagrangeTetra - A 3D cell that represents an arbitrary order\nLagrange tetrahedron\n\n"
  "Superclass: vtkHigherOrderTetra\n\n"
  "vtkLagrangeTetra is a concrete implementation of vtkCell to represent\n"
  "a 3D tetrahedron using Lagrange shape functions of user specified\n"
  "order.\n\n"
  "The number of points in a Lagrange cell determines the order over\n"
  "which they are iterated relative to the parametric coordinate system\n"
  "of the cell. The first points that are reported are vertices. They\n"
  "appear in the same order in which they would appear in linear cells.\n"
  "Mid-edge points are reported next. They are reported in sequence. For\n"
  "two- and three-dimensional (3D) cells, the following set of points to\n"
  "be reported are face points. Finally, 3D cells report points interior\n"
  "to their volume.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangeTetra_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkLagrangeTetra", // tp_name
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
  PyvtkLagrangeTetra_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangeTetra_StaticNew()
{
  return vtkLagrangeTetra::New();
}

PyObject *PyvtkLagrangeTetra_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLagrangeTetra_Type, PyvtkLagrangeTetra_Methods,
    "vtkLagrangeTetra",
 &PyvtkLagrangeTetra_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHigherOrderTetra_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLagrangeTetra_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangeTetra(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangeTetra_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangeTetra", o) != 0)
  {
    Py_DECREF(o);
  }

}

