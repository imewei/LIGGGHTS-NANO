// python wrapper for vtkXMLUniformGridAMRWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLUniformGridAMRWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXMLUniformGridAMRWriter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXMLUniformGridAMRWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLCompositeDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLCompositeDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLCompositeDataWriter_ClassNew
#endif

static PyObject *
PyvtkXMLUniformGridAMRWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLUniformGridAMRWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUniformGridAMRWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLUniformGridAMRWriter *tempr = vtkXMLUniformGridAMRWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLUniformGridAMRWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUniformGridAMRWriter::NewInstance());

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
PyvtkXMLUniformGridAMRWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLUniformGridAMRWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLUniformGridAMRWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLUniformGridAMRWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLUniformGridAMRWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLUniformGridAMRWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLUniformGridAMRWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLUniformGridAMRWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLUniformGridAMRWriter\nC++: static vtkXMLUniformGridAMRWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLUniformGridAMRWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLUniformGridAMRWriter\nC++: vtkXMLUniformGridAMRWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLUniformGridAMRWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLUniformGridAMRWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDefaultFileExtension", PyvtkXMLUniformGridAMRWriter_GetDefaultFileExtension, METH_VARARGS,
   "GetDefaultFileExtension(self) -> str\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXMLUniformGridAMRWriter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("default_file_extension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLUniformGridAMRWriter_GetDefaultFileExtension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDefaultFileExtension\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXMLUniformGridAMRWriter_Doc =
  "vtkXMLUniformGridAMRWriter - writer for vtkUniformGridAMR.\n\n"
  "Superclass: vtkXMLCompositeDataWriter\n\n"
  "vtkXMLUniformGridAMRWriter is a vtkXMLCompositeDataWriter subclass to\n"
  "handle vtkUniformGridAMR datasets (including vtkNonOverlappingAMR and\n"
  "vtkOverlappingAMR).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLUniformGridAMRWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLUniformGridAMRWriter", // tp_name
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
  PyvtkXMLUniformGridAMRWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLUniformGridAMRWriter_StaticNew()
{
  return vtkXMLUniformGridAMRWriter::New();
}

PyObject *PyvtkXMLUniformGridAMRWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLUniformGridAMRWriter_Type, PyvtkXMLUniformGridAMRWriter_Methods,
    "vtkXMLUniformGridAMRWriter",
 &PyvtkXMLUniformGridAMRWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLCompositeDataWriter_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXMLUniformGridAMRWriter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLUniformGridAMRWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLUniformGridAMRWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLUniformGridAMRWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

