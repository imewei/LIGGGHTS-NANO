// python wrapper for vtkSocketCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSocketCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSocketCollection(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSocketCollection_ClassNew(); }


static PyObject *
PyvtkSocketCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSocketCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSocketCollection *tempr = vtkSocketCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketCollection::NewInstance());

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
PyvtkSocketCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSocketCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSocketCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkSocket *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocket"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkSocketCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_SelectSockets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSockets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  unsigned long temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->SelectSockets(temp0) :
      op->vtkSocketCollection::SelectSockets(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_GetLastSelectedSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSelectedSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocket *tempr = (ap.IsBound() ?
      op->GetLastSelectedSocket() :
      op->vtkSocketCollection::GetLastSelectedSocket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_ReplaceItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  int temp0;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->ReplaceItem(temp0, temp1);
    }
    else
    {
      op->vtkSocketCollection::ReplaceItem(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCollection_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0);
    }
    else
    {
      op->vtkSocketCollection::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCollection_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0);
    }
    else
    {
      op->vtkSocketCollection::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCollection_RemoveItem_Methods[] = {
  {"RemoveItem", PyvtkSocketCollection_RemoveItem_s1, METH_VARARGS,
   "@i"},
  {"RemoveItem", PyvtkSocketCollection_RemoveItem_s2, METH_VARARGS,
   "@V *vtkObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSocketCollection_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCollection_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return nullptr;
}


static PyObject *
PyvtkSocketCollection_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllItems();
    }
    else
    {
      op->vtkSocketCollection::RemoveAllItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCollection_Methods[] = {
  {"IsTypeOf", PyvtkSocketCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSocketCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSocketCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSocketCollection\nC++: static vtkSocketCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSocketCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSocketCollection\nC++: vtkSocketCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSocketCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSocketCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddItem", PyvtkSocketCollection_AddItem, METH_VARARGS,
   "AddItem(self, soc:vtkSocket) -> None\nC++: void AddItem(vtkSocket *soc)\n\n"},
  {"SelectSockets", PyvtkSocketCollection_SelectSockets, METH_VARARGS,
   "SelectSockets(self, msec:int=0) -> int\nC++: int SelectSockets(unsigned long msec=0)\n\nSelect all Connected sockets in the collection. If msec is\nspecified, it timesout after msec milliseconds on inactivity.\nReturns 0 on timeout, -1 on error; 1 is a socket was selected.\nThe selected socket can be retrieved by GetLastSelectedSocket().\n"},
  {"GetLastSelectedSocket", PyvtkSocketCollection_GetLastSelectedSocket, METH_VARARGS,
   "GetLastSelectedSocket(self) -> vtkSocket\nC++: vtkSocket *GetLastSelectedSocket()\n\nReturns the socket selected during the last SelectSockets(), if\nany. nullptr otherwise.\n"},
  {"ReplaceItem", PyvtkSocketCollection_ReplaceItem, METH_VARARGS,
   "ReplaceItem(self, i:int, __b:vtkObject) -> None\nC++: void ReplaceItem(int i, vtkObject *)\n\nOverridden to unset SelectedSocket.\n"},
  {"RemoveItem", PyvtkSocketCollection_RemoveItem, METH_VARARGS,
   "RemoveItem(self, i:int) -> None\nC++: void RemoveItem(int i)\nRemoveItem(self, __a:vtkObject) -> None\nC++: void RemoveItem(vtkObject *)\n\nRemove the i'th item in the list. Be careful if using this\nfunction during traversal of the list using GetNextItemAsObject\n(or GetNextItem in derived class).  The list WILL be shortened if\na valid index is given!  If this->Current is equal to the element\nbeing removed, have it point to then next element in the list.\n"},
  {"RemoveAllItems", PyvtkSocketCollection_RemoveAllItems, METH_VARARGS,
   "RemoveAllItems(self) -> None\nC++: void RemoveAllItems()\n\nRemove all objects from the list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSocketCollection_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("last_selected_socket"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSocketCollection_GetLastSelectedSocket(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastSelectedSocket\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSocketCollection_Doc =
  "vtkSocketCollection - a collection for sockets.\n\n"
  "Superclass: vtkCollection\n\n"
  "Apart from being vtkCollection subclass for sockets, this class\n"
  "provides means to wait for activity on all the sockets in the\n"
  "collection simultaneously.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSocketCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkSocketCollection", // tp_name
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
  PyvtkSocketCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSocketCollection_StaticNew()
{
  return vtkSocketCollection::New();
}

PyObject *PyvtkSocketCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSocketCollection_Type, PyvtkSocketCollection_Methods,
    "vtkSocketCollection",
 &PyvtkSocketCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCollection");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSocketCollection_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSocketCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSocketCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSocketCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

