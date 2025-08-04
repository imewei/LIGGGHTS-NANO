// python wrapper for vtkDrawTexturedElements
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkShader.h"
#include "vtkStringToken.h"
#include "vtkDrawTexturedElements.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDrawTexturedElements(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDrawTexturedElements_ElementShape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkDrawTexturedElements.ElementShape", // tp_name
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
static PyObject *PyvtkDrawTexturedElements_ElementShape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDrawTexturedElements_ElementShape_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDrawTexturedElements_PatchShape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkDrawTexturedElements.PatchShape", // tp_name
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
static PyObject *PyvtkDrawTexturedElements_PatchShape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDrawTexturedElements_PatchShape_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDrawTexturedElements_GetShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShader");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  vtkShader::Type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkShader.Type"))
  {
    vtkShader *tempr = op->GetShader(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_BindArrayToTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindArrayToTexture");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

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
    op->BindArrayToTexture(*temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_AppendArrayToTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendArrayToTexture");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

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
    op->AppendArrayToTexture(*temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_UnbindArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbindArray");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    bool tempr = op->UnbindArray(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetNumberOfInstances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInstances");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfInstances();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_SetNumberOfInstances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInstances");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->SetNumberOfInstances(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->SetNumberOfElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetElementType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_SetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->SetElementType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetPatchType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetPatchType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_SetPatchType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatchType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->SetPatchType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetIncludeColormap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeColormap");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetIncludeColormap();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_SetIncludeColormap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeColormap");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->SetIncludeColormap(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_DrawInstancedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInstancedElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  vtkMapper *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetVTKObject(temp2, "vtkMapper"))
  {
    op->DrawInstancedElements(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_ReleaseResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseResources");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProgram *tempr = op->GetShaderProgram();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_GetGLSLModCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGLSLModCollection");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDrawTexturedElements *op = static_cast<vtkDrawTexturedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = op->GetGLSLModCollection();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDrawTexturedElements_PatchVertexCountFromPrimitive(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PatchVertexCountFromPrimitive");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDrawTexturedElements::PatchVertexCountFromPrimitive(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDrawTexturedElements_Methods[] = {
  {"GetShader", PyvtkDrawTexturedElements_GetShader, METH_VARARGS,
   "GetShader(self, shaderType:vtkShader.Type) -> vtkShader\nC++: vtkShader *GetShader(vtkShader::Type shaderType)\n\nReturn a shader of the given type (creating as needed).\n"},
  {"BindArrayToTexture", PyvtkDrawTexturedElements_BindArrayToTexture, METH_VARARGS,
   "BindArrayToTexture(self, textureName:vtkStringToken,\n    array:vtkDataArray, asScalars:bool=False) -> None\nC++: void BindArrayToTexture(vtkStringToken textureName,\n    vtkDataArray *array, bool asScalars=false)\n\nBind a data array to the given textureName (used in shader\nprogram texelFetch calls).\n\nIf asScalars is false (the default), then the array's components\nare treated as components of single texture values. If asScalars\nis true, then a 2-d texture image is uploaded where each value is\na scalar (row indices are tuple IDs, column indices are component\nIDs).\n"},
  {"AppendArrayToTexture", PyvtkDrawTexturedElements_AppendArrayToTexture, METH_VARARGS,
   "AppendArrayToTexture(self, textureName:vtkStringToken,\n    array:vtkDataArray, asScalars:bool=False) -> None\nC++: void AppendArrayToTexture(vtkStringToken textureName,\n    vtkDataArray *array, bool asScalars=false)\n\n"},
  {"UnbindArray", PyvtkDrawTexturedElements_UnbindArray, METH_VARARGS,
   "UnbindArray(self, __a:vtkStringToken) -> bool\nC++: bool UnbindArray(vtkStringToken)\n\n"},
  {"GetNumberOfInstances", PyvtkDrawTexturedElements_GetNumberOfInstances, METH_VARARGS,
   "GetNumberOfInstances(self) -> int\nC++: vtkIdType GetNumberOfInstances()\n\nSet/get the number of element instances to draw.\n"},
  {"SetNumberOfInstances", PyvtkDrawTexturedElements_SetNumberOfInstances, METH_VARARGS,
   "SetNumberOfInstances(self, numberOfInstances:int) -> bool\nC++: virtual bool SetNumberOfInstances(\n    vtkIdType numberOfInstances)\n\n"},
  {"GetNumberOfElements", PyvtkDrawTexturedElements_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self) -> int\nC++: vtkIdType GetNumberOfElements()\n\nSet/get the number of elements (primitives) to draw per instance.\n"},
  {"SetNumberOfElements", PyvtkDrawTexturedElements_SetNumberOfElements, METH_VARARGS,
   "SetNumberOfElements(self, numberOfElements:int) -> bool\nC++: virtual bool SetNumberOfElements(vtkIdType numberOfElements)\n\n"},
  {"GetElementType", PyvtkDrawTexturedElements_GetElementType, METH_VARARGS,
   "GetElementType(self) -> int\nC++: int GetElementType()\n\nSet/get the type of elements to draw.\n\nThis determines the number of vertices rendered per element.\nValues must come from the ElementShape enum; the default is\nElementShape::TriangleStrip.\n"},
  {"SetElementType", PyvtkDrawTexturedElements_SetElementType, METH_VARARGS,
   "SetElementType(self, elementType:int) -> bool\nC++: virtual bool SetElementType(int elementType)\n\n"},
  {"GetPatchType", PyvtkDrawTexturedElements_GetPatchType, METH_VARARGS,
   "GetPatchType(self) -> int\nC++: int GetPatchType()\n\nSet/get the type of primitive an abstract patch gets tessellated\ninto.\n\nThis determines the number of input patch vertices to the\ntessellation shaders. Values must come from the PatchShape enum;\nthe default is PatchShape::Triangle.\n"},
  {"SetPatchType", PyvtkDrawTexturedElements_SetPatchType, METH_VARARGS,
   "SetPatchType(self, patchType:int) -> bool\nC++: virtual bool SetPatchType(int patchType)\n\n"},
  {"GetIncludeColormap", PyvtkDrawTexturedElements_GetIncludeColormap, METH_VARARGS,
   "GetIncludeColormap(self) -> bool\nC++: bool GetIncludeColormap()\n\nSet/get whether to upload a colormap texture.\n\nIf enabled (the default), then create (if needed) and upload a\ncolormap texture image bound to a \"color_map\" uniform sampler.\n"},
  {"SetIncludeColormap", PyvtkDrawTexturedElements_SetIncludeColormap, METH_VARARGS,
   "SetIncludeColormap(self, includeColormap:bool) -> bool\nC++: virtual bool SetIncludeColormap(bool includeColormap)\n\n"},
  {"DrawInstancedElements", PyvtkDrawTexturedElements_DrawInstancedElements, METH_VARARGS,
   "DrawInstancedElements(self, ren:vtkRenderer, a:vtkActor,\n    mapper:vtkMapper) -> None\nC++: void DrawInstancedElements(vtkRenderer *ren, vtkActor *a,\n    vtkMapper *mapper)\n\nRender geometry.\n\nThis just calls glDrawElementInstanced().\n"},
  {"ReleaseResources", PyvtkDrawTexturedElements_ReleaseResources, METH_VARARGS,
   "ReleaseResources(self, window:vtkWindow) -> None\nC++: void ReleaseResources(vtkWindow *window)\n\nRelease any graphics resources associated with the window.\n"},
  {"GetShaderProgram", PyvtkDrawTexturedElements_GetShaderProgram, METH_VARARGS,
   "GetShaderProgram(self) -> vtkShaderProgram\nC++: vtkShaderProgram *GetShaderProgram()\n\nReturn the internal shader program so subclasses can\ncreate/replace shaders.\n"},
  {"GetGLSLModCollection", PyvtkDrawTexturedElements_GetGLSLModCollection, METH_VARARGS,
   "GetGLSLModCollection(self) -> vtkCollection\nC++: vtkCollection *GetGLSLModCollection()\n\nReturn the GLSL mods.\n"},
  {"PatchVertexCountFromPrimitive", PyvtkDrawTexturedElements_PatchVertexCountFromPrimitive, METH_VARARGS,
   "PatchVertexCountFromPrimitive(element:int) -> int\nC++: static vtkIdType PatchVertexCountFromPrimitive(int element)\n\nReturn the number of vertices in the patch primitive.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDrawTexturedElements_GetSets[] = {
  {
    /*name=*/pystr("element_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetElementType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetElementType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("patch_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetPatchType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPatchType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("include_colormap"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetIncludeColormap(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetIncludeColormap\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shader_program"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetShaderProgram(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetShaderProgram\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("glsl_mod_collection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetGLSLModCollection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGLSLModCollection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_instances"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetNumberOfInstances(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfInstances\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_elements"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDrawTexturedElements_GetNumberOfElements(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfElements\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkDrawTexturedElements_vtkDrawTexturedElements(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDrawTexturedElements");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDrawTexturedElements *op = new vtkDrawTexturedElements();

    result = PyVTKSpecialObject_New("vtkDrawTexturedElements", op);
  }

  return result;
}

static PyMethodDef PyvtkDrawTexturedElements_vtkDrawTexturedElements_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkDrawTexturedElements_Doc =

  "vtkDrawTexturedElements() -> vtkDrawTexturedElements\nC++: vtkDrawTexturedElements()\n""\n"
  "vtkDrawTexturedElements - A base class for mappers or render\nresponders that need to\n         draw primitives via vertex-pulling.\n\n"
  "Since this class is intended to be inherited by other classes that\n"
  "must *also* inherit a VTK mapper or responder class, it is not a\n"
  "subclass of vtkObject; instead, it provides methods your subclass can\n"
  "invoke during rendering.\n\n"
  "This currently handles hexahedra and tetrahedra.\n\n";

static PyObject *
PyvtkDrawTexturedElements_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDrawTexturedElements_vtkDrawTexturedElements(nullptr, args);
}

static void PyvtkDrawTexturedElements_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDrawTexturedElements *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDrawTexturedElements_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDrawTexturedElements_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkDrawTexturedElements", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDrawTexturedElements_Delete, // tp_dealloc
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
  PyvtkDrawTexturedElements_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDrawTexturedElements_Doc, // tp_doc
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
  PyvtkDrawTexturedElements_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkDrawTexturedElements_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDrawTexturedElements_TypeNew(); }
#define DECLARED_PyvtkDrawTexturedElements_TypeNew
#endif

PyObject *PyvtkDrawTexturedElements_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDrawTexturedElements_Type,
    PyvtkDrawTexturedElements_Methods,
    PyvtkDrawTexturedElements_GetSets,
    PyvtkDrawTexturedElements_vtkDrawTexturedElements_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDrawTexturedElements_ElementShape_Type);
  PyVTKEnum_Add(&PyvtkDrawTexturedElements_ElementShape_Type, "vtkDrawTexturedElements.ElementShape");

  o = (PyObject *)&PyvtkDrawTexturedElements_ElementShape_Type;
  if (PyDict_SetItemString(d, "ElementShape", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDrawTexturedElements_PatchShape_Type);
  PyVTKEnum_Add(&PyvtkDrawTexturedElements_PatchShape_Type, "vtkDrawTexturedElements.PatchShape");

  o = (PyObject *)&PyvtkDrawTexturedElements_PatchShape_Type;
  if (PyDict_SetItemString(d, "PatchShape", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkDrawTexturedElements::ElementShape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Point", vtkDrawTexturedElements::Point },
        { "Line", vtkDrawTexturedElements::Line },
        { "LineStrip", vtkDrawTexturedElements::LineStrip },
        { "Triangle", vtkDrawTexturedElements::Triangle },
        { "TriangleStrip", vtkDrawTexturedElements::TriangleStrip },
        { "TriangleFan", vtkDrawTexturedElements::TriangleFan },
        { "AbstractPatches", vtkDrawTexturedElements::AbstractPatches },
      };

    o = PyvtkDrawTexturedElements_ElementShape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDrawTexturedElements::PatchShape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "PatchLine", vtkDrawTexturedElements::PatchLine },
        { "PatchTriangle", vtkDrawTexturedElements::PatchTriangle },
        { "PatchQuadrilateral", vtkDrawTexturedElements::PatchQuadrilateral },
      };

    o = PyvtkDrawTexturedElements_PatchShape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDrawTexturedElements(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDrawTexturedElements_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDrawTexturedElements", o) != 0)
  {
    Py_DECREF(o);
  }

}

