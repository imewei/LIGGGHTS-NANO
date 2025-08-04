// python wrapper for vtkXMLPTableReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLPTableReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXMLPTableReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXMLPTableReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPDataObjectReader_ClassNew
extern "C" { PyObject *PyvtkXMLPDataObjectReader_ClassNew(); }
#define DECLARED_PyvtkXMLPDataObjectReader_ClassNew
#endif

static PyObject *
PyvtkXMLPTableReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPTableReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPTableReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPTableReader *tempr = vtkXMLPTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPTableReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPTableReader::NewInstance());

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
PyvtkXMLPTableReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLPTableReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLPTableReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLPTableReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPTableReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLPTableReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPTableReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLPTableReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPTableReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkXMLPTableReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyOutputInformation(temp0, temp1);
    }
    else
    {
      op->vtkXMLPTableReader::CopyOutputInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetNumberOfColumnArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnArrays() :
      op->vtkXMLPTableReader::GetNumberOfColumnArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetColumnArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnArrayName(temp0) :
      op->vtkXMLPTableReader::GetColumnArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetColumnArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnArrayStatus(temp0) :
      op->vtkXMLPTableReader::GetColumnArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_SetColumnArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXMLPTableReader::SetColumnArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPTableReader_GetColumnSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPTableReader *op = static_cast<vtkXMLPTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetColumnSelection() :
      op->vtkXMLPTableReader::GetColumnSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPTableReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLPTableReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPTableReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPTableReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLPTableReader\nC++: static vtkXMLPTableReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPTableReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLPTableReader\nC++: vtkXMLPTableReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLPTableReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLPTableReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkXMLPTableReader_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkTable\nC++: vtkTable *GetOutput()\nGetOutput(self, idx:int) -> vtkTable\nC++: vtkTable *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {"CopyOutputInformation", PyvtkXMLPTableReader_CopyOutputInformation, METH_VARARGS,
   "CopyOutputInformation(self, outInfo:vtkInformation, port:int)\n    -> None\nC++: void CopyOutputInformation(vtkInformation *outInfo, int port)\n     override;\n\nFor the specified port, copy the information this reader sets up\nin SetupOutputInformation to outInfo\n"},
  {"GetNumberOfColumnArrays", PyvtkXMLPTableReader_GetNumberOfColumnArrays, METH_VARARGS,
   "GetNumberOfColumnArrays(self) -> int\nC++: int GetNumberOfColumnArrays()\n\nGet the number of columns arrays available in the input.\n"},
  {"GetColumnArrayName", PyvtkXMLPTableReader_GetColumnArrayName, METH_VARARGS,
   "GetColumnArrayName(self, index:int) -> str\nC++: const char *GetColumnArrayName(int index)\n\nGet the name of the column with the given index in the input.\n"},
  {"GetColumnArrayStatus", PyvtkXMLPTableReader_GetColumnArrayStatus, METH_VARARGS,
   "GetColumnArrayStatus(self, name:str) -> int\nC++: int GetColumnArrayStatus(const char *name)\n\nGet/Set whether the column array with the given name is to be\nread.\n"},
  {"SetColumnArrayStatus", PyvtkXMLPTableReader_SetColumnArrayStatus, METH_VARARGS,
   "SetColumnArrayStatus(self, name:str, status:int) -> None\nC++: void SetColumnArrayStatus(const char *name, int status)\n\n"},
  {"GetColumnSelection", PyvtkXMLPTableReader_GetColumnSelection, METH_VARARGS,
   "GetColumnSelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetColumnSelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXMLPTableReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("output"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLPTableReader_GetOutput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetOutput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("column_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLPTableReader_GetColumnSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetColumnSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_column_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLPTableReader_GetNumberOfColumnArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfColumnArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXMLPTableReader_Doc =
  "vtkXMLPTableReader - Read PVTK XML Table files.\n\n"
  "Superclass: vtkXMLPDataObjectReader\n\n"
  "vtkXMLPTableReader reads the PVTK XML Table file format.  This reads\n"
  "the parallel format's summary file and then uses vtkXMLTableReader to\n"
  "read data from the individual Table piece files.  Streaming is\n"
  "supported. The standard extension for this reader's file format is\n"
  "\"pvtt\".\n\n"
  "@sa\n"
  "vtkXMLTableReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLPTableReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLPTableReader", // tp_name
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
  PyvtkXMLPTableReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPTableReader_StaticNew()
{
  return vtkXMLPTableReader::New();
}

PyObject *PyvtkXMLPTableReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLPTableReader_Type, PyvtkXMLPTableReader_Methods,
    "vtkXMLPTableReader",
 &PyvtkXMLPTableReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPDataObjectReader_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXMLPTableReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPTableReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPTableReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPTableReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

