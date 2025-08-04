// python wrapper for vtkDGTranscribeUnstructuredCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDGTranscribeUnstructuredCells.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGTranscribeUnstructuredCells(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGTranscribeUnstructuredCells_ClassNew(); }


static PyObject *
PyvtkDGTranscribeUnstructuredCells_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGTranscribeUnstructuredCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGTranscribeUnstructuredCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGTranscribeUnstructuredCells *tempr = vtkDGTranscribeUnstructuredCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGTranscribeUnstructuredCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGTranscribeUnstructuredCells::NewInstance());

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
PyvtkDGTranscribeUnstructuredCells_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGTranscribeUnstructuredCells::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGTranscribeUnstructuredCells::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_ClaimMatchingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClaimMatchingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  vtkUnstructuredGridToCellGrid::TranscribeQuery *temp0;
  vtkDGCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, typeid(vtkUnstructuredGridToCellGrid::TranscribeQuery).name()) &&
      ap.GetVTKObject(temp1, "vtkDGCell"))
  {
    bool tempr = (ap.IsBound() ?
      op->ClaimMatchingCells(temp0, temp1) :
      op->vtkDGTranscribeUnstructuredCells::ClaimMatchingCells(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_TranscribeMatchingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranscribeMatchingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  vtkUnstructuredGridToCellGrid::TranscribeQuery *temp0;
  vtkDGCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, typeid(vtkUnstructuredGridToCellGrid::TranscribeQuery).name()) &&
      ap.GetVTKObject(temp1, "vtkDGCell"))
  {
    bool tempr = (ap.IsBound() ?
      op->TranscribeMatchingCells(temp0, temp1) :
      op->vtkDGTranscribeUnstructuredCells::TranscribeMatchingCells(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGTranscribeUnstructuredCells_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGTranscribeUnstructuredCells *op = static_cast<vtkDGTranscribeUnstructuredCells *>(vp);

  vtkUnstructuredGridToCellGrid::TranscribeQuery *temp0;
  vtkCellMetadata *temp1 = nullptr;
  vtkCellGridResponders *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, typeid(vtkUnstructuredGridToCellGrid::TranscribeQuery).name()) &&
      ap.GetVTKObject(temp1, "vtkCellMetadata") &&
      ap.GetVTKObject(temp2, "vtkCellGridResponders"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0, temp1, temp2) :
      op->vtkDGTranscribeUnstructuredCells::Query(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGTranscribeUnstructuredCells_Methods[] = {
  {"IsTypeOf", PyvtkDGTranscribeUnstructuredCells_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGTranscribeUnstructuredCells_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGTranscribeUnstructuredCells_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGTranscribeUnstructuredCells\nC++: static vtkDGTranscribeUnstructuredCells *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGTranscribeUnstructuredCells_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGTranscribeUnstructuredCells\nC++: vtkDGTranscribeUnstructuredCells *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGTranscribeUnstructuredCells_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGTranscribeUnstructuredCells_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ClaimMatchingCells", PyvtkDGTranscribeUnstructuredCells_ClaimMatchingCells, METH_VARARGS,
   "ClaimMatchingCells(self,\n    query:vtkUnstructuredGridToCellGrid.TranscribeQuery,\n    cellType:vtkDGCell) -> bool\nC++: bool ClaimMatchingCells(TranscribeQuery *query,\n    vtkDGCell *cellType)\n\n"},
  {"TranscribeMatchingCells", PyvtkDGTranscribeUnstructuredCells_TranscribeMatchingCells, METH_VARARGS,
   "TranscribeMatchingCells(self,\n    query:vtkUnstructuredGridToCellGrid.TranscribeQuery,\n    cellType:vtkDGCell) -> bool\nC++: bool TranscribeMatchingCells(TranscribeQuery *query,\n    vtkDGCell *cellType)\n\n"},
  {"Query", PyvtkDGTranscribeUnstructuredCells_Query, METH_VARARGS,
   "Query(self, query:vtkUnstructuredGridToCellGrid.TranscribeQuery,\n    cellType:vtkCellMetadata, caches:vtkCellGridResponders)\n    -> bool\nC++: bool Query(TranscribeQuery *query, vtkCellMetadata *cellType,\n     vtkCellGridResponders *caches) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGTranscribeUnstructuredCells_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGTranscribeUnstructuredCells_Doc =
  "vtkDGTranscribeUnstructuredCells - Transcribe unstructured-grid cells\nas vtkDGCell subclasses.\n\n"
  "Superclass: vtkCellGridResponder[vtkUnstructuredGridToCellGrid::TranscribeQuery]\n\n"
  "This class currently only outputs linear geometry but can properly\n"
  "model higher-order polynomial cell-attributes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGTranscribeUnstructuredCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGTranscribeUnstructuredCells", // tp_name
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
  PyvtkDGTranscribeUnstructuredCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGTranscribeUnstructuredCells_StaticNew()
{
  return vtkDGTranscribeUnstructuredCells::New();
}

PyObject *PyvtkDGTranscribeUnstructuredCells_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGTranscribeUnstructuredCells_Type, PyvtkDGTranscribeUnstructuredCells_Methods,
    "vtkDGTranscribeUnstructuredCells",
 &PyvtkDGTranscribeUnstructuredCells_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject(typeid(vtkCellGridResponder<vtkUnstructuredGridToCellGrid::TranscribeQuery>).name());

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGTranscribeUnstructuredCells_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGTranscribeUnstructuredCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGTranscribeUnstructuredCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGTranscribeUnstructuredCells", o) != 0)
  {
    Py_DECREF(o);
  }

}

