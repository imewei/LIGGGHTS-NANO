// python wrapper for vtkDGAttributeInformation
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
#include "vtkDGAttributeInformation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGAttributeInformation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGAttributeInformation_ClassNew(); }

#ifndef DECLARED_PyvtkCellAttributeInformation_ClassNew
extern "C" { PyObject *PyvtkCellAttributeInformation_ClassNew(); }
#define DECLARED_PyvtkCellAttributeInformation_ClassNew
#endif

static PyObject *
PyvtkDGAttributeInformation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGAttributeInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGAttributeInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGAttributeInformation *tempr = vtkDGAttributeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGAttributeInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGAttributeInformation::NewInstance());

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
PyvtkDGAttributeInformation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGAttributeInformation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGAttributeInformation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetBasisOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBasisOrder() :
      op->vtkDGAttributeInformation::GetBasisOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetBasisValueSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisValueSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBasisValueSize() :
      op->vtkDGAttributeInformation::GetBasisValueSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetNumberOfBasisFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBasisFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBasisFunctions() :
      op->vtkDGAttributeInformation::GetNumberOfBasisFunctions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetDegreeOfFreedomSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegreeOfFreedomSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDegreeOfFreedomSize() :
      op->vtkDGAttributeInformation::GetDegreeOfFreedomSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetSharedDegreesOfFreedom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedDegreesOfFreedom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSharedDegreesOfFreedom() :
      op->vtkDGAttributeInformation::GetSharedDegreesOfFreedom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_GetBasisName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetBasisName() :
      op->vtkDGAttributeInformation::GetBasisName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_BasisShapeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BasisShapeName");

  vtkDGCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDGCell"))
  {
    std::string tempr = vtkDGAttributeInformation::BasisShapeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGAttributeInformation_PrepareForGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGAttributeInformation *op = static_cast<vtkDGAttributeInformation *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  vtkCellAttribute *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata") &&
      ap.GetVTKObject(temp1, "vtkCellAttribute"))
  {
    vtkSmartPointer<vtkCellAttributeCalculator> tempr = (ap.IsBound() ?
      op->PrepareForGrid(temp0, temp1) :
      op->vtkDGAttributeInformation::PrepareForGrid(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGAttributeInformation_Methods[] = {
  {"IsTypeOf", PyvtkDGAttributeInformation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGAttributeInformation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGAttributeInformation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGAttributeInformation\nC++: static vtkDGAttributeInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGAttributeInformation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGAttributeInformation\nC++: vtkDGAttributeInformation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGAttributeInformation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGAttributeInformation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBasisOrder", PyvtkDGAttributeInformation_GetBasisOrder, METH_VARARGS,
   "GetBasisOrder(self) -> int\nC++: int GetBasisOrder() override;\n\nReturn the polynomial order of the interpolant.\n"},
  {"GetBasisValueSize", PyvtkDGAttributeInformation_GetBasisValueSize, METH_VARARGS,
   "GetBasisValueSize(self) -> int\nC++: int GetBasisValueSize() override;\n\nReturn the number of components of each basis function.\n\nFor HGRAD function spaces, this is 1. For HCURL or HDIV function\nspaces, this is equal to the parametric dimension of the cell\ntype in question.\n"},
  {"GetNumberOfBasisFunctions", PyvtkDGAttributeInformation_GetNumberOfBasisFunctions, METH_VARARGS,
   "GetNumberOfBasisFunctions(self) -> int\nC++: int GetNumberOfBasisFunctions() override;\n\nReturn the number of basis functions for the cell type in\nquestion.\n"},
  {"GetDegreeOfFreedomSize", PyvtkDGAttributeInformation_GetDegreeOfFreedomSize, METH_VARARGS,
   "GetDegreeOfFreedomSize(self) -> int\nC++: int GetDegreeOfFreedomSize() override;\n\nReturn the number of times each basis function should be applied\nto obtain an attribute value.\n\nFor example, each HGRAD basis function for a hexahedron returns a\nsingle value per degree of freedom. However, when the output\nattribute has 3 components (say, x, y, and z point coordinates),\nthen the weighted sum of the basis functions must be applied 3\ntimes (once for each point coordinate). This is how vector- or\ntensor-valued attributes may be composed from scalar basis\nfunctions.\n"},
  {"GetSharedDegreesOfFreedom", PyvtkDGAttributeInformation_GetSharedDegreesOfFreedom, METH_VARARGS,
   "GetSharedDegreesOfFreedom(self) -> bool\nC++: bool GetSharedDegreesOfFreedom() override;\n\nReturn whether degrees of freedom are shared by multiple cells or\nnot.\n\nThis roughly translates to whether the attribute is allowed to\nexpress discontinuities at cell boundaries; when degrees of\nfreedom are shared, continuity is presumed. Otherwise, the\ninterpolation functions may not produce identical values where\ncell boundaries overlap.\n"},
  {"GetBasisName", PyvtkDGAttributeInformation_GetBasisName, METH_VARARGS,
   "GetBasisName(self) -> str\nC++: std::string GetBasisName() override;\n\nReturn the name of a basis function specific to the cell-metadata\nand cell-attribute.\n"},
  {"BasisShapeName", PyvtkDGAttributeInformation_BasisShapeName, METH_VARARGS,
   "BasisShapeName(cellType:vtkDGCell) -> str\nC++: static std::string BasisShapeName(vtkDGCell *cellType)\n\nGiven a cell type, return an abbreviated shape name. The returned\nvalue will always be a valid C identifier. When cellType is null,\nthe returned string will be `None`.\n"},
  {"PrepareForGrid", PyvtkDGAttributeInformation_PrepareForGrid, METH_VARARGS,
   "PrepareForGrid(self, cell:vtkCellMetadata,\n    attribute:vtkCellAttribute) -> vtkCellAttributeCalculator\nC++: vtkSmartPointer<vtkCellAttributeCalculator> PrepareForGrid(\n    vtkCellMetadata *cell, vtkCellAttribute *attribute) override;\n\nSubclasses should override this to create an instance of their\nclass with member variables set to perform calculations on the\ngiven cell type and field.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGAttributeInformation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("basis_order"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetBasisOrder(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBasisOrder\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("basis_value_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetBasisValueSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBasisValueSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("degree_of_freedom_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetDegreeOfFreedomSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDegreeOfFreedomSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shared_degrees_of_freedom"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetSharedDegreesOfFreedom(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSharedDegreesOfFreedom\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("basis_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetBasisName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBasisName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_basis_functions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGAttributeInformation_GetNumberOfBasisFunctions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfBasisFunctions\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGAttributeInformation_Doc =
  "vtkDGAttributeInformation - Provide information about a cell\nattribute's basis functions on one cell type.\n\n"
  "Superclass: vtkCellAttributeInformation\n\n"
  "Note that some of the methods may be unable to return meaningful\n"
  "information about some attribute types; this class has methods that\n"
  "may be specific to subclasses of vtkDGCell. If this API does not fit\n"
  "your cell type or attribute type; do not register a calculator\n"
  "subclass of this type. Instead, it is up to consuming code to ensure\n"
  "a non-null calculator is returned.\n\n"
  "This calculator assumes interpolation is performed as a weighted sum\n"
  "of basis functions evaluated at some parameter value.\n\n"
  "\\[\n"
  "   f_j = \\sum_i B_i(r) w_{i,j}\\]\n\n"
  "where $i\\in[0, M - 1] $ and $j\\in[0,N - 1[ $. + $M $ is\n"
  "GetNumberOfBasisFunctions(). + $N $ is\n"
  "NumberOfComponentsPerDegreeOfFreedom().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGAttributeInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGAttributeInformation", // tp_name
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
  PyvtkDGAttributeInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGAttributeInformation_StaticNew()
{
  return vtkDGAttributeInformation::New();
}

PyObject *PyvtkDGAttributeInformation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGAttributeInformation_Type, PyvtkDGAttributeInformation_Methods,
    "vtkDGAttributeInformation",
 &PyvtkDGAttributeInformation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCellAttributeInformation_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGAttributeInformation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGAttributeInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGAttributeInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGAttributeInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

