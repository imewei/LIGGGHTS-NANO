// python wrapper for vtkCocoaRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCocoaRenderWindowInteractor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCocoaRenderWindowInteractor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCocoaRenderWindowInteractor_ClassNew(); }


static PyObject *
PyvtkCocoaRenderWindowInteractor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCocoaRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCocoaRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCocoaRenderWindowInteractor *tempr = vtkCocoaRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCocoaRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCocoaRenderWindowInteractor::NewInstance());

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
PyvtkCocoaRenderWindowInteractor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCocoaRenderWindowInteractor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCocoaRenderWindowInteractor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateApp();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::TerminateApp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEvents();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::ProcessEvents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_SetClassExitMethod(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetClassExitMethod");

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    vtkCocoaRenderWindowInteractor::SetClassExitMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      vtkCocoaRenderWindowInteractor::SetClassExitMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindowInteractor_ExitCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindowInteractor *op = static_cast<vtkCocoaRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExitCallback();
    }
    else
    {
      op->vtkCocoaRenderWindowInteractor::ExitCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCocoaRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkCocoaRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCocoaRenderWindowInteractor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCocoaRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCocoaRenderWindowInteractor\nC++: static vtkCocoaRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCocoaRenderWindowInteractor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCocoaRenderWindowInteractor\nC++: vtkCocoaRenderWindowInteractor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCocoaRenderWindowInteractor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCocoaRenderWindowInteractor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCocoaRenderWindowInteractor_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the even handler\n"},
  {"Enable", PyvtkCocoaRenderWindowInteractor_Enable, METH_VARARGS,
   "Enable(self) -> None\nC++: void Enable() override;\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkCocoaRenderWindowInteractor_Disable, METH_VARARGS,
   "Disable(self) -> None\nC++: void Disable() override;\n\n"},
  {"TerminateApp", PyvtkCocoaRenderWindowInteractor_TerminateApp, METH_VARARGS,
   "TerminateApp(self) -> None\nC++: void TerminateApp() override;\n\nCocoa specific application terminate, calls ClassExitMethod then\ncalls PostQuitMessage(0) to terminate app. An application can\nSpecify ExitMethod for alternative behaviour (i.e. suppression of\nkeyboard exit)\n"},
  {"ProcessEvents", PyvtkCocoaRenderWindowInteractor_ProcessEvents, METH_VARARGS,
   "ProcessEvents(self) -> None\nC++: void ProcessEvents() override;\n\nProcess all user-interaction, timer events and return. If there\nare no events, this method returns immediately.\n"},
  {"SetClassExitMethod", PyvtkCocoaRenderWindowInteractor_SetClassExitMethod, METH_VARARGS,
   "SetClassExitMethod(f:Callback) -> None\nC++: static void SetClassExitMethod(void (*f)(void *), void *arg)\n\nMethods to set the default exit method for the class. This method\nis only used if no instance level ExitMethod has been defined. \nIt is provided as a means to control how an interactor is exited\ngiven the various language bindings (Cocoa, etc.).\n"},
  {"ExitCallback", PyvtkCocoaRenderWindowInteractor_ExitCallback, METH_VARARGS,
   "ExitCallback(self) -> None\nC++: void ExitCallback() override;\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCocoaRenderWindowInteractor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCocoaRenderWindowInteractor_Doc =
  "vtkCocoaRenderWindowInteractor - implements Cocoa specific functions\nrequired by vtkRenderWindowInteractor.\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "The interactor interfaces with vtkCocoaRenderWindow and\n"
  "vtkCocoaGLView to trap messages from the Cocoa window manager and\n"
  "send them to vtk. Since OS X applications typically use the Command\n"
  "key where UNIX and Windows applications would use the Ctrl key, this\n"
  "interactor maps the Command key to Ctrl.  In versions of VTK prior to\n"
  "VTK 6.2, it was mapped to Alt.  On OS X, the Option key can be used\n"
  "as Alt.\n\n"
  "IMPORTANT: This header must be in C++ only because it is included by\n"
  ".cxx files.  That means no Objective C may be used. That's why some\n"
  "instance variables are void* instead of what they really should be.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCocoaRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingUI.vtkCocoaRenderWindowInteractor", // tp_name
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
  PyvtkCocoaRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCocoaRenderWindowInteractor_StaticNew()
{
  return vtkCocoaRenderWindowInteractor::New();
}

PyObject *PyvtkCocoaRenderWindowInteractor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCocoaRenderWindowInteractor_Type, PyvtkCocoaRenderWindowInteractor_Methods,
    "vtkCocoaRenderWindowInteractor",
 &PyvtkCocoaRenderWindowInteractor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderWindowInteractor");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCocoaRenderWindowInteractor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCocoaRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCocoaRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCocoaRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

