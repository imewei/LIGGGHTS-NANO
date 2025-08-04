// python wrapper for vtkUnstructuredGridFieldAnnotations
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridFieldAnnotations.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkUnstructuredGridFieldAnnotations(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkUnstructuredGridFieldAnnotations_ClassNew(); }


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridFieldAnnotations::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridFieldAnnotations::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridFieldAnnotations *tempr = vtkUnstructuredGridFieldAnnotations::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridFieldAnnotations *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridFieldAnnotations::NewInstance());

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
PyvtkUnstructuredGridFieldAnnotations_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridFieldAnnotations::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridFieldAnnotations::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_FetchAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  vtkFieldData *temp0 = nullptr;
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    if (ap.IsBound())
    {
      op->FetchAnnotations(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridFieldAnnotations::FetchAnnotations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_AddAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  vtkFieldData *temp0 = nullptr;
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    if (ap.IsBound())
    {
      op->AddAnnotations(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridFieldAnnotations::AddAnnotations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridFieldAnnotations_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridFieldAnnotations *op = static_cast<vtkUnstructuredGridFieldAnnotations *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkUnstructuredGridFieldAnnotations::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridFieldAnnotations_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridFieldAnnotations_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridFieldAnnotations_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridFieldAnnotations_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkUnstructuredGridFieldAnnotations\nC++: static vtkUnstructuredGridFieldAnnotations *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridFieldAnnotations_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridFieldAnnotations\nC++: vtkUnstructuredGridFieldAnnotations *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridFieldAnnotations_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridFieldAnnotations_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FetchAnnotations", PyvtkUnstructuredGridFieldAnnotations_FetchAnnotations, METH_VARARGS,
   "FetchAnnotations(self, fieldData:vtkFieldData,\n    assembly:vtkDataAssembly) -> None\nC++: virtual void FetchAnnotations(vtkFieldData *fieldData,\n    vtkDataAssembly *assembly)\n\n"},
  {"AddAnnotations", PyvtkUnstructuredGridFieldAnnotations_AddAnnotations, METH_VARARGS,
   "AddAnnotations(self, fieldData:vtkFieldData,\n    assembly:vtkDataAssembly) -> None\nC++: virtual void AddAnnotations(vtkFieldData *fieldData,\n    vtkDataAssembly *assembly)\n\n"},
  {"Reset", PyvtkUnstructuredGridFieldAnnotations_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkUnstructuredGridFieldAnnotations_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkUnstructuredGridFieldAnnotations_Doc =
  "vtkUnstructuredGridFieldAnnotations - Fetch/add field annotations\nfrom/to an unstructured grid's field data.\n\n"
  "Superclass: vtkObject\n\n"
  "Takes partitioned dataset collection (or a single unstructured grid)\n"
  "as input and parses (or adds) field-data records as annotations that\n"
  "can be used to improve conversion to (or from) a vtkCellGrid.\n\n"
  "This field data is currently added by vtkIOSSReader. The\n"
  "vtkIOSSCellGridReader and vtkDGTranscribeUnstructuredCells both use\n"
  "this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridFieldAnnotations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkUnstructuredGridFieldAnnotations", // tp_name
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
  PyvtkUnstructuredGridFieldAnnotations_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridFieldAnnotations_StaticNew()
{
  return vtkUnstructuredGridFieldAnnotations::New();
}

PyObject *PyvtkUnstructuredGridFieldAnnotations_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridFieldAnnotations_Type, PyvtkUnstructuredGridFieldAnnotations_Methods,
    "vtkUnstructuredGridFieldAnnotations",
 &PyvtkUnstructuredGridFieldAnnotations_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkUnstructuredGridFieldAnnotations_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridFieldAnnotations(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridFieldAnnotations_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridFieldAnnotations", o) != 0)
  {
    Py_DECREF(o);
  }

}

