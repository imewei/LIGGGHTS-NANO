// python wrapper for vtkXMLStructuredGridWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLStructuredGridWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXMLStructuredGridWriter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXMLStructuredGridWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLStructuredDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLStructuredDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLStructuredDataWriter_ClassNew
#endif

static PyObject *
PyvtkXMLStructuredGridWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLStructuredGridWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridWriter *op = static_cast<vtkXMLStructuredGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLStructuredGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLStructuredGridWriter *tempr = vtkXMLStructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridWriter *op = static_cast<vtkXMLStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLStructuredGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLStructuredGridWriter::NewInstance());

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
PyvtkXMLStructuredGridWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLStructuredGridWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridWriter *op = static_cast<vtkXMLStructuredGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLStructuredGridWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridWriter *op = static_cast<vtkXMLStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLStructuredGridWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridWriter *op = static_cast<vtkXMLStructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLStructuredGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLStructuredGridWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLStructuredGridWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLStructuredGridWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLStructuredGridWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLStructuredGridWriter\nC++: static vtkXMLStructuredGridWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLStructuredGridWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLStructuredGridWriter\nC++: vtkXMLStructuredGridWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLStructuredGridWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLStructuredGridWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkXMLStructuredGridWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {"GetDefaultFileExtension", PyvtkXMLStructuredGridWriter_GetDefaultFileExtension, METH_VARARGS,
   "GetDefaultFileExtension(self) -> str\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXMLStructuredGridWriter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLStructuredGridWriter_GetInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("default_file_extension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLStructuredGridWriter_GetDefaultFileExtension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDefaultFileExtension\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXMLStructuredGridWriter_Doc =
  "vtkXMLStructuredGridWriter - Write VTK XML StructuredGrid files.\n\n"
  "Superclass: vtkXMLStructuredDataWriter\n\n"
  "vtkXMLStructuredGridWriter writes the VTK XML StructuredGrid file\n"
  "format.  One structured grid input can be written into one file in\n"
  "any number of streamed pieces.  The standard extension for this\n"
  "writer's file format is \"vts\".  This writer is also used to write a\n"
  "single piece of the parallel file format.\n\n"
  "@sa\n"
  "vtkXMLPStructuredGridWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLStructuredGridWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLStructuredGridWriter", // tp_name
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
  PyvtkXMLStructuredGridWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLStructuredGridWriter_StaticNew()
{
  return vtkXMLStructuredGridWriter::New();
}

PyObject *PyvtkXMLStructuredGridWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLStructuredGridWriter_Type, PyvtkXMLStructuredGridWriter_Methods,
    "vtkXMLStructuredGridWriter",
 &PyvtkXMLStructuredGridWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLStructuredDataWriter_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXMLStructuredGridWriter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLStructuredGridWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLStructuredGridWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLStructuredGridWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

