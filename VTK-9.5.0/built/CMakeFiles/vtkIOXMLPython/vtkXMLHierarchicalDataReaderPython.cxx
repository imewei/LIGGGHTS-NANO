// python wrapper for vtkXMLHierarchicalDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLHierarchicalDataReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXMLHierarchicalDataReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXMLHierarchicalDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLMultiGroupDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLMultiGroupDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLMultiGroupDataReader_ClassNew
#endif

static PyObject *
PyvtkXMLHierarchicalDataReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkXMLHierarchicalDataReader."
    " (" "Please use `vtkXMLMultiBlockDataReader` instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLHierarchicalDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkXMLHierarchicalDataReader."
    " (" "Please use `vtkXMLMultiBlockDataReader` instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLHierarchicalDataReader *tempr = vtkXMLHierarchicalDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLHierarchicalDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalDataReader::NewInstance());

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
PyvtkXMLHierarchicalDataReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkXMLHierarchicalDataReader."
    " (" "Please use `vtkXMLMultiBlockDataReader` instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLHierarchicalDataReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLHierarchicalDataReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLHierarchicalDataReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLHierarchicalDataReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLHierarchicalDataReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLHierarchicalDataReader\nC++: static vtkXMLHierarchicalDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLHierarchicalDataReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLHierarchicalDataReader\nC++: vtkXMLHierarchicalDataReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLHierarchicalDataReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLHierarchicalDataReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXMLHierarchicalDataReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXMLHierarchicalDataReader_Doc =
  "vtkXMLHierarchicalDataReader - Reader for hierarchical datasets\n\n"
  "Superclass: vtkXMLMultiGroupDataReader\n\n"
  "vtkXMLHierarchicalDataReader reads the VTK XML hierarchical data file\n"
  "format. XML hierarchical data files are meta-files that point to a\n"
  "list of serial VTK XML files. When reading in parallel, it will\n"
  "distribute sub-blocks among processor. If the number of sub-blocks is\n"
  "less than the number of processors, some processors will not have any\n"
  "sub-blocks for that level. If the number of sub-blocks is larger than\n"
  "the number of processors, each processor will possibly have more than\n"
  "1 sub-block.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLHierarchicalDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLHierarchicalDataReader", // tp_name
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
  PyvtkXMLHierarchicalDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLHierarchicalDataReader_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkXMLHierarchicalDataReader."
    " (" "Please use `vtkXMLMultiBlockDataReader` instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  return vtkXMLHierarchicalDataReader::New();
}

PyObject *PyvtkXMLHierarchicalDataReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLHierarchicalDataReader_Type, PyvtkXMLHierarchicalDataReader_Methods,
    "vtkXMLHierarchicalDataReader",
 &PyvtkXMLHierarchicalDataReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLMultiGroupDataReader_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXMLHierarchicalDataReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLHierarchicalDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLHierarchicalDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLHierarchicalDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

