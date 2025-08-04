// python wrapper for vtkArrayRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkShader.h"
#include "vtkStringToken.h"
#include "vtkArrayRenderer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkArrayRenderer(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkArrayRenderer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayRenderer_ElementShape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkArrayRenderer.ElementShape", // tp_name
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
static PyObject *PyvtkArrayRenderer_ElementShape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkArrayRenderer_ElementShape_Type, static_cast<int>(val));
}


static PyObject *
PyvtkArrayRenderer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayRenderer *tempr = vtkArrayRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayRenderer::NewInstance());

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
PyvtkArrayRenderer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArrayRenderer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArrayRenderer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_PrepareColormap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareColormap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkScalarsToColors")))
  {
    if (ap.IsBound())
    {
      op->PrepareColormap(temp0);
    }
    else
    {
      op->vtkArrayRenderer::PrepareColormap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkArrayRenderer::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRenderer_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkArrayRenderer::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRenderer_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayRenderer_GetBounds_s1(self, args);
    case 1:
      return PyvtkArrayRenderer_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkArrayRenderer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkArrayRenderer::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkArrayRenderer::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetHasOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasOpaque() :
      op->vtkArrayRenderer::GetHasOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetHasOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasOpaque(temp0);
    }
    else
    {
      op->vtkArrayRenderer::SetHasOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetHasTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasTranslucent() :
      op->vtkArrayRenderer::GetHasTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetHasTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasTranslucent(temp0);
    }
    else
    {
      op->vtkArrayRenderer::SetHasTranslucent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkArrayRenderer::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkArrayRenderer::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetVertexShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexShaderSource(temp0);
    }
    else
    {
      op->vtkArrayRenderer::SetVertexShaderSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetVertexShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexShaderSource() :
      op->vtkArrayRenderer::GetVertexShaderSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetFragmentShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFragmentShaderSource(temp0);
    }
    else
    {
      op->vtkArrayRenderer::SetFragmentShaderSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetFragmentShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFragmentShaderSource() :
      op->vtkArrayRenderer::GetFragmentShaderSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_ResetModsToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetModsToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetModsToDefault();
    }
    else
    {
      op->vtkArrayRenderer::ResetModsToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_AddMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddMod(temp0);
    }
    else
    {
      op->vtkArrayRenderer::AddMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_AddMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->AddMods(temp0);
    }
    else
    {
      op->vtkArrayRenderer::AddMods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_RemoveMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveMod(temp0);
    }
    else
    {
      op->vtkArrayRenderer::RemoveMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_RemoveAllMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMods();
    }
    else
    {
      op->vtkArrayRenderer::RemoveAllMods();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_GetShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  vtkShader::Type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkShader.Type"))
  {
    vtkShader *tempr = (ap.IsBound() ?
      op->GetShader(temp0) :
      op->vtkArrayRenderer::GetShader(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_BindArrayToTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindArrayToTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->BindArrayToTexture(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkArrayRenderer::BindArrayToTexture(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetNumberOfInstances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInstances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetNumberOfInstances(temp0) :
      op->vtkArrayRenderer::SetNumberOfInstances(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetNumberOfElements(temp0) :
      op->vtkArrayRenderer::SetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRenderer_SetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRenderer *op = static_cast<vtkArrayRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetElementType(temp0) :
      op->vtkArrayRenderer::SetElementType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRenderer_Methods[] = {
  {"IsTypeOf", PyvtkArrayRenderer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayRenderer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayRenderer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArrayRenderer\nC++: static vtkArrayRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayRenderer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArrayRenderer\nC++: vtkArrayRenderer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArrayRenderer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArrayRenderer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PrepareColormap", PyvtkArrayRenderer_PrepareColormap, METH_VARARGS,
   "PrepareColormap(self, cmap:vtkScalarsToColors=...) -> None\nC++: void PrepareColormap(vtkScalarsToColors *cmap=nullptr)\n\nPrepare a colormap for use in a shader.\n\nIf you provide a lookup table, it will be uploaded as a 2-D\ntexture named \"color_map\" for you to use in your shaders. If not,\na default cool-to-warm colormap will be created.\n\nThis function may call CreateColormapTexture().\n"},
  {"GetBounds", PyvtkArrayRenderer_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"Render", PyvtkArrayRenderer_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, a:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *a) override;\n\nRender geometry.\n\nThis just calls glDrawElementInstanced().\n"},
  {"ReleaseGraphicsResources", PyvtkArrayRenderer_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nRelease any graphics resources associated with the window.\n"},
  {"GetHasOpaque", PyvtkArrayRenderer_GetHasOpaque, METH_VARARGS,
   "GetHasOpaque(self) -> int\nC++: virtual vtkTypeBool GetHasOpaque()\n\nSet/get whether the data will render any fully opaque primitives.\n"},
  {"SetHasOpaque", PyvtkArrayRenderer_SetHasOpaque, METH_VARARGS,
   "SetHasOpaque(self, _arg:int) -> None\nC++: virtual void SetHasOpaque(vtkTypeBool _arg)\n\n"},
  {"GetHasTranslucent", PyvtkArrayRenderer_GetHasTranslucent, METH_VARARGS,
   "GetHasTranslucent(self) -> int\nC++: virtual vtkTypeBool GetHasTranslucent()\n\nSet/get whether the data will render any semi-transparent (i.e.,\ntranslucent) primitives.\n"},
  {"SetHasTranslucent", PyvtkArrayRenderer_SetHasTranslucent, METH_VARARGS,
   "SetHasTranslucent(self, _arg:int) -> None\nC++: virtual void SetHasTranslucent(vtkTypeBool _arg)\n\n"},
  {"HasOpaqueGeometry", PyvtkArrayRenderer_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> bool\nC++: bool HasOpaqueGeometry() override;\n\nSome introspection on the type of data the mapper will render\nused by props to determine if they should invoke the mapper on a\nspecific rendering pass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkArrayRenderer_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> bool\nC++: bool HasTranslucentPolygonalGeometry() override;\n\n"},
  {"SetVertexShaderSource", PyvtkArrayRenderer_SetVertexShaderSource, METH_VARARGS,
   "SetVertexShaderSource(self, arg:str) -> None\nC++: virtual void SetVertexShaderSource(const char *arg)\n\nSet/get the source for the vertex shader.\n\nThis is not identical to the source sent to OpenGL; there may be\nreplacements made by any attached GLSL modifier objects.\n"},
  {"GetVertexShaderSource", PyvtkArrayRenderer_GetVertexShaderSource, METH_VARARGS,
   "GetVertexShaderSource(self) -> str\nC++: virtual const char *GetVertexShaderSource()\n\n"},
  {"SetFragmentShaderSource", PyvtkArrayRenderer_SetFragmentShaderSource, METH_VARARGS,
   "SetFragmentShaderSource(self, arg:str) -> None\nC++: virtual void SetFragmentShaderSource(const char *arg)\n\nSet/get the source for the fragment shader.\n\nThis is not identical to the source sent to OpenGL; there may be\nreplacements made by any attached GLSL modifier objects.\n"},
  {"GetFragmentShaderSource", PyvtkArrayRenderer_GetFragmentShaderSource, METH_VARARGS,
   "GetFragmentShaderSource(self) -> str\nC++: virtual const char *GetFragmentShaderSource()\n\n"},
  {"ResetModsToDefault", PyvtkArrayRenderer_ResetModsToDefault, METH_VARARGS,
   "ResetModsToDefault(self) -> None\nC++: void ResetModsToDefault()\n\n"},
  {"AddMod", PyvtkArrayRenderer_AddMod, METH_VARARGS,
   "AddMod(self, className:str) -> None\nC++: void AddMod(const std::string &className)\n\n"},
  {"AddMods", PyvtkArrayRenderer_AddMods, METH_VARARGS,
   "AddMods(self, classNames:(str, ...)) -> None\nC++: void AddMods(const std::vector<std::string> &classNames)\n\n"},
  {"RemoveMod", PyvtkArrayRenderer_RemoveMod, METH_VARARGS,
   "RemoveMod(self, className:str) -> None\nC++: void RemoveMod(const std::string &className)\n\n"},
  {"RemoveAllMods", PyvtkArrayRenderer_RemoveAllMods, METH_VARARGS,
   "RemoveAllMods(self) -> None\nC++: void RemoveAllMods()\n\n"},
  {"GetShader", PyvtkArrayRenderer_GetShader, METH_VARARGS,
   "GetShader(self, shaderType:vtkShader.Type) -> vtkShader\nC++: vtkShader *GetShader(vtkShader::Type shaderType)\n\nReturn a shader of the given type (creating as needed).\n"},
  {"BindArrayToTexture", PyvtkArrayRenderer_BindArrayToTexture, METH_VARARGS,
   "BindArrayToTexture(self, textureName:vtkStringToken,\n    array:vtkDataArray, asScalars:bool=False) -> None\nC++: void BindArrayToTexture(vtkStringToken textureName,\n    vtkDataArray *array, bool asScalars=false)\n\nBind a data array to the given textureName (used in shader\nprogram texelFetch calls).\n\nIf asScalars is false (the default), then the array's components\nare treated as components of single texture values. If asScalars\nis true, then a 2-d texture image is uploaded where each value is\na scalar (row indices are tuple IDs, column indices are component\nIDs).\n"},
  {"SetNumberOfInstances", PyvtkArrayRenderer_SetNumberOfInstances, METH_VARARGS,
   "SetNumberOfInstances(self, numberOfInstances:int) -> bool\nC++: virtual bool SetNumberOfInstances(\n    vtkIdType numberOfInstances)\n\n"},
  {"SetNumberOfElements", PyvtkArrayRenderer_SetNumberOfElements, METH_VARARGS,
   "SetNumberOfElements(self, numberOfElements:int) -> bool\nC++: virtual bool SetNumberOfElements(vtkIdType numberOfElements)\n\n"},
  {"SetElementType", PyvtkArrayRenderer_SetElementType, METH_VARARGS,
   "SetElementType(self, elementType:int) -> bool\nC++: virtual bool SetElementType(int elementType)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkArrayRenderer_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("has_opaque"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayRenderer_GetHasOpaque(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArrayRenderer_SetHasOpaque(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArrayRenderer_SetHasOpaque(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHasOpaque/SetHasOpaque\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("has_translucent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayRenderer_GetHasTranslucent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArrayRenderer_SetHasTranslucent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArrayRenderer_SetHasTranslucent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHasTranslucent/SetHasTranslucent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertex_shader_source"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayRenderer_GetVertexShaderSource(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArrayRenderer_SetVertexShaderSource(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArrayRenderer_SetVertexShaderSource(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVertexShaderSource/SetVertexShaderSource\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fragment_shader_source"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayRenderer_GetFragmentShaderSource(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArrayRenderer_SetFragmentShaderSource(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArrayRenderer_SetFragmentShaderSource(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFragmentShaderSource/SetFragmentShaderSource\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayRenderer_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkArrayRenderer_Doc =
  "vtkArrayRenderer - Render instanced elements textured with arrays\nfrom input data.\n\n"
  "Superclass: vtkMapper\n\n"
  "This currently handles hexahedra and tetrahedra.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkArrayRenderer", // tp_name
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
  PyvtkArrayRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayRenderer_StaticNew()
{
  return vtkArrayRenderer::New();
}

PyObject *PyvtkArrayRenderer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArrayRenderer_Type, PyvtkArrayRenderer_Methods,
    "vtkArrayRenderer",
 &PyvtkArrayRenderer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkArrayRenderer_ElementShape_Type);
  PyVTKEnum_Add(&PyvtkArrayRenderer_ElementShape_Type, "vtkArrayRenderer.ElementShape");

  o = (PyObject *)&PyvtkArrayRenderer_ElementShape_Type;
  if (PyDict_SetItemString(d, "ElementShape", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkArrayRenderer::ElementShape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "Point", vtkArrayRenderer::Point },
        { "Line", vtkArrayRenderer::Line },
        { "LineStrip", vtkArrayRenderer::LineStrip },
        { "Triangle", vtkArrayRenderer::Triangle },
        { "TriangleStrip", vtkArrayRenderer::TriangleStrip },
        { "TriangleFan", vtkArrayRenderer::TriangleFan },
      };

    o = PyvtkArrayRenderer_ElementShape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkArrayRenderer_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

