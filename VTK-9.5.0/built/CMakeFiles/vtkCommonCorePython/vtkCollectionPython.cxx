// python wrapper for vtkCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCollection(PyObject *dict); }
static PyMethodDef PyvtkCollectionElement_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCollectionElement_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkCollectionElement_vtkCollectionElement_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCollectionElement");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCollectionElement *op = new vtkCollectionElement();

    result = PyVTKSpecialObject_New("vtkCollectionElement", op);
  }

  return result;
}

static PyObject *
PyvtkCollectionElement_vtkCollectionElement_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCollectionElement");

  vtkCollectionElement *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkCollectionElement"))
  {
    vtkCollectionElement *op = new vtkCollectionElement(*temp0);

    result = PyVTKSpecialObject_New("vtkCollectionElement", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCollectionElement_vtkCollectionElement_Methods[] = {
  {"vtkCollectionElement", PyvtkCollectionElement_vtkCollectionElement_s2, METH_VARARGS,
   "@W vtkCollectionElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCollectionElement_vtkCollectionElement(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkCollectionElement_vtkCollectionElement_s1(self, args);
    case 1:
      return PyvtkCollectionElement_vtkCollectionElement_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkCollectionElement");
  return nullptr;
}


static const char *PyvtkCollectionElement_Doc =

  "vtkCollectionElement() -> vtkCollectionElement\nC++: vtkCollectionElement()\nvtkCollectionElement(__a:vtkCollectionElement) -> vtkCollectionElement\nC++: vtkCollectionElement(const &vtkCollectionElement)\n""\n"
  "vtkCollectionElement - no description provided.\n\n"
;

static PyObject *
PyvtkCollectionElement_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkCollectionElement_vtkCollectionElement(nullptr, args);
}

static void PyvtkCollectionElement_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkCollectionElement *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkCollectionElement_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCollectionElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkCollectionElement", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCollectionElement_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkCollectionElement_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkCollectionElement_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkCollectionElement_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkCollectionElement_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkCollectionElement(*static_cast<const vtkCollectionElement*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkCollectionElement_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCollectionElement_TypeNew(); }
#define DECLARED_PyvtkCollectionElement_TypeNew
#endif

PyObject *PyvtkCollectionElement_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkCollectionElement_Type,
    PyvtkCollectionElement_Methods,
    PyvtkCollectionElement_GetSets,
    PyvtkCollectionElement_vtkCollectionElement_Methods,
    &PyvtkCollectionElement_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCollection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif
static PyObject *
PyvtkCollection_Iter(PyObject *self)
{
  PyVTKObject *vp = (PyVTKObject *)self;
  vtkCollection *op = static_cast<vtkCollection *>(vp->vtk_ptr);

  PyObject *result = nullptr;

  if (op)
  {
    vtkCollectionIterator *tempr = op->NewIterator();
    if (tempr != nullptr)
    {
      result = vtkPythonArgs::BuildVTKObject(tempr);
      PyVTKObject_GetObject(result)->UnRegister(nullptr);
    }
  }

  return result;
}

static PyObject *
PyvtkCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollection *tempr = vtkCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollection::NewInstance());

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
PyvtkCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_InsertItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->InsertItem(temp0, temp1);
    }
    else
    {
      op->vtkCollection::InsertItem(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_ReplaceItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

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
      op->vtkCollection::ReplaceItem(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

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
      op->vtkCollection::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCollection_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

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
      op->vtkCollection::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCollection_RemoveItem_Methods[] = {
  {"RemoveItem", PyvtkCollection_RemoveItem_s1, METH_VARARGS,
   "@i"},
  {"RemoveItem", PyvtkCollection_RemoveItem_s2, METH_VARARGS,
   "@V *vtkObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCollection_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCollection_RemoveItem_Methods;
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
PyvtkCollection_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllItems();
    }
    else
    {
      op->vtkCollection::RemoveAllItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkCollection::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_IndexOfFirstOccurence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexOfFirstOccurence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    int tempr = (ap.IsBound() ?
      op->IndexOfFirstOccurence(temp0) :
      op->vtkCollection::IndexOfFirstOccurence(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkCollection::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCollection::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_GetNextItemAsObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItemAsObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetNextItemAsObject() :
      op->vtkCollection::GetNextItemAsObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_GetItemAsObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemAsObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetItemAsObject(temp0) :
      op->vtkCollection::GetItemAsObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollection_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollectionIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkCollection::NewIterator());

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
PyvtkCollection_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkCollection::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCollection_Methods[] = {
  {"IsTypeOf", PyvtkCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCollection\nC++: static vtkCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCollection\nC++: vtkCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddItem", PyvtkCollection_AddItem, METH_VARARGS,
   "AddItem(self, __a:vtkObject) -> None\nC++: void AddItem(vtkObject *)\n\nAdd an object to the bottom of the list. Does not prevent\nduplicate entries.\n"},
  {"InsertItem", PyvtkCollection_InsertItem, METH_VARARGS,
   "InsertItem(self, i:int, __b:vtkObject) -> None\nC++: void InsertItem(int i, vtkObject *)\n\nInsert item into the list after the i'th item. Does not prevent\nduplicate entries. If i < 0 the item is placed at the top of the\nlist.\n"},
  {"ReplaceItem", PyvtkCollection_ReplaceItem, METH_VARARGS,
   "ReplaceItem(self, i:int, __b:vtkObject) -> None\nC++: void ReplaceItem(int i, vtkObject *)\n\nReplace the i'th item in the collection with another item.\n"},
  {"RemoveItem", PyvtkCollection_RemoveItem, METH_VARARGS,
   "RemoveItem(self, i:int) -> None\nC++: void RemoveItem(int i)\nRemoveItem(self, __a:vtkObject) -> None\nC++: void RemoveItem(vtkObject *)\n\nRemove the i'th item in the list. Be careful if using this\nfunction during traversal of the list using GetNextItemAsObject\n(or GetNextItem in derived class).  The list WILL be shortened if\na valid index is given!  If this->Current is equal to the element\nbeing removed, have it point to then next element in the list.\n"},
  {"RemoveAllItems", PyvtkCollection_RemoveAllItems, METH_VARARGS,
   "RemoveAllItems(self) -> None\nC++: void RemoveAllItems()\n\nRemove all objects from the list.\n"},
  {"IsItemPresent", PyvtkCollection_IsItemPresent, METH_VARARGS,
   "IsItemPresent(self, a:vtkObject) -> int\nC++: int IsItemPresent(vtkObject *a)\n\nSearch for an object and return location in list. If the return\nvalue is 0, the object was not found. If the object was found,\nthe location is the return value-1.\n"},
  {"IndexOfFirstOccurence", PyvtkCollection_IndexOfFirstOccurence, METH_VARARGS,
   "IndexOfFirstOccurence(self, a:vtkObject) -> int\nC++: int IndexOfFirstOccurence(vtkObject *a)\n\nSearch for an object and return location in list. If the return\nvalue is\n-1, the object was not found. If the object was found, the\n    location is at the returned (0-based) index.\n"},
  {"GetNumberOfItems", PyvtkCollection_GetNumberOfItems, METH_VARARGS,
   "GetNumberOfItems(self) -> int\nC++: int GetNumberOfItems()\n\nReturn the number of objects in the list.\n"},
  {"InitTraversal", PyvtkCollection_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\nInitialize the traversal of the collection. This means the data\npointer is set at the beginning of the list.\n"},
  {"GetNextItemAsObject", PyvtkCollection_GetNextItemAsObject, METH_VARARGS,
   "GetNextItemAsObject(self) -> vtkObject\nC++: vtkObject *GetNextItemAsObject()\n\nGet the next item in the collection. nullptr is returned if the\ncollection is exhausted.\n"},
  {"GetItemAsObject", PyvtkCollection_GetItemAsObject, METH_VARARGS,
   "GetItemAsObject(self, i:int) -> vtkObject\nC++: vtkObject *GetItemAsObject(int i)\n\nGet the i'th item in the collection. nullptr is returned if i is\nout of range\n"},
  {"NewIterator", PyvtkCollection_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewIterator()\n\nGet an iterator to traverse the objects in this collection.\n"},
  {"UsesGarbageCollector", PyvtkCollection_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nParticipate in garbage collection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCollection_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("next_item_as_object"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCollection_GetNextItemAsObject(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNextItemAsObject\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_items"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCollection_GetNumberOfItems(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfItems\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCollection_Doc =
  "vtkCollection - create and manipulate ordered lists of objects\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCollection is a general object for creating and manipulating lists\n"
  "of objects. The lists are ordered and allow duplicate entries.\n"
  "vtkCollection also serves as a base class for lists of specific types\n"
  "of objects.\n\n"
  "@sa\n"
  "vtkActorCollection vtkAssemblyPaths vtkDataSetCollection\n"
  "vtkImplicitFunctionCollection vtkLightCollection\n"
  "vtkPolyDataCollection vtkRenderWindowCollection vtkRendererCollection\n"
  "vtkStructuredPointsCollection vtkTransformCollection\n"
  "vtkVolumeCollection\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkCollection", // tp_name
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
  PyvtkCollection_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  PyvtkCollection_Iter, // tp_iter
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

static vtkObjectBase *PyvtkCollection_StaticNew()
{
  return vtkCollection::New();
}

PyObject *PyvtkCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCollection_Type, PyvtkCollection_Methods,
    "vtkCollection",
 &PyvtkCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCollection_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollectionElement_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkCollectionElement", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

