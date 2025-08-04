// python wrapper for vtkCellGridResponders
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkSmartPointer.h"
#include "vtkCellGridResponders.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridResponders(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridResponders_ClassNew(); }


static PyObject *
PyvtkCellGridResponders_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridResponders::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridResponders::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridResponders *tempr = vtkCellGridResponders::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridResponders *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridResponders::NewInstance());

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
PyvtkCellGridResponders_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridResponders::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridResponders::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  vtkCellGridQuery *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata") &&
      ap.GetVTKObject(temp1, "vtkCellGridQuery"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0, temp1) :
      op->vtkCellGridResponders::Query(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_GetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkObject> tempr = (ap.IsBound() ?
      op->GetCacheData(temp0) :
      op->vtkCellGridResponders::GetCacheData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridResponders_SetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridResponders *op = static_cast<vtkCellGridResponders *>(vp);

  size_t temp0;
  vtkSmartPointer<vtkObject> temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCacheData(temp0, temp1, temp2) :
      op->vtkCellGridResponders::SetCacheData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridResponders_Methods[] = {
  {"IsTypeOf", PyvtkCellGridResponders_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridResponders_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridResponders_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridResponders\nC++: static vtkCellGridResponders *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridResponders_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridResponders\nC++: vtkCellGridResponders *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridResponders_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridResponders_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Query", PyvtkCellGridResponders_Query, METH_VARARGS,
   "Query(self, cellType:vtkCellMetadata, query:vtkCellGridQuery)\n    -> bool\nC++: bool Query(vtkCellMetadata *cellType,\n    vtkCellGridQuery *query)\n\nInvoke a responder for the given query and cell type.\n\nIf none exists, return false.\n"},
  {"GetCacheData", PyvtkCellGridResponders_GetCacheData, METH_VARARGS,
   "GetCacheData(self, key:int) -> vtkObject\nC++: vtkSmartPointer<vtkObject> GetCacheData(std::size_t key)\n\nReturn a cache object given a key.\n\nObjects held in this cache may live for the duration of an\napplication, not a single query.\n\nCached objects are expected to invalidate themselves (say by\nusing vtkCommand to observe events that should invalidate them).\n"},
  {"SetCacheData", PyvtkCellGridResponders_SetCacheData, METH_VARARGS,
   "SetCacheData(self, key:int, value:vtkObject, overwrite:bool=False)\n     -> bool\nC++: bool SetCacheData(std::size_t key,\n    vtkSmartPointer<vtkObject> value, bool overwrite=false)\n\nAdd a cache entry mapping key to value.\n\nIf overwrite is true, this will release any pre-existing value\n(which may force its destruction).\n\nThis method returns true upon success and false otherwise.\nFailure will occur if overwrite is false and either + there is a\npre-existing object at key that it not value; or + value is null\n(adding empty entries is forbidden).\n\nNote that by passing a null value with overwrite set to true, you\ncan clear an existing cache entry.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridResponders_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridResponders_Doc =
  "vtkCellGridResponders - A container that holds objects able to\nrespond to queries\n         specialized for particular vtkCellMetadata types.\n\n"
  "Superclass: vtkObject\n\n"
  "This class holds sets of responders for vtkCellGridQuery and for\n"
  "vtkCellAttributeQuery.\n\n"
  "## Cell-grid query responders\n\n"
  "vtkCellGridResponders holds a list of objects statically registered\n"
  "to the vtkCellMetadata subclass. These objects respond to queries for\n"
  "information (e.g., a bounding box) or processing (e.g., rendering,\n"
  "picking, generating isocontours) for one cell type (and subclasses of\n"
  "that cell type if no more specific responder is registered).\n\n"
  "Application code (such as a plugin) can register subclasses of\n"
  "vtkCellGridResponse which accept the API of a particular\n"
  "vtkCellGridQuery for that cell type. Then, when a query is passed to\n"
  "the cell, this collection will identify matching responders for the\n"
  "query and invoke them until one returns true (indicating success).\n"
  "Multiple matches can exist as a responder can be registered to a\n"
  "common base cell class and/or to handle common base query classes.\n\n"
  "If a given cell type cannot respond to a query, its superclasses are\n"
  "asked to respond. If no superclass can respond to the query, then\n"
  "query's superclasses are searched for responders.\n\n"
  "Because queries can be registered to cell types at any time, existing\n"
  "cell types can be extended to support new features by additional\n"
  "libraries.\n\n"
  "## Cell-attribute calculators\n\n"
  "In order to support the evaluation of vtkCellAttribute data on any\n"
  "vtkCellMetadata (cell type), this class also holds \"calculators\"\n"
  "grouped by both attribute and cell type. This API is different that\n"
  "vtkCellGridQuery because vtkCellAttribute is not subclassed by\n"
  "attribute type but rather uses vtkStringToken data to determine the\n"
  "nature of the attribute (e.g., Lagrange; Nedelec; Raviart-Thomas;\n"
  "etc.).\n\n"
  "It is also different in that these objects are expected to be used\n"
  "inside vtkCellGridQuery to evaluate a single cell at a time rather\n"
  "than longer-running queries across all cells.\n\n"
  "@sa vtkCellMetadata vtkCellGrid vtkCellAttribute\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridResponders_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridResponders", // tp_name
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
  PyvtkCellGridResponders_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridResponders_StaticNew()
{
  return vtkCellGridResponders::New();
}

PyObject *PyvtkCellGridResponders_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridResponders_Type, PyvtkCellGridResponders_Methods,
    "vtkCellGridResponders",
 &PyvtkCellGridResponders_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridResponders_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridResponders(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridResponders_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridResponders", o) != 0)
  {
    Py_DECREF(o);
  }

}

