// python wrapper for vtkDGRangeResponder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGRangeResponder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGRangeResponder(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGRangeResponder_ClassNew(); }


static PyObject *
PyvtkDGRangeResponder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGRangeResponder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRangeResponder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRangeResponder *op = static_cast<vtkDGRangeResponder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGRangeResponder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRangeResponder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGRangeResponder *tempr = vtkDGRangeResponder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRangeResponder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRangeResponder *op = static_cast<vtkDGRangeResponder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGRangeResponder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGRangeResponder::NewInstance());

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
PyvtkDGRangeResponder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGRangeResponder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRangeResponder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRangeResponder *op = static_cast<vtkDGRangeResponder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGRangeResponder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRangeResponder_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRangeResponder *op = static_cast<vtkDGRangeResponder *>(vp);

  vtkCellGridRangeQuery *temp0 = nullptr;
  vtkCellMetadata *temp1 = nullptr;
  vtkCellGridResponders *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCellGridRangeQuery") &&
      ap.GetVTKObject(temp1, "vtkCellMetadata") &&
      ap.GetVTKObject(temp2, "vtkCellGridResponders"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0, temp1, temp2) :
      op->vtkDGRangeResponder::Query(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGRangeResponder_Methods[] = {
  {"IsTypeOf", PyvtkDGRangeResponder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGRangeResponder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGRangeResponder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGRangeResponder\nC++: static vtkDGRangeResponder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGRangeResponder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGRangeResponder\nC++: vtkDGRangeResponder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGRangeResponder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGRangeResponder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Query", PyvtkDGRangeResponder_Query, METH_VARARGS,
   "Query(self, query:vtkCellGridRangeQuery, cellType:vtkCellMetadata,\n     caches:vtkCellGridResponders) -> bool\nC++: bool Query(vtkCellGridRangeQuery *query,\n    vtkCellMetadata *cellType, vtkCellGridResponders *caches)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGRangeResponder_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGRangeResponder_Doc =
  "vtkDGRangeResponder - Compute the range of a cell-attribute over any\nvtkDGCell.\n\n"
  "Superclass: vtkCellGridResponder[vtkCellGridRangeQuery]\n\n"
  "This simply computes the range of the underlying scalar arrays; it\n"
  "does not attempt to account for true minima/maximum induced by\n"
  "higher-order curvature.\n\n"
  "This responder also makes the assumption that the value for the\n"
  "attribute at each collocation point is exactly the product of a\n"
  "single basis function (usually 1.0) and its associated coefficient.\n"
  "This means that when one basis function takes on the value 1.0 the\n"
  "other basis functions are zero.\n\n"
  "Finally, for H(curl) and H(div) function spaces, this responder will\n"
  "use an attribute-calculator to compute values and mid-edge and\n"
  "mid-face points (respectively) rather than obtaining bounds directly\n"
  "from basis coefficients; this is because these function spaces also\n"
  "introduce a dependency on the inverse of the shape function gradient.\n\n"
  "Note that the computed ranges currently include all cells even if\n"
  "they are blanked and only sides are \"visible.\"\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGRangeResponder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGRangeResponder", // tp_name
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
  PyvtkDGRangeResponder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGRangeResponder_StaticNew()
{
  return vtkDGRangeResponder::New();
}

PyObject *PyvtkDGRangeResponder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGRangeResponder_Type, PyvtkDGRangeResponder_Methods,
    "vtkDGRangeResponder",
 &PyvtkDGRangeResponder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject(typeid(vtkCellGridResponder<vtkCellGridRangeQuery>).name());

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGRangeResponder_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGRangeResponder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGRangeResponder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGRangeResponder", o) != 0)
  {
    Py_DECREF(o);
  }

}

