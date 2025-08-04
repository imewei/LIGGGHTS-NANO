// python wrapper for vtkMPIMultiBlockPLOT3DReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMPIMultiBlockPLOT3DReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMPIMultiBlockPLOT3DReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMPIMultiBlockPLOT3DReader_ClassNew(); }


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPIMultiBlockPLOT3DReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMultiBlockPLOT3DReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPIMultiBlockPLOT3DReader *tempr = vtkMPIMultiBlockPLOT3DReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMultiBlockPLOT3DReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMultiBlockPLOT3DReader::NewInstance());

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
PyvtkMPIMultiBlockPLOT3DReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMPIMultiBlockPLOT3DReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMPIMultiBlockPLOT3DReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_SetUseMPIIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMPIIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMPIIO(temp0);
    }
    else
    {
      op->vtkMPIMultiBlockPLOT3DReader::SetUseMPIIO(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_GetUseMPIIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMPIIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMPIIO() :
      op->vtkMPIMultiBlockPLOT3DReader::GetUseMPIIO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_UseMPIIOOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMPIIOOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMPIIOOn();
    }
    else
    {
      op->vtkMPIMultiBlockPLOT3DReader::UseMPIIOOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMultiBlockPLOT3DReader_UseMPIIOOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMPIIOOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMultiBlockPLOT3DReader *op = static_cast<vtkMPIMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMPIIOOff();
    }
    else
    {
      op->vtkMPIMultiBlockPLOT3DReader::UseMPIIOOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIMultiBlockPLOT3DReader_Methods[] = {
  {"IsTypeOf", PyvtkMPIMultiBlockPLOT3DReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPIMultiBlockPLOT3DReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPIMultiBlockPLOT3DReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMPIMultiBlockPLOT3DReader\nC++: static vtkMPIMultiBlockPLOT3DReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPIMultiBlockPLOT3DReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMPIMultiBlockPLOT3DReader\nC++: vtkMPIMultiBlockPLOT3DReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMPIMultiBlockPLOT3DReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMPIMultiBlockPLOT3DReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUseMPIIO", PyvtkMPIMultiBlockPLOT3DReader_SetUseMPIIO, METH_VARARGS,
   "SetUseMPIIO(self, _arg:bool) -> None\nC++: virtual void SetUseMPIIO(bool _arg)\n\nUse this to override using MPI-IO. When set to false (default is\ntrue), this class will simply forward all method calls to the\nsuperclass.\n"},
  {"GetUseMPIIO", PyvtkMPIMultiBlockPLOT3DReader_GetUseMPIIO, METH_VARARGS,
   "GetUseMPIIO(self) -> bool\nC++: virtual bool GetUseMPIIO()\n\n"},
  {"UseMPIIOOn", PyvtkMPIMultiBlockPLOT3DReader_UseMPIIOOn, METH_VARARGS,
   "UseMPIIOOn(self) -> None\nC++: virtual void UseMPIIOOn()\n\n"},
  {"UseMPIIOOff", PyvtkMPIMultiBlockPLOT3DReader_UseMPIIOOff, METH_VARARGS,
   "UseMPIIOOff(self) -> None\nC++: virtual void UseMPIIOOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMPIMultiBlockPLOT3DReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("use_mpiio"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPIMultiBlockPLOT3DReader_GetUseMPIIO(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMPIMultiBlockPLOT3DReader_SetUseMPIIO(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMPIMultiBlockPLOT3DReader_SetUseMPIIO(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseMPIIO/SetUseMPIIO\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMPIMultiBlockPLOT3DReader_Doc =
  "vtkMPIMultiBlockPLOT3DReader - vtkMultiBlockPLOT3DReader subclass\nthat uses MPI-IO to efficiently read binary files for 3D domains in\nparallel using\n\n"
  "Superclass: vtkMultiBlockPLOT3DReader\n\n"
  "MPI-IO.\n\n"
  "vtkMPIMultiBlockPLOT3DReader extends vtkMultiBlockPLOT3DReader to use\n"
  "MPI-IO instead of POSIX IO to read file in parallel.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMPIMultiBlockPLOT3DReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMPIParallel.vtkMPIMultiBlockPLOT3DReader", // tp_name
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
  PyvtkMPIMultiBlockPLOT3DReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPIMultiBlockPLOT3DReader_StaticNew()
{
  return vtkMPIMultiBlockPLOT3DReader::New();
}

PyObject *PyvtkMPIMultiBlockPLOT3DReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMPIMultiBlockPLOT3DReader_Type, PyvtkMPIMultiBlockPLOT3DReader_Methods,
    "vtkMPIMultiBlockPLOT3DReader",
 &PyvtkMPIMultiBlockPLOT3DReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockPLOT3DReader");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMPIMultiBlockPLOT3DReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPIMultiBlockPLOT3DReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPIMultiBlockPLOT3DReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPIMultiBlockPLOT3DReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

