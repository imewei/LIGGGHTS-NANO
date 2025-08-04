// python wrapper for vtkOutEdgeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkOutEdgeIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOutEdgeIterator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOutEdgeIterator_ClassNew(); }


static PyObject *
PyvtkOutEdgeIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutEdgeIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutEdgeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutEdgeIterator *tempr = vtkOutEdgeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutEdgeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutEdgeIterator::NewInstance());

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
PyvtkOutEdgeIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOutEdgeIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOutEdgeIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  vtkGraph *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkOutEdgeIterator::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkOutEdgeIterator::GetGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertex() :
      op->vtkOutEdgeIterator::GetVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutEdgeType tempr = (ap.IsBound() ?
      op->Next() :
      op->vtkOutEdgeIterator::Next());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkOutEdgeType");
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->NextGraphEdge() :
      op->vtkOutEdgeIterator::NextGraphEdge());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkOutEdgeIterator::HasNext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOutEdgeIterator_Methods[] = {
  {"IsTypeOf", PyvtkOutEdgeIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutEdgeIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutEdgeIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOutEdgeIterator\nC++: static vtkOutEdgeIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutEdgeIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOutEdgeIterator\nC++: vtkOutEdgeIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOutEdgeIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOutEdgeIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkOutEdgeIterator_Initialize, METH_VARARGS,
   "Initialize(self, g:vtkGraph, v:int) -> None\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {"GetGraph", PyvtkOutEdgeIterator_GetGraph, METH_VARARGS,
   "GetGraph(self) -> vtkGraph\nC++: virtual vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {"GetVertex", PyvtkOutEdgeIterator_GetVertex, METH_VARARGS,
   "GetVertex(self) -> int\nC++: virtual vtkIdType GetVertex()\n\n"},
  {"Next", PyvtkOutEdgeIterator_Next, METH_VARARGS,
   "Next(self) -> vtkOutEdgeType\nC++: vtkOutEdgeType Next()\n\nReturns the next edge in the graph.\n"},
  {"NextGraphEdge", PyvtkOutEdgeIterator_NextGraphEdge, METH_VARARGS,
   "NextGraphEdge(self) -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {"HasNext", PyvtkOutEdgeIterator_HasNext, METH_VARARGS,
   "HasNext(self) -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOutEdgeIterator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("graph"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOutEdgeIterator_GetGraph(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGraph\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertex"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOutEdgeIterator_GetVertex(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetVertex\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOutEdgeIterator_Doc =
  "vtkOutEdgeIterator - Iterates through all outgoing edges from a\nvertex.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOutEdgeIterator iterates through all edges whose source is a\n"
  "particular vertex. Instantiate this class directly and call\n"
  "Initialize() to traverse the vertex of a graph. Alternately, use\n"
  "GetInEdges() on the graph to initialize the iterator. it->Next()\n"
  "returns a vtkOutEdgeType structure, which contains Id, the edge's id, and Target, the\n"
  "edge's target vertex.\n\n"
  "@sa\n"
  "vtkGraph vtkInEdgeIterator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutEdgeIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkOutEdgeIterator", // tp_name
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
  PyvtkOutEdgeIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutEdgeIterator_StaticNew()
{
  return vtkOutEdgeIterator::New();
}

PyObject *PyvtkOutEdgeIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOutEdgeIterator_Type, PyvtkOutEdgeIterator_Methods,
    "vtkOutEdgeIterator",
 &PyvtkOutEdgeIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOutEdgeIterator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOutEdgeIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutEdgeIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutEdgeIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

