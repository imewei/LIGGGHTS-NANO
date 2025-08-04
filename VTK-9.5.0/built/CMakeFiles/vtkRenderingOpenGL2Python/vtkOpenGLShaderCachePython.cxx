// python wrapper for vtkOpenGLShaderCache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLShaderCache.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLShaderCache(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLShaderCache_ClassNew(); }


static PyObject *
PyvtkOpenGLShaderCache_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLShaderCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLShaderCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLShaderCache *tempr = vtkOpenGLShaderCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLShaderCache::NewInstance());

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
PyvtkOpenGLShaderCache_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLShaderCache::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLShaderCache::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SetSyncGLSLShaderVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSyncGLSLShaderVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSyncGLSLShaderVersion(temp0);
    }
    else
    {
      op->vtkOpenGLShaderCache::SetSyncGLSLShaderVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_GetSyncGLSLShaderVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSyncGLSLShaderVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSyncGLSLShaderVersion() :
      op->vtkOpenGLShaderCache::GetSyncGLSLShaderVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SyncGLSLShaderVersionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncGLSLShaderVersionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SyncGLSLShaderVersionOn();
    }
    else
    {
      op->vtkOpenGLShaderCache::SyncGLSLShaderVersionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SyncGLSLShaderVersionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncGLSLShaderVersionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SyncGLSLShaderVersionOff();
    }
    else
    {
      op->vtkOpenGLShaderCache::SyncGLSLShaderVersionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadyShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  vtkTransformFeedback *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkTransformFeedback")))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->ReadyShaderProgram(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLShaderCache::ReadyShaderProgram(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadyShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  vtkTransformFeedback *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkTransformFeedback")))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->ReadyShaderProgram(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLShaderCache::ReadyShaderProgram(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadyShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkTransformFeedback *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkTransformFeedback")))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->ReadyShaderProgram(temp0, temp1) :
      op->vtkOpenGLShaderCache::ReadyShaderProgram(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderCache_ReadyShaderProgram(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkOpenGLShaderCache_ReadyShaderProgram_s1(self, args);
    case 5:
    case 6:
      return PyvtkOpenGLShaderCache_ReadyShaderProgram_s2(self, args);
    case 1:
    case 2:
      return PyvtkOpenGLShaderCache_ReadyShaderProgram_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadyShaderProgram");
  return nullptr;
}


static PyObject *
PyvtkOpenGLShaderCache_ReleaseCurrentShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseCurrentShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseCurrentShader();
    }
    else
    {
      op->vtkOpenGLShaderCache::ReleaseCurrentShader();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

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
      op->vtkOpenGLShaderCache::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_ClearLastShaderBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastShaderBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastShaderBound();
    }
    else
    {
      op->vtkOpenGLShaderCache::ClearLastShaderBound();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_GetLastShaderBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastShaderBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->GetLastShaderBound() :
      op->vtkOpenGLShaderCache::GetLastShaderBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderCache_SetElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderCache *op = static_cast<vtkOpenGLShaderCache *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElapsedTime(temp0);
    }
    else
    {
      op->vtkOpenGLShaderCache::SetElapsedTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLShaderCache_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLShaderCache_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLShaderCache_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLShaderCache_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLShaderCache\nC++: static vtkOpenGLShaderCache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLShaderCache_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLShaderCache\nC++: vtkOpenGLShaderCache *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLShaderCache_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLShaderCache_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSyncGLSLShaderVersion", PyvtkOpenGLShaderCache_SetSyncGLSLShaderVersion, METH_VARARGS,
   "SetSyncGLSLShaderVersion(self, _arg:bool) -> None\nC++: virtual void SetSyncGLSLShaderVersion(bool _arg)\n\nSet/Get whether the GLSL version macro in the shader must be the\nsame as OpenGL version. When true, the `#version xyz` macro is\ndefined such that:\n x = OpenGLMajorVersion\n y = OpenGLMinorVersion\n z = 0\n"},
  {"GetSyncGLSLShaderVersion", PyvtkOpenGLShaderCache_GetSyncGLSLShaderVersion, METH_VARARGS,
   "GetSyncGLSLShaderVersion(self) -> bool\nC++: virtual bool GetSyncGLSLShaderVersion()\n\n"},
  {"SyncGLSLShaderVersionOn", PyvtkOpenGLShaderCache_SyncGLSLShaderVersionOn, METH_VARARGS,
   "SyncGLSLShaderVersionOn(self) -> None\nC++: virtual void SyncGLSLShaderVersionOn()\n\n"},
  {"SyncGLSLShaderVersionOff", PyvtkOpenGLShaderCache_SyncGLSLShaderVersionOff, METH_VARARGS,
   "SyncGLSLShaderVersionOff(self) -> None\nC++: virtual void SyncGLSLShaderVersionOff()\n\n"},
  {"ReadyShaderProgram", PyvtkOpenGLShaderCache_ReadyShaderProgram, METH_VARARGS,
   "ReadyShaderProgram(self, vertexCode:str, fragmentCode:str,\n    geometryCode:str, cap:vtkTransformFeedback=...)\n    -> vtkShaderProgram\nC++: virtual vtkShaderProgram *ReadyShaderProgram(\n    const char *vertexCode, const char *fragmentCode,\n    const char *geometryCode, vtkTransformFeedback *cap=nullptr)\nReadyShaderProgram(self, vertexCode:str, fragmentCode:str,\n    geometryCode:str, tessControlCode:str, tessEvalCode:str,\n    cap:vtkTransformFeedback=...) -> vtkShaderProgram\nC++: virtual vtkShaderProgram *ReadyShaderProgram(\n    const char *vertexCode, const char *fragmentCode,\n    const char *geometryCode, const char *tessControlCode,\n    const char *tessEvalCode, vtkTransformFeedback *cap=nullptr)\nReadyShaderProgram(self, shader:vtkShaderProgram,\n    cap:vtkTransformFeedback=...) -> vtkShaderProgram\nC++: virtual vtkShaderProgram *ReadyShaderProgram(\n    vtkShaderProgram *shader, vtkTransformFeedback *cap=nullptr)\n\n"},
  {"ReleaseCurrentShader", PyvtkOpenGLShaderCache_ReleaseCurrentShader, METH_VARARGS,
   "ReleaseCurrentShader(self) -> None\nC++: void ReleaseCurrentShader()\n\nRelease the current shader.  Basically go back to having no\nshaders loaded.  This is useful for old legacy code that relies\non no shaders being loaded.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLShaderCache_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nFree up any resources being used by the provided shader\n"},
  {"ClearLastShaderBound", PyvtkOpenGLShaderCache_ClearLastShaderBound, METH_VARARGS,
   "ClearLastShaderBound(self) -> None\nC++: virtual void ClearLastShaderBound()\n\nGet/Clear the last Shader bound, called by shaders as they\nrelease their graphics resources\n"},
  {"GetLastShaderBound", PyvtkOpenGLShaderCache_GetLastShaderBound, METH_VARARGS,
   "GetLastShaderBound(self) -> vtkShaderProgram\nC++: virtual vtkShaderProgram *GetLastShaderBound()\n\n"},
  {"SetElapsedTime", PyvtkOpenGLShaderCache_SetElapsedTime, METH_VARARGS,
   "SetElapsedTime(self, val:float) -> None\nC++: void SetElapsedTime(float val)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLShaderCache_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("sync_glsl_shader_version"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLShaderCache_GetSyncGLSLShaderVersion(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLShaderCache_SetSyncGLSLShaderVersion(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLShaderCache_SetSyncGLSLShaderVersion(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSyncGLSLShaderVersion/SetSyncGLSLShaderVersion\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("elapsed_time"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLShaderCache_SetElapsedTime(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLShaderCache_SetElapsedTime(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetElapsedTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_shader_bound"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLShaderCache_GetLastShaderBound(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastShaderBound\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLShaderCache_Doc =
  "vtkOpenGLShaderCache - manage Shader Programs within a context\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLShaderCache manages shader program compilation and binding\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLShaderCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLShaderCache", // tp_name
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
  PyvtkOpenGLShaderCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLShaderCache_StaticNew()
{
  return vtkOpenGLShaderCache::New();
}

PyObject *PyvtkOpenGLShaderCache_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLShaderCache_Type, PyvtkOpenGLShaderCache_Methods,
    "vtkOpenGLShaderCache",
 &PyvtkOpenGLShaderCache_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLShaderCache_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLShaderCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLShaderCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLShaderCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

