// python wrapper for vtkDIMACSGraphReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDIMACSGraphReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDIMACSGraphReader_ClassNew(); }


static PyObject *
PyvtkDIMACSGraphReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDIMACSGraphReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDIMACSGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDIMACSGraphReader *tempr = vtkDIMACSGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDIMACSGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDIMACSGraphReader::NewInstance());

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
PyvtkDIMACSGraphReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDIMACSGraphReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDIMACSGraphReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDIMACSGraphReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkDIMACSGraphReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetVertexAttributeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexAttributeArrayName(temp0);
    }
    else
    {
      op->vtkDIMACSGraphReader::SetVertexAttributeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetEdgeAttributeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeAttributeArrayName(temp0);
    }
    else
    {
      op->vtkDIMACSGraphReader::SetEdgeAttributeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDIMACSGraphReader_Methods[] = {
  {"IsTypeOf", PyvtkDIMACSGraphReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDIMACSGraphReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDIMACSGraphReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDIMACSGraphReader\nC++: static vtkDIMACSGraphReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDIMACSGraphReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDIMACSGraphReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDIMACSGraphReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileName", PyvtkDIMACSGraphReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\nThe DIMACS file name.\n"},
  {"SetFileName", PyvtkDIMACSGraphReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetVertexAttributeArrayName", PyvtkDIMACSGraphReader_GetVertexAttributeArrayName, METH_VARARGS,
   "GetVertexAttributeArrayName(self) -> str\nC++: virtual char *GetVertexAttributeArrayName()\n\nVertex attribute array name\n"},
  {"SetVertexAttributeArrayName", PyvtkDIMACSGraphReader_SetVertexAttributeArrayName, METH_VARARGS,
   "SetVertexAttributeArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexAttributeArrayName(const char *_arg)\n\n"},
  {"GetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName, METH_VARARGS,
   "GetEdgeAttributeArrayName(self) -> str\nC++: virtual char *GetEdgeAttributeArrayName()\n\nEdge attribute array name\n"},
  {"SetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName, METH_VARARGS,
   "SetEdgeAttributeArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgeAttributeArrayName(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDIMACSGraphReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDIMACSGraphReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDIMACSGraphReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDIMACSGraphReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertex_attribute_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDIMACSGraphReader_GetVertexAttributeArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVertexAttributeArrayName/SetVertexAttributeArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("edge_attribute_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEdgeAttributeArrayName/SetEdgeAttributeArrayName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDIMACSGraphReader_Doc =
  "vtkDIMACSGraphReader - reads vtkGraph data from a DIMACS formatted\nfile\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkDIMACSGraphReader is a source object that reads vtkGraph data\n"
  "files from a DIMACS format.\n\n"
  "The reader has special handlers for max-flow and graph coloring\n"
  "problems, which are specified in the problem line as 'max' and 'edge'\n"
  "respectively. Other graphs are treated as generic DIMACS files.\n\n"
  "DIMACS formatted files consist of lines in which the first character\n"
  "in in column 0 specifies the type of the line.\n\n"
  "Generic DIMACS files have the following line types:\n"
  "- problem statement line : p graph num_verts num_edges\n"
  "- node line (optional)   : n node_id node_weight\n"
  "- edge line              : a src_id trg_id edge_weight\n"
  "- alternate edge format  : e src_id trg_id edge_weight\n"
  "- comment lines          : c I am a comment line\n"
  "** note, there should be one and only one problem statement line per\n"
  "   file.\n\n"
  "DIMACS graphs are undirected and nodes are numbered 1..n\n\n"
  "See webpage for additional formatting details.\n"
  "-  http://dimacs.rutgers.edu/Challenges/\n"
  "-  http://www.dis.uniroma1.it/~challenge9/format.shtml\n\n"
  "@sa\n"
  "vtkDIMACSGraphWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDIMACSGraphReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOInfovis.vtkDIMACSGraphReader", // tp_name
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
  PyvtkDIMACSGraphReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDIMACSGraphReader_StaticNew()
{
  return vtkDIMACSGraphReader::New();
}

PyObject *PyvtkDIMACSGraphReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDIMACSGraphReader_Type, PyvtkDIMACSGraphReader_Methods,
    "vtkDIMACSGraphReader",
 &PyvtkDIMACSGraphReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDIMACSGraphReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDIMACSGraphReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDIMACSGraphReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDIMACSGraphReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

