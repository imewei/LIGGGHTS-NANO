// python wrapper for vtkInteractorEventRecorder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorEventRecorder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkInteractorEventRecorder(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkInteractorEventRecorder_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorEventRecorder_vtkEventDataType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkInteractorEventRecorder.vtkEventDataType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkInteractorEventRecorder_vtkEventDataType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkInteractorEventRecorder_vtkEventDataType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkInteractorEventRecorder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorEventRecorder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorEventRecorder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorEventRecorder *tempr = vtkInteractorEventRecorder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorEventRecorder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorEventRecorder::NewInstance());

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
PyvtkInteractorEventRecorder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorEventRecorder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorEventRecorder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

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
      op->vtkInteractorEventRecorder::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

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
      op->vtkInteractorEventRecorder::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkInteractorEventRecorder::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Record(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Record");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Record();
    }
    else
    {
      op->vtkInteractorEventRecorder::Record();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkInteractorEventRecorder::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkInteractorEventRecorder::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkInteractorEventRecorder::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Rewind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rewind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rewind();
    }
    else
    {
      op->vtkInteractorEventRecorder::Rewind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkInteractorEventRecorder::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkInteractorEventRecorder::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkInteractorEventRecorder::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkInteractorEventRecorder::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowCursor(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetShowCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowCursor() :
      op->vtkInteractorEventRecorder::GetShowCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ShowCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursorOn();
    }
    else
    {
      op->vtkInteractorEventRecorder::ShowCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ShowCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursorOff();
    }
    else
    {
      op->vtkInteractorEventRecorder::ShowCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorEventRecorder_Methods[] = {
  {"IsTypeOf", PyvtkInteractorEventRecorder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorEventRecorder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorEventRecorder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorEventRecorder\nC++: static vtkInteractorEventRecorder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorEventRecorder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorEventRecorder\nC++: vtkInteractorEventRecorder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorEventRecorder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorEventRecorder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkInteractorEventRecorder_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {"SetInteractor", PyvtkInteractorEventRecorder_SetInteractor, METH_VARARGS,
   "SetInteractor(self, iren:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *iren) override;\n\nThis method is used to associate the widget with the render\nwindow interactor.  Observers of the appropriate events invoked\nin the render window interactor are set up as a result of this\nmethod invocation. The SetInteractor() method must be invoked\nprior to enabling the vtkInteractorObserver. It automatically\nregisters available pickers to the Picking Manager.\n"},
  {"SetFileName", PyvtkInteractorEventRecorder_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the name of a file events should be written to/from. Will\nbe ignored once record/play has been called.\n"},
  {"GetFileName", PyvtkInteractorEventRecorder_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"Record", PyvtkInteractorEventRecorder_Record, METH_VARARGS,
   "Record(self) -> None\nC++: void Record()\n\nInvoke this method to begin recording events. The events will be\nrecorded to the filename indicated. Once record has been called\nonce, filename will be ignored.\n"},
  {"Play", PyvtkInteractorEventRecorder_Play, METH_VARARGS,
   "Play(self) -> None\nC++: void Play()\n\nInvoke this method to begin playing events from the current\nposition. The events will be played back from the filename\nindicated. Once play has been called once, filename will be\nignored.\n"},
  {"Stop", PyvtkInteractorEventRecorder_Stop, METH_VARARGS,
   "Stop(self) -> None\nC++: void Stop()\n\nInvoke this method to stop recording/playing events.\n"},
  {"Clear", PyvtkInteractorEventRecorder_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\nInvoke this method to clear recording/playing stream and be able\nto open another file using the same recorder.\n"},
  {"Rewind", PyvtkInteractorEventRecorder_Rewind, METH_VARARGS,
   "Rewind(self) -> None\nC++: void Rewind()\n\nRewind the play stream to the beginning of the file.\n"},
  {"SetReadFromInputString", PyvtkInteractorEventRecorder_SetReadFromInputString, METH_VARARGS,
   "SetReadFromInputString(self, _arg:int) -> None\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {"GetReadFromInputString", PyvtkInteractorEventRecorder_GetReadFromInputString, METH_VARARGS,
   "GetReadFromInputString(self) -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\n"},
  {"ReadFromInputStringOn", PyvtkInteractorEventRecorder_ReadFromInputStringOn, METH_VARARGS,
   "ReadFromInputStringOn(self) -> None\nC++: virtual void ReadFromInputStringOn()\n\n"},
  {"ReadFromInputStringOff", PyvtkInteractorEventRecorder_ReadFromInputStringOff, METH_VARARGS,
   "ReadFromInputStringOff(self) -> None\nC++: virtual void ReadFromInputStringOff()\n\n"},
  {"SetInputString", PyvtkInteractorEventRecorder_SetInputString, METH_VARARGS,
   "SetInputString(self, _arg:str) -> None\nC++: virtual void SetInputString(const char *_arg)\n\nSet/Get the string to read from.\n"},
  {"GetInputString", PyvtkInteractorEventRecorder_GetInputString, METH_VARARGS,
   "GetInputString(self) -> str\nC++: virtual char *GetInputString()\n\n"},
  {"SetShowCursor", PyvtkInteractorEventRecorder_SetShowCursor, METH_VARARGS,
   "SetShowCursor(self, _arg:bool) -> None\nC++: virtual void SetShowCursor(bool _arg)\n\nEnable the display of a cursor at the played event position\nduring `Play()` method. Cursor is hidden again at the end of the\n`Play()`, so last render is not impacted (baselines are\npreserved). Default is Off.\n"},
  {"GetShowCursor", PyvtkInteractorEventRecorder_GetShowCursor, METH_VARARGS,
   "GetShowCursor(self) -> bool\nC++: virtual bool GetShowCursor()\n\n"},
  {"ShowCursorOn", PyvtkInteractorEventRecorder_ShowCursorOn, METH_VARARGS,
   "ShowCursorOn(self) -> None\nC++: virtual void ShowCursorOn()\n\n"},
  {"ShowCursorOff", PyvtkInteractorEventRecorder_ShowCursorOff, METH_VARARGS,
   "ShowCursorOff(self) -> None\nC++: virtual void ShowCursorOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkInteractorEventRecorder_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("enabled"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interactor"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetInteractor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetInteractor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInteractor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorEventRecorder_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("read_from_input_string"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorEventRecorder_GetReadFromInputString(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetReadFromInputString(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetReadFromInputString(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetReadFromInputString/SetReadFromInputString\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_string"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorEventRecorder_GetInputString(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetInputString(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetInputString(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInputString/SetInputString\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("show_cursor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorEventRecorder_GetShowCursor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorEventRecorder_SetShowCursor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorEventRecorder_SetShowCursor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetShowCursor/SetShowCursor\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkInteractorEventRecorder_Doc =
  "vtkInteractorEventRecorder - record and play VTK events passing\nthrough a vtkRenderWindowInteractor\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "vtkInteractorEventRecorder records all VTK events invoked from a\n"
  "vtkRenderWindowInteractor. The events are recorded to a file.\n"
  "vtkInteractorEventRecorder can also be used to play those events back\n"
  "and invoke them on an vtkRenderWindowInteractor. (Note: the events\n"
  "can also be played back from a file or string.)\n\n"
  "Event client data can be recorded as args and will be provided on\n"
  "replay. The following event current support data to be recorded:\n"
  "- DropFilesEvents: record a string array\n\n"
  "The format of the event file is simple. It is:\n"
  " EventName X Y ctrl shift keycode repeatCount keySym dataType\n"
  "[dataNum] [dataVal] [dataVal] The format also allows \"#\" comments.\n"
  "dataType is defined as follows:\n"
  "- 0 -> None\n"
  "- 1 -> StringArray\n\n"
  "@sa\n"
  "vtkInteractorObserver vtkCallback\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorEventRecorder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkInteractorEventRecorder", // tp_name
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
  PyvtkInteractorEventRecorder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorEventRecorder_StaticNew()
{
  return vtkInteractorEventRecorder::New();
}

PyObject *PyvtkInteractorEventRecorder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorEventRecorder_Type, PyvtkInteractorEventRecorder_Methods,
    "vtkInteractorEventRecorder",
 &PyvtkInteractorEventRecorder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkInteractorEventRecorder_vtkEventDataType_Type);
  // members of vtkInteractorEventRecorder::vtkEventDataType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkInteractorEventRecorder_vtkEventDataType_Type.tp_dict = enumdict;

    typedef vtkInteractorEventRecorder::vtkEventDataType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "None_", cxx_enum_type::None },
      { "StringArray", cxx_enum_type::StringArray },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkInteractorEventRecorder_vtkEventDataType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkInteractorEventRecorder_vtkEventDataType_Type, "vtkInteractorEventRecorder.vtkEventDataType");

  o = (PyObject *)&PyvtkInteractorEventRecorder_vtkEventDataType_Type;
  if (PyDict_SetItemString(d, "vtkEventDataType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkInteractorEventRecorder_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorEventRecorder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorEventRecorder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorEventRecorder", o) != 0)
  {
    Py_DECREF(o);
  }

}

