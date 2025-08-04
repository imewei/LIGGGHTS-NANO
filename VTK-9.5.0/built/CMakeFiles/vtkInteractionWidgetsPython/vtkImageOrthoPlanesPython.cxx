// python wrapper for vtkImageOrthoPlanes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageOrthoPlanes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageOrthoPlanes(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageOrthoPlanes_ClassNew(); }


static PyObject *
PyvtkImageOrthoPlanes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageOrthoPlanes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageOrthoPlanes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageOrthoPlanes *tempr = vtkImageOrthoPlanes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageOrthoPlanes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageOrthoPlanes::NewInstance());

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
PyvtkImageOrthoPlanes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageOrthoPlanes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageOrthoPlanes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  int temp0;
  vtkImagePlaneWidget *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImagePlaneWidget"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1);
    }
    else
    {
      op->vtkImageOrthoPlanes::SetPlane(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImagePlaneWidget *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkImageOrthoPlanes::GetPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_ResetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPlanes();
    }
    else
    {
      op->vtkImageOrthoPlanes::ResetPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImageOrthoPlanes::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_HandlePlaneEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlePlaneEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  vtkImagePlaneWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImagePlaneWidget"))
  {
    if (ap.IsBound())
    {
      op->HandlePlaneEvent(temp0);
    }
    else
    {
      op->vtkImageOrthoPlanes::HandlePlaneEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageOrthoPlanes_Methods[] = {
  {"IsTypeOf", PyvtkImageOrthoPlanes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageOrthoPlanes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageOrthoPlanes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageOrthoPlanes\nC++: static vtkImageOrthoPlanes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageOrthoPlanes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageOrthoPlanes\nC++: vtkImageOrthoPlanes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageOrthoPlanes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageOrthoPlanes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", PyvtkImageOrthoPlanes_SetPlane, METH_VARARGS,
   "SetPlane(self, i:int, imagePlaneWidget:vtkImagePlaneWidget)\n    -> None\nC++: void SetPlane(int i, vtkImagePlaneWidget *imagePlaneWidget)\n\nYou must set three planes for the widget.\n"},
  {"GetPlane", PyvtkImageOrthoPlanes_GetPlane, METH_VARARGS,
   "GetPlane(self, i:int) -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *GetPlane(int i)\n\n"},
  {"ResetPlanes", PyvtkImageOrthoPlanes_ResetPlanes, METH_VARARGS,
   "ResetPlanes(self) -> None\nC++: void ResetPlanes()\n\nReset the planes to original scale, rotation, and location.\n"},
  {"GetTransform", PyvtkImageOrthoPlanes_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nGet the transform for the planes.\n"},
  {"HandlePlaneEvent", PyvtkImageOrthoPlanes_HandlePlaneEvent, METH_VARARGS,
   "HandlePlaneEvent(self, imagePlaneWidget:vtkImagePlaneWidget)\n    -> None\nC++: void HandlePlaneEvent(vtkImagePlaneWidget *imagePlaneWidget)\n\nA public method to be used only by the event callback.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageOrthoPlanes_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("transform"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOrthoPlanes_GetTransform(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTransform\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageOrthoPlanes_Doc =
  "vtkImageOrthoPlanes - Connect three vtkImagePlaneWidgets together\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageOrthoPlanes is an event observer class that listens to the\n"
  "events from three vtkImagePlaneWidgets and keeps their orientations\n"
  "and scales synchronized.\n"
  "@sa\n"
  "vtkImagePlaneWidget@par Thanks: Thanks to Atamai Inc. for developing\n"
  "and contributing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageOrthoPlanes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImageOrthoPlanes", // tp_name
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
  PyvtkImageOrthoPlanes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageOrthoPlanes_StaticNew()
{
  return vtkImageOrthoPlanes::New();
}

PyObject *PyvtkImageOrthoPlanes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageOrthoPlanes_Type, PyvtkImageOrthoPlanes_Methods,
    "vtkImageOrthoPlanes",
 &PyvtkImageOrthoPlanes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageOrthoPlanes_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageOrthoPlanes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageOrthoPlanes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageOrthoPlanes", o) != 0)
  {
    Py_DECREF(o);
  }

}

