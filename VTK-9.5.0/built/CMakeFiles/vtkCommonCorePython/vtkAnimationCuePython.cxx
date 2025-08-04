// python wrapper for vtkAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnimationCue.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAnimationCue(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimationCue_TimeCodes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkAnimationCue.TimeCodes", // tp_name
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
static PyObject *PyvtkAnimationCue_TimeCodes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAnimationCue_TimeCodes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimationCue_PlayDirection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkAnimationCue.PlayDirection", // tp_name
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
static PyObject *PyvtkAnimationCue_PlayDirection_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAnimationCue_PlayDirection_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAnimationCue_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnimationCue *tempr = vtkAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationCue::NewInstance());

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
PyvtkAnimationCue_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnimationCue::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnimationCue::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeMode(temp0);
    }
    else
    {
      op->vtkAnimationCue::SetTimeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeMode() :
      op->vtkAnimationCue::GetTimeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeModeToRelative();
    }
    else
    {
      op->vtkAnimationCue::SetTimeModeToRelative();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeModeToNormalized();
    }
    else
    {
      op->vtkAnimationCue::SetTimeModeToNormalized();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartTime(temp0);
    }
    else
    {
      op->vtkAnimationCue::SetStartTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartTime() :
      op->vtkAnimationCue::GetStartTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndTime(temp0);
    }
    else
    {
      op->vtkAnimationCue::SetEndTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndTime() :
      op->vtkAnimationCue::GetEndTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_Tick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Tick(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAnimationCue::Tick(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAnimationCue::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkAnimationCue::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnimationTime() :
      op->vtkAnimationCue::GetAnimationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetDeltaTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaTime() :
      op->vtkAnimationCue::GetDeltaTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetClockTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClockTime() :
      op->vtkAnimationCue::GetClockTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  typedef vtkAnimationCue::PlayDirection temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkAnimationCue.PlayDirection"))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkAnimationCue::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkAnimationCue::PlayDirection tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkAnimationCue::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkAnimationCue_PlayDirection_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkAnimationCue_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnimationCue_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnimationCue_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnimationCue\nC++: static vtkAnimationCue *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnimationCue_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnimationCue\nC++: vtkAnimationCue *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnimationCue_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnimationCue_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTimeMode", PyvtkAnimationCue_SetTimeMode, METH_VARARGS,
   "SetTimeMode(self, mode:int) -> None\nC++: virtual void SetTimeMode(int mode)\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {"GetTimeMode", PyvtkAnimationCue_GetTimeMode, METH_VARARGS,
   "GetTimeMode(self) -> int\nC++: virtual int GetTimeMode()\n\n"},
  {"SetTimeModeToRelative", PyvtkAnimationCue_SetTimeModeToRelative, METH_VARARGS,
   "SetTimeModeToRelative(self) -> None\nC++: void SetTimeModeToRelative()\n\n"},
  {"SetTimeModeToNormalized", PyvtkAnimationCue_SetTimeModeToNormalized, METH_VARARGS,
   "SetTimeModeToNormalized(self) -> None\nC++: void SetTimeModeToNormalized()\n\n"},
  {"SetStartTime", PyvtkAnimationCue_SetStartTime, METH_VARARGS,
   "SetStartTime(self, _arg:float) -> None\nC++: virtual void SetStartTime(double _arg)\n\nGet/Set the Start time for this cue. When the current time is >=\nStartTime, the Cue is in ACTIVE state. if Current time i <\nStartTime, the Cue is in UNINITIALIZED state. Whenever the cue\nenters the ACTIVE state from an INACTIVE state, it triggers the\nStartEvent. The Start time is in seconds relative to the start of\nthe container Scene (when in Relative time mode) or is normalized\nover the span of the container Scene (when in Normalized time\nmode).\n"},
  {"GetStartTime", PyvtkAnimationCue_GetStartTime, METH_VARARGS,
   "GetStartTime(self) -> float\nC++: virtual double GetStartTime()\n\n"},
  {"SetEndTime", PyvtkAnimationCue_SetEndTime, METH_VARARGS,
   "SetEndTime(self, _arg:float) -> None\nC++: virtual void SetEndTime(double _arg)\n\nGet/Set the End time for this cue. When the current time is >\nEndTime, the Cue is in INACTIVE state. Whenever the cue leaves an\nACTIVE state to enter INACTIVE state, the EndEvent is triggered.\nThe End time is in seconds relative to the start of the container\nScene (when in Relative time mode) or is normalized over the span\nof the container Scene (when in Normalized time mode).\n"},
  {"GetEndTime", PyvtkAnimationCue_GetEndTime, METH_VARARGS,
   "GetEndTime(self) -> float\nC++: virtual double GetEndTime()\n\n"},
  {"Tick", PyvtkAnimationCue_Tick, METH_VARARGS,
   "Tick(self, currenttime:float, deltatime:float, clocktime:float)\n    -> None\nC++: virtual void Tick(double currenttime, double deltatime,\n    double clocktime)\n\nIndicates a tick or point in time in the animation. Triggers a\nTick event if currenttime >= StartTime and currenttime <=\nEndTime. Whenever the state of the cue changes, either StartEvent\nor EndEvent is triggered depending upon whether the cue entered\nActive state or quit active state respectively. The current time\nis relative to the start of the container Scene (when in Relative\ntime mode) or is normalized over the span of the container Scene\n(when in Normalized time mode). deltatime is the time since last\ncall to Tick. deltatime also can be in seconds relative to the\nstart of the container Scene or normalized depending upon the\ncue's Time mode. clocktime is the time from the scene i.e. it\ndoes not depend on the time mode for the cue. For the first call\nto Tick after a call to Initialize(), the deltatime is 0;\n"},
  {"Initialize", PyvtkAnimationCue_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nCalled when the playing of the scene begins. This will set the\nCue to UNINITIALIZED state.\n"},
  {"Finalize", PyvtkAnimationCue_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: virtual void Finalize()\n\nCalled when the scene reaches the end. If the cue state is ACTIVE\nwhen this method is called, this will trigger a\nEndAnimationCueEvent.\n"},
  {"GetAnimationTime", PyvtkAnimationCue_GetAnimationTime, METH_VARARGS,
   "GetAnimationTime(self) -> float\nC++: virtual double GetAnimationTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the AnimationTime to the\ntime of the tick.\n"},
  {"GetDeltaTime", PyvtkAnimationCue_GetDeltaTime, METH_VARARGS,
   "GetDeltaTime(self) -> float\nC++: virtual double GetDeltaTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the DeltaTime to the\ndifference in time between the current tick and the last tick.\n"},
  {"GetClockTime", PyvtkAnimationCue_GetClockTime, METH_VARARGS,
   "GetClockTime(self) -> float\nC++: virtual double GetClockTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the ClockTime to the time\nof the tick. ClockTime is directly the time from the animation\nscene neither normalized nor offsetted to the start of the scene.\n"},
  {"SetDirection", PyvtkAnimationCue_SetDirection, METH_VARARGS,
   "SetDirection(self, _arg:PlayDirection) -> None\nC++: virtual void SetDirection(PlayDirection _arg)\n\nSet/get the direction of playback.\n"},
  {"GetDirection", PyvtkAnimationCue_GetDirection, METH_VARARGS,
   "GetDirection(self) -> PlayDirection\nC++: virtual PlayDirection GetDirection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAnimationCue_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("time_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetTimeMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnimationCue_SetTimeMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnimationCue_SetTimeMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimeMode/SetTimeMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("start_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetStartTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnimationCue_SetStartTime(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnimationCue_SetStartTime(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStartTime/SetStartTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("end_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetEndTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnimationCue_SetEndTime(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnimationCue_SetEndTime(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEndTime/SetEndTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("direction"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetDirection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnimationCue_SetDirection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnimationCue_SetDirection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDirection/SetDirection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("animation_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetAnimationTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAnimationTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("delta_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetDeltaTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDeltaTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("clock_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnimationCue_GetClockTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClockTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAnimationCue_Doc =
  "vtkAnimationCue - a seqin an animation.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAnimationCue and vtkAnimationScene provide the framework to\n"
  "support animations in VTK. vtkAnimationCue represents an entity that\n"
  "changes/ animates with time, while vtkAnimationScene represents scene\n"
  "or setup for the animation, which consists on individual cues or\n"
  "other scenes.\n\n"
  "A cue has three states: UNINITIALIZED, ACTIVE and INACTIVE.\n"
  "UNINITIALIZED represents an point in time before the start time of\n"
  "the cue. The cue is in ACTIVE state at a point in time between start\n"
  "time and end time for the cue. While, beyond the end time, it is in\n"
  "INACTIVE state. When the cue enters the ACTIVE state,\n"
  "StartAnimationCueEvent is fired. This event may be handled to\n"
  "initialize the entity to be animated. When the cue leaves the ACTIVE\n"
  "state, EndAnimationCueEvent is fired, which can be handled to cleanup\n"
  "after having run the animation. For every request to render during\n"
  "the ACTIVE state, AnimationCueTickEvent is fired, which must be\n"
  "handled to perform the actual animation.\n"
  "@sa\n"
  "vtkAnimationScene\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkAnimationCue", // tp_name
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
  PyvtkAnimationCue_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnimationCue_StaticNew()
{
  return vtkAnimationCue::New();
}

PyObject *PyvtkAnimationCue_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnimationCue_Type, PyvtkAnimationCue_Methods,
    "vtkAnimationCue",
 &PyvtkAnimationCue_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAnimationCue_TimeCodes_Type);
  PyVTKEnum_Add(&PyvtkAnimationCue_TimeCodes_Type, "vtkAnimationCue.TimeCodes");

  o = (PyObject *)&PyvtkAnimationCue_TimeCodes_Type;
  if (PyDict_SetItemString(d, "TimeCodes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAnimationCue_PlayDirection_Type);
  // members of vtkAnimationCue::PlayDirection
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkAnimationCue_PlayDirection_Type.tp_dict = enumdict;

    typedef vtkAnimationCue::PlayDirection cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "BACKWARD", cxx_enum_type::BACKWARD },
      { "FORWARD", cxx_enum_type::FORWARD },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkAnimationCue_PlayDirection_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkAnimationCue_PlayDirection_Type, "vtkAnimationCue.PlayDirection");

  o = (PyObject *)&PyvtkAnimationCue_PlayDirection_Type;
  if (PyDict_SetItemString(d, "PlayDirection", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkAnimationCue::TimeCodes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "TIMEMODE_NORMALIZED", vtkAnimationCue::TIMEMODE_NORMALIZED },
        { "TIMEMODE_RELATIVE", vtkAnimationCue::TIMEMODE_RELATIVE },
      };

    o = PyvtkAnimationCue_TimeCodes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAnimationCue_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

