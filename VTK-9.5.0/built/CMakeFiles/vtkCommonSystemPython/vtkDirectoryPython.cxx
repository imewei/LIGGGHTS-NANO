// python wrapper for vtkDirectory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDirectory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDirectory(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDirectory_ClassNew(); }


static PyObject *
PyvtkDirectory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDirectory *tempr = vtkDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectory::NewInstance());

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
PyvtkDirectory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDirectory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDirectory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkDirectory::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkDirectory::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFile(temp0) :
      op->vtkDirectory::GetFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FileIsDirectory(temp0) :
      op->vtkDirectory::FileIsDirectory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkDirectory::GetFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetCurrentWorkingDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    const char *tempr = vtkDirectory::GetCurrentWorkingDirectory(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_MakeDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkDirectory::MakeDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_DeleteDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkDirectory::DeleteDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_Rename(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Rename");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetFilePath(temp1))
  {
    int tempr = vtkDirectory::Rename(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectory_Methods[] = {
  {"IsTypeOf", PyvtkDirectory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDirectory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDirectory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDirectory\nC++: static vtkDirectory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDirectory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDirectory\nC++: vtkDirectory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDirectory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDirectory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Open", PyvtkDirectory_Open, METH_VARARGS,
   "Open(self, dir:str) -> int\nC++: int Open(const char *dir)\n\nOpen the specified directory and load the names of the files in\nthat directory. 0 is returned if the directory can not be opened,\n1 if it is opened.\n"},
  {"GetNumberOfFiles", PyvtkDirectory_GetNumberOfFiles, METH_VARARGS,
   "GetNumberOfFiles(self) -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {"GetFile", PyvtkDirectory_GetFile, METH_VARARGS,
   "GetFile(self, index:int) -> str\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {"FileIsDirectory", PyvtkDirectory_FileIsDirectory, METH_VARARGS,
   "FileIsDirectory(self, name:str) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {"GetFiles", PyvtkDirectory_GetFiles, METH_VARARGS,
   "GetFiles(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {"GetCurrentWorkingDirectory", PyvtkDirectory_GetCurrentWorkingDirectory, METH_VARARGS,
   "GetCurrentWorkingDirectory(buf:str, len:int) -> str\nC++: static const char *GetCurrentWorkingDirectory(char *buf,\n    unsigned int len)\n\nGet the current working directory.  Returns nullptr on failure,\nor if the provided buffer is too small.\n"},
  {"MakeDirectory", PyvtkDirectory_MakeDirectory, METH_VARARGS,
   "MakeDirectory(dir:str) -> int\nC++: static int MakeDirectory(const char *dir)\n\nCreate directory.\n"},
  {"DeleteDirectory", PyvtkDirectory_DeleteDirectory, METH_VARARGS,
   "DeleteDirectory(dir:str) -> int\nC++: static int DeleteDirectory(const char *dir)\n\nRemove a directory.\n"},
  {"Rename", PyvtkDirectory_Rename, METH_VARARGS,
   "Rename(oldname:str, newname:str) -> int\nC++: static int Rename(const char *oldname, const char *newname)\n\nRename a file or directory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDirectory_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("files"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDirectory_GetFiles(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFiles\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_files"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDirectory_GetNumberOfFiles(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfFiles\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDirectory_Doc =
  "vtkDirectory - OS independent class for access and manipulation of\nsystem directories\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDirectory provides a portable way of finding the names of the\n"
  "files in a system directory.  It also provides methods of\n"
  "manipulating directories.\n\n"
  "@warning\n"
  "vtkDirectory works with windows and unix only.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDirectory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkDirectory", // tp_name
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
  PyvtkDirectory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDirectory_StaticNew()
{
  return vtkDirectory::New();
}

PyObject *PyvtkDirectory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDirectory_Type, PyvtkDirectory_Methods,
    "vtkDirectory",
 &PyvtkDirectory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDirectory_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDirectory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDirectory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDirectory", o) != 0)
  {
    Py_DECREF(o);
  }

}

