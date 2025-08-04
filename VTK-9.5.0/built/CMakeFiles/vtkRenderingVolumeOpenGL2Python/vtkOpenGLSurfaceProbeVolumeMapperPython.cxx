// python wrapper for vtkOpenGLSurfaceProbeVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenGLSurfaceProbeVolumeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLSurfaceProbeVolumeMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLSurfaceProbeVolumeMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLSurfaceProbeVolumeMapper.BlendModes", // tp_name
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
static PyObject *PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLSurfaceProbeVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLSurfaceProbeVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLSurfaceProbeVolumeMapper *tempr = vtkOpenGLSurfaceProbeVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLSurfaceProbeVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::NewInstance());

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
PyvtkOpenGLSurfaceProbeVolumeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLSurfaceProbeVolumeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetProbeInputData(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetProbeInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetProbeInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetProbeInput() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetProbeInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetProbeInputConnection(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetProbeInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLSurfaceProbeVolumeMapper::BlendModes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetBlendMode());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  typedef vtkOpenGLSurfaceProbeVolumeMapper::BlendModes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLSurfaceProbeVolumeMapper.BlendModes"))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToNone();
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToMaximumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMaximumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMaximumIntensity();
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendModeToMaximumIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToMinimumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMinimumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMinimumIntensity();
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendModeToMinimumIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToAverageIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToAverageIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToAverageIntensity();
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendModeToAverageIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlendWidth() :
      op->vtkOpenGLSurfaceProbeVolumeMapper::GetBlendWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendWidth(temp0);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::SetBlendWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLSurfaceProbeVolumeMapper_UpdateShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLSurfaceProbeVolumeMapper *op = static_cast<vtkOpenGLSurfaceProbeVolumeMapper *>(vp);

  vtkOpenGLHelper *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkOpenGLHelper") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->UpdateShaders(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLSurfaceProbeVolumeMapper::UpdateShaders(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLSurfaceProbeVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLSurfaceProbeVolumeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLSurfaceProbeVolumeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLSurfaceProbeVolumeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLSurfaceProbeVolumeMapper\nC++: static vtkOpenGLSurfaceProbeVolumeMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLSurfaceProbeVolumeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLSurfaceProbeVolumeMapper\nC++: vtkOpenGLSurfaceProbeVolumeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLSurfaceProbeVolumeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLSurfaceProbeVolumeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProbeInputData", PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputData, METH_VARARGS,
   "SetProbeInputData(self, in_:vtkPolyData) -> None\nC++: void SetProbeInputData(vtkPolyData *in)\n\nSpecify the input data used for probing (optional). If no probe\ndata is specified, the input is used.\n"},
  {"GetProbeInput", PyvtkOpenGLSurfaceProbeVolumeMapper_GetProbeInput, METH_VARARGS,
   "GetProbeInput(self) -> vtkPolyData\nC++: vtkPolyData *GetProbeInput()\n\n"},
  {"SetProbeInputConnection", PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputConnection, METH_VARARGS,
   "SetProbeInputConnection(self, algOutput:vtkAlgorithmOutput)\n    -> None\nC++: void SetProbeInputConnection(vtkAlgorithmOutput *algOutput)\n\n"},
  {"SetSourceData", PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceData, METH_VARARGS,
   "SetSourceData(self, in_:vtkImageData) -> None\nC++: void SetSourceData(vtkImageData *in)\n\nSpecify the input data to be probed.\n"},
  {"GetSource", PyvtkOpenGLSurfaceProbeVolumeMapper_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkImageData\nC++: vtkImageData *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetWindow", PyvtkOpenGLSurfaceProbeVolumeMapper_GetWindow, METH_VARARGS,
   "GetWindow(self) -> float\nC++: virtual double GetWindow()\n\nSet/Get the current window and level values used for scalar\ncoloring.\n"},
  {"SetWindow", PyvtkOpenGLSurfaceProbeVolumeMapper_SetWindow, METH_VARARGS,
   "SetWindow(self, _arg:float) -> None\nC++: virtual void SetWindow(double _arg)\n\n"},
  {"GetLevel", PyvtkOpenGLSurfaceProbeVolumeMapper_GetLevel, METH_VARARGS,
   "GetLevel(self) -> float\nC++: virtual double GetLevel()\n\n"},
  {"SetLevel", PyvtkOpenGLSurfaceProbeVolumeMapper_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:float) -> None\nC++: virtual void SetLevel(double _arg)\n\n"},
  {"GetBlendMode", PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendMode, METH_VARARGS,
   "GetBlendMode(self) -> BlendModes\nC++: virtual BlendModes GetBlendMode()\n\n"},
  {"SetBlendMode", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendMode, METH_VARARGS,
   "SetBlendMode(self, _arg:BlendModes) -> None\nC++: virtual void SetBlendMode(BlendModes _arg)\n\n"},
  {"SetBlendModeToNone", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToNone, METH_VARARGS,
   "SetBlendModeToNone(self) -> None\nC++: void SetBlendModeToNone()\n\n"},
  {"SetBlendModeToMaximumIntensity", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToMaximumIntensity, METH_VARARGS,
   "SetBlendModeToMaximumIntensity(self) -> None\nC++: void SetBlendModeToMaximumIntensity()\n\n"},
  {"SetBlendModeToMinimumIntensity", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToMinimumIntensity, METH_VARARGS,
   "SetBlendModeToMinimumIntensity(self) -> None\nC++: void SetBlendModeToMinimumIntensity()\n\n"},
  {"SetBlendModeToAverageIntensity", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendModeToAverageIntensity, METH_VARARGS,
   "SetBlendModeToAverageIntensity(self) -> None\nC++: void SetBlendModeToAverageIntensity()\n\n"},
  {"GetBlendWidth", PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendWidth, METH_VARARGS,
   "GetBlendWidth(self) -> float\nC++: virtual double GetBlendWidth()\n\nSet/Get the blend width in world coordinates.\n"},
  {"SetBlendWidth", PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendWidth, METH_VARARGS,
   "SetBlendWidth(self, _arg:float) -> None\nC++: virtual void SetBlendWidth(double _arg)\n\n"},
  {"RenderPiece", PyvtkOpenGLSurfaceProbeVolumeMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *ren, vtkActor *act) override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"UpdateShaders", PyvtkOpenGLSurfaceProbeVolumeMapper_UpdateShaders, METH_VARARGS,
   "UpdateShaders(self, cellBO:vtkOpenGLHelper, ren:vtkRenderer,\n    act:vtkActor) -> None\nC++: void UpdateShaders(vtkOpenGLHelper &cellBO, vtkRenderer *ren,\n     vtkActor *act) override;\n\nMake sure appropriate shaders are defined, compiled and bound. \nThis method orchistrates the process, much of the work is done in\nother methods\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLSurfaceProbeVolumeMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("probe_input_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetProbeInputData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("probe_input_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetProbeInputConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetProbeInputConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("source_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSourceData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("source_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetSourceConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSourceConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWindow/SetWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("level"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetLevel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetLevel(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetLevel(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLevel/SetLevel\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blend_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBlendMode/SetBlendMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blend_width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetBlendWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendWidth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_SetBlendWidth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBlendWidth/SetBlendWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("probe_input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetProbeInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetProbeInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("source"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLSurfaceProbeVolumeMapper_GetSource(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSource\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLSurfaceProbeVolumeMapper_Doc =
  "vtkOpenGLSurfaceProbeVolumeMapper - PolyDataMapper colored with\nprobed volume data.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "PolyDataMapper that probes volume data at the points positions\n"
  "specified in its input data. The rendered surface is colored using\n"
  "the scalar values that were probed in the source volume. The mapper\n"
  "accepts three inputs: the Input, the Source and an optional\n"
  "ProbeInput. The Source data defines the vtkImageData from which\n"
  "scalar values are interpolated. The Input data defines the rendered\n"
  "surface. The ProbeInput defines the geometry used to interpolate the\n"
  "source data. If the ProbeInput is not specified, the Input is used\n"
  "both for probing and rendering.\n\n"
  "Projecting the scalar values from the ProbeInput to the Input is done\n"
  "thanks to texture coordinates. Both inputs must provide texture\n"
  "coordinates in the [0, 1] range.\n\n"
  "The sampled scalar values can be computed with different blending\n"
  "strategy that use surface normals to perform thick probing of the\n"
  "Source data.\n\n"
  "ote The following features are not supported yet but should be\n"
  "considered in the future.\n\n"
  "- The volume texture is always uploaded using linear interpolation.\n"
  "  The public API could provide a setter to use nearest neighbor\n"
  "  interpolation instead.\n\n"
  "- If the source is rendered by a volume mapper, any transform applied\n"
  "to the volume is ignored as there is no interface to pass this\n"
  "  information.\n\n"
  "- Only the first scalar component is used for rendering and rescaled\n"
  "  with Window/Level. Consider supporting RGB volumes without W/L\n"
  "  mapping, and independent component. Consider supporting Color and\n"
  "  opacity transfer function to replace W/L mapping.\n\n"
  "Passing a vtkVolumeProperty to this mapper should be considered to\n"
  "address the above points.\n\n"
  "- A background value of (0, 0, 0, 0) is used when probing outside the\n"
  "volume, but this parameters could be exposed in the public API\n\n"
  "- A step value corresponding to the half of the minimum spacing value\n"
  "of the source is used for blend modes, but it could be configured\n"
  "  from the public API.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLSurfaceProbeVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLSurfaceProbeVolumeMapper", // tp_name
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
  PyvtkOpenGLSurfaceProbeVolumeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLSurfaceProbeVolumeMapper_StaticNew()
{
  return vtkOpenGLSurfaceProbeVolumeMapper::New();
}

PyObject *PyvtkOpenGLSurfaceProbeVolumeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLSurfaceProbeVolumeMapper_Type, PyvtkOpenGLSurfaceProbeVolumeMapper_Methods,
    "vtkOpenGLSurfaceProbeVolumeMapper",
 &PyvtkOpenGLSurfaceProbeVolumeMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOpenGLPolyDataMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type);
  // members of vtkOpenGLSurfaceProbeVolumeMapper::BlendModes
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type.tp_dict = enumdict;

    typedef vtkOpenGLSurfaceProbeVolumeMapper::BlendModes cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[4] = {
      { "NONE", cxx_enum_type::NONE },
      { "MAX", cxx_enum_type::MAX },
      { "MIN", cxx_enum_type::MIN },
      { "AVERAGE", cxx_enum_type::AVERAGE },
    };

    for (int c = 0; c < 4; c++)
    {
      enumval = PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type, "vtkOpenGLSurfaceProbeVolumeMapper.BlendModes");

  o = (PyObject *)&PyvtkOpenGLSurfaceProbeVolumeMapper_BlendModes_Type;
  if (PyDict_SetItemString(d, "BlendModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLSurfaceProbeVolumeMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLSurfaceProbeVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLSurfaceProbeVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLSurfaceProbeVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

