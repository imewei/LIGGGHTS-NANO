// python wrapper for vtkImplicitAnnulusWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImplicitAnnulusWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImplicitAnnulusWidget(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImplicitAnnulusWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkImplicitAnnulusWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitAnnulusWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitAnnulusWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitAnnulusWidget *tempr = vtkImplicitAnnulusWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitAnnulusWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitAnnulusWidget::NewInstance());

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
PyvtkImplicitAnnulusWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitAnnulusWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitAnnulusWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  vtkImplicitAnnulusRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitAnnulusRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_GetAnnulusRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnulusRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitAnnulusRepresentation *tempr = (ap.IsBound() ?
      op->GetAnnulusRepresentation() :
      op->vtkImplicitAnnulusWidget::GetAnnulusRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusWidget *op = static_cast<vtkImplicitAnnulusWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkImplicitAnnulusWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitAnnulusWidget_Methods[] = {
  {"IsTypeOf", PyvtkImplicitAnnulusWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitAnnulusWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitAnnulusWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitAnnulusWidget\nC++: static vtkImplicitAnnulusWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitAnnulusWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitAnnulusWidget\nC++: vtkImplicitAnnulusWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitAnnulusWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitAnnulusWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkImplicitAnnulusWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, rep:vtkImplicitAnnulusRepresentation)\n    -> None\nC++: void SetRepresentation(vtkImplicitAnnulusRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetAnnulusRepresentation", PyvtkImplicitAnnulusWidget_GetAnnulusRepresentation, METH_VARARGS,
   "GetAnnulusRepresentation(self) -> vtkImplicitAnnulusRepresentation\nC++: vtkImplicitAnnulusRepresentation *GetAnnulusRepresentation()\n\nReturn the representation as a vtkImplicitAnnulusRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkImplicitAnnulusWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImplicitAnnulusWidget_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("representation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusWidget_SetRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusWidget_SetRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("annulus_representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusWidget_GetAnnulusRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAnnulusRepresentation\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImplicitAnnulusWidget_Doc =
  "vtkImplicitAnnulusWidget - 3D widget for manipulating an infinite\nannulus\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines an infinite annulus that can be interactively\n"
  "placed in a scene. The widget is assumed to consist of four parts: 1)\n"
  "an annulus contained in a 2) bounding box, with an\n"
  "3) annulus axis, which is rooted at an 4) origin point in the\n"
  "   bounding box. (The representation paired with this widget\n"
  "   determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkImplicitAnnulusRepresentation (or a subclass). Various options are\n"
  "available for controlling how the representation appears, and how the\n"
  "widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the annulus axis is selected:\n"
  "- LeftButtonPressEvent - select axis\n"
  "- LeftButtonReleaseEvent - release (end select) axis\n"
  "- MouseMoveEvent - orient the axis vector If the center point handle\n"
  "  is selected:\n"
  "- LeftButtonPressEvent - select handle (if on slider)\n"
  "- LeftButtonReleaseEvent - release handle (if selected)\n"
  "- MouseMoveEvent - move the center point (constrained to plane or on\n"
  "  the axis if CTRL key is pressed) If the outline is selected:\n"
  "- LeftButtonPressEvent - select outline\n"
  "- LeftButtonReleaseEvent - release outline\n"
  "- MouseMoveEvent - move the outline If the keypress characters are\n"
  "  used\n"
  "- 'Down/Left' Move annulus away from viewer\n"
  "- 'Up/Right' Move annulus towards viewer In all the cases,\n"
  "  independent of what is picked, the widget responds to the following\n"
  "VTK events:\n"
  "- MiddleButtonPressEvent - move the annulus\n"
  "- MiddleButtonReleaseEvent - release the annulus\n"
  "- RightButtonPressEvent - scale the widget's representation\n"
  "- RightButtonReleaseEvent - stop scaling the widget\n"
  "- MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget\n\n"
  "Note that the event bindings described above can be changed using\n"
  "this class's vtkWidgetEventTranslator. This class translates VTK\n"
  "events into the vtkImplicitAnnulusWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::Up and vtkWidgetEvent::Down -- MoveAnnulusAction \n\n"
  "In turn, when these widget events are processed, the\n"
  "vtkImplicitAnnulusWidget invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@sa\n"
  "vtk3DWidget vtkAnnulusRepresentation vtkAnnulus\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitAnnulusWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitAnnulusWidget", // tp_name
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
  PyvtkImplicitAnnulusWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitAnnulusWidget_StaticNew()
{
  return vtkImplicitAnnulusWidget::New();
}

PyObject *PyvtkImplicitAnnulusWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitAnnulusWidget_Type, PyvtkImplicitAnnulusWidget_Methods,
    "vtkImplicitAnnulusWidget",
 &PyvtkImplicitAnnulusWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImplicitAnnulusWidget_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitAnnulusWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitAnnulusWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitAnnulusWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

