// python wrapper for vtkImplicitPlaneWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitPlaneWidget2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImplicitPlaneWidget2(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImplicitPlaneWidget2_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkImplicitPlaneWidget2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitPlaneWidget2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitPlaneWidget2 *tempr = vtkImplicitPlaneWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneWidget2::NewInstance());

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
PyvtkImplicitPlaneWidget2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitPlaneWidget2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitPlaneWidget2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitPlaneRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockNormalToCamera(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitPlaneRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->GetImplicitPlaneRepresentation() :
      op->vtkImplicitPlaneWidget2::GetImplicitPlaneRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkImplicitPlaneWidget2::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget2_Methods[] = {
  {"IsTypeOf", PyvtkImplicitPlaneWidget2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitPlaneWidget2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitPlaneWidget2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitPlaneWidget2\nC++: static vtkImplicitPlaneWidget2 *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitPlaneWidget2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitPlaneWidget2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitPlaneWidget2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkImplicitPlaneWidget2_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, rep:vtkImplicitPlaneRepresentation)\n    -> None\nC++: void SetRepresentation(vtkImplicitPlaneRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetEnabled", PyvtkImplicitPlaneWidget2_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nDisable/Enable the widget if needed. Unobserved the camera if the\nwidget is disabled.\n"},
  {"SetLockNormalToCamera", PyvtkImplicitPlaneWidget2_SetLockNormalToCamera, METH_VARARGS,
   "SetLockNormalToCamera(self, lock:int) -> None\nC++: void SetLockNormalToCamera(int lock)\n\nObserve/Unobserve the camera if the widget is locked/unlocked to\nupdate the vtkImplicitePlaneRepresentation's normal.\n"},
  {"GetImplicitPlaneRepresentation", PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation, METH_VARARGS,
   "GetImplicitPlaneRepresentation(self)\n    -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *GetImplicitPlaneRepresentation(\n    )\n\nReturn the representation as a vtkImplicitPlaneRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImplicitPlaneWidget2_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("representation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitPlaneWidget2_SetRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitPlaneWidget2_SetRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("enabled"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitPlaneWidget2_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitPlaneWidget2_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("lock_normal_to_camera"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitPlaneWidget2_SetLockNormalToCamera(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitPlaneWidget2_SetLockNormalToCamera(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetLockNormalToCamera\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("implicit_plane_representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetImplicitPlaneRepresentation\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImplicitPlaneWidget2_Doc =
  "vtkImplicitPlaneWidget2 - 3D widget for manipulating an infinite plane\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines an infinite plane that can be interactively\n"
  "placed in a scene. The widget is assumed to consist of four parts: 1)\n"
  "a plane contained in a 2) bounding box, with a 3) plane normal, which\n"
  "is rooted at a 4) point on the plane. (The representation paired with\n"
  "this widget determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkImplicitPlaneRepresentation (or a subclass). Various options are\n"
  "available for controlling how the representation appears, and how the\n"
  "widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the mouse is over the plane normal:\n"
  "  LeftButtonPressEvent - select normal\n"
  "  LeftButtonReleaseEvent - release normal\n"
  "  MouseMoveEvent - orient the normal vector If the mouse is over the\n"
  "origin point (handle):\n"
  "  LeftButtonPressEvent - select handle\n"
  "  LeftButtonReleaseEvent - release handle (if selected)\n"
  "  MouseMoveEvent - move the origin point (constrained to the plane)\n"
  "If the mouse is over the plane:\n"
  "  LeftButtonPressEvent - select plane\n"
  "  LeftButtonReleaseEvent - release plane (if selected)\n"
  "  MouseMoveEvent - move the plane If the mouse is over the outline:\n"
  "  LeftButtonPressEvent - select outline\n"
  "  LeftButtonReleaseEvent - release outline (if selected)\n"
  "  MouseMoveEvent - move the outline If the keypress characters are\n"
  "used\n"
  "  'Down/Left' Move plane down\n"
  "  'Up/Right' Move plane up In all the cases, independent of what is\n"
  "picked, the widget responds to the following VTK events:\n"
  "  MiddleButtonPressEvent - move the plane\n"
  "  MiddleButtonReleaseEvent - release the plane\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the widget\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkImplicitPlaneWidget2's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::Up and vtkWidgetEvent::Down -- MovePlaneAction \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkImplicitPlaneWidget2 invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and vtkImplicitPlaneRepresentation,\n"
  "are next generation VTK widgets. An earlier version of this\n"
  "functionality was defined in the class vtkImplicitPlaneWidget.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImagePlaneWidget vtkImplicitCylinderWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitPlaneWidget2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitPlaneWidget2", // tp_name
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
  PyvtkImplicitPlaneWidget2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitPlaneWidget2_StaticNew()
{
  return vtkImplicitPlaneWidget2::New();
}

PyObject *PyvtkImplicitPlaneWidget2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitPlaneWidget2_Type, PyvtkImplicitPlaneWidget2_Methods,
    "vtkImplicitPlaneWidget2",
 &PyvtkImplicitPlaneWidget2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImplicitPlaneWidget2_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitPlaneWidget2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitPlaneWidget2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitPlaneWidget2", o) != 0)
  {
    Py_DECREF(o);
  }

}

