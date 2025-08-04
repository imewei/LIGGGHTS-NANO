// python wrapper for vtkLegacyCellGridReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLegacyCellGridReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLegacyCellGridReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLegacyCellGridReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static PyObject *
PyvtkLegacyCellGridReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLegacyCellGridReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLegacyCellGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLegacyCellGridReader *tempr = vtkLegacyCellGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegacyCellGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLegacyCellGridReader::NewInstance());

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
PyvtkLegacyCellGridReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLegacyCellGridReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLegacyCellGridReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkLegacyCellGridReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLegacyCellGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkLegacyCellGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLegacyCellGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLegacyCellGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkLegacyCellGridReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkLegacyCellGridReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkLegacyCellGridReader::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegacyCellGridReader_ReadMeshSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMeshSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegacyCellGridReader *op = static_cast<vtkLegacyCellGridReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMeshSimple(temp0, temp1) :
      op->vtkLegacyCellGridReader::ReadMeshSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLegacyCellGridReader_Methods[] = {
  {"IsTypeOf", PyvtkLegacyCellGridReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLegacyCellGridReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLegacyCellGridReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLegacyCellGridReader\nC++: static vtkLegacyCellGridReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLegacyCellGridReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLegacyCellGridReader\nC++: vtkLegacyCellGridReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLegacyCellGridReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLegacyCellGridReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkLegacyCellGridReader_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkCellGrid\nC++: vtkCellGrid *GetOutput()\nGetOutput(self, idx:int) -> vtkCellGrid\nC++: vtkCellGrid *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {"SetOutput", PyvtkLegacyCellGridReader_SetOutput, METH_VARARGS,
   "SetOutput(self, output:vtkCellGrid) -> None\nC++: void SetOutput(vtkCellGrid *output)\n\n"},
  {"ReadMeshSimple", PyvtkLegacyCellGridReader_ReadMeshSimple, METH_VARARGS,
   "ReadMeshSimple(self, fname:str, output:vtkDataObject) -> int\nC++: int ReadMeshSimple(const std::string &fname,\n    vtkDataObject *output) override;\n\nActual reading happens here\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLegacyCellGridReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("output"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegacyCellGridReader_GetOutput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegacyCellGridReader_SetOutput(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegacyCellGridReader_SetOutput(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutput/SetOutput\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLegacyCellGridReader_Doc =
  "vtkLegacyCellGridReader - read vtk unstructured grid data file\n\n"
  "Superclass: vtkDataReader\n\n"
  "vtkLegacyCellGridReader is a source object that reads ASCII or binary\n"
  "unstructured grid data files in vtk format. (see text for format\n"
  "details). The output of this reader is a single vtkCellGrid data\n"
  "object. The superclass of this class, vtkDataReader, provides many\n"
  "methods for controlling the reading of the data file, see\n"
  "vtkDataReader for more information.\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n"
  "@sa\n"
  "vtkCellGrid vtkDataReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLegacyCellGridReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkLegacyCellGridReader", // tp_name
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
  PyvtkLegacyCellGridReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLegacyCellGridReader_StaticNew()
{
  return vtkLegacyCellGridReader::New();
}

PyObject *PyvtkLegacyCellGridReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLegacyCellGridReader_Type, PyvtkLegacyCellGridReader_Methods,
    "vtkLegacyCellGridReader",
 &PyvtkLegacyCellGridReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataReader_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLegacyCellGridReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLegacyCellGridReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLegacyCellGridReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLegacyCellGridReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

