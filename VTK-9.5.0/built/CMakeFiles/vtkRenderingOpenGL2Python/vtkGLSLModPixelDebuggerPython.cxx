// python wrapper for vtkGLSLModPixelDebugger
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGLSLModPixelDebugger.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGLSLModPixelDebugger(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGLSLModPixelDebugger_ClassNew(); }

#ifndef DECLARED_PyvtkGLSLModifierBase_ClassNew
extern "C" { PyObject *PyvtkGLSLModifierBase_ClassNew(); }
#define DECLARED_PyvtkGLSLModifierBase_ClassNew
#endif

static PyObject *
PyvtkGLSLModPixelDebugger_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLSLModPixelDebugger::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLSLModPixelDebugger::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLSLModPixelDebugger *tempr = vtkGLSLModPixelDebugger::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLSLModPixelDebugger *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLSLModPixelDebugger::NewInstance());

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
PyvtkGLSLModPixelDebugger_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLSLModPixelDebugger::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLSLModPixelDebugger::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_SetSubstitutionJSONFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubstitutionJSONFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubstitutionJSONFileName(temp0);
    }
    else
    {
      op->vtkGLSLModPixelDebugger::SetSubstitutionJSONFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_ReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  vtkOpenGLRenderer *temp0 = nullptr;
  std::string temp1;
  std::string temp2;
  std::string temp3;
  std::string temp4;
  std::string temp5;
  vtkAbstractMapper *temp6 = nullptr;
  vtkActor *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetVTKObject(temp6, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp7, "vtkActor"))
  {
    bool tempr = (ap.IsBound() ?
      op->ReplaceShaderValues(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkGLSLModPixelDebugger::ReplaceShaderValues(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  vtkOpenGLRenderer *temp0 = nullptr;
  vtkShaderProgram *temp1 = nullptr;
  vtkAbstractMapper *temp2 = nullptr;
  vtkActor *temp3 = nullptr;
  vtkOpenGLVertexArrayObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderer") &&
      ap.GetVTKObject(temp1, "vtkShaderProgram") &&
      ap.GetVTKObject(temp2, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp3, "vtkActor") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkOpenGLVertexArrayObject")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShaderParameters(temp0, temp1, temp2, temp3, temp4) :
      op->vtkGLSLModPixelDebugger::SetShaderParameters(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModPixelDebugger_IsUpToDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUpToDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModPixelDebugger *op = static_cast<vtkGLSLModPixelDebugger *>(vp);

  vtkOpenGLRenderer *temp0 = nullptr;
  vtkAbstractMapper *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderer") &&
      ap.GetVTKObject(temp1, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsUpToDate(temp0, temp1, temp2) :
      op->vtkGLSLModPixelDebugger::IsUpToDate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLSLModPixelDebugger_Methods[] = {
  {"IsTypeOf", PyvtkGLSLModPixelDebugger_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLSLModPixelDebugger_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLSLModPixelDebugger_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLSLModPixelDebugger\nC++: static vtkGLSLModPixelDebugger *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLSLModPixelDebugger_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLSLModPixelDebugger\nC++: vtkGLSLModPixelDebugger *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLSLModPixelDebugger_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLSLModPixelDebugger_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSubstitutionJSONFileName", PyvtkGLSLModPixelDebugger_SetSubstitutionJSONFileName, METH_VARARGS,
   "SetSubstitutionJSONFileName(self, filename:str) -> None\nC++: void SetSubstitutionJSONFileName(const std::string &filename)\n\nSet this to a json file on your file system. Look inside\nRendering/CellGrid/LiveGLSLDebugSample/ for an example.\n"},
  {"ReplaceShaderValues", PyvtkGLSLModPixelDebugger_ReplaceShaderValues, METH_VARARGS,
   "ReplaceShaderValues(self, renderer:vtkOpenGLRenderer,\n    vertexShader:str, tessControlShader:str, tessEvalShader:str,\n    geometryShader:str, fragmentShader:str,\n    mapper:vtkAbstractMapper, actor:vtkActor) -> bool\nC++: bool ReplaceShaderValues(vtkOpenGLRenderer *renderer,\n    std::string &vertexShader, std::string &tessControlShader,\n    std::string &tessEvalShader, std::string &geometryShader,\n    std::string &fragmentShader, vtkAbstractMapper *mapper,\n    vtkActor *actor) override;\n\nAbstract interfaces to replace shader values and apply parameters\nas uniform values.\n"},
  {"SetShaderParameters", PyvtkGLSLModPixelDebugger_SetShaderParameters, METH_VARARGS,
   "SetShaderParameters(self, renderer:vtkOpenGLRenderer,\n    program:vtkShaderProgram, mapper:vtkAbstractMapper,\n    actor:vtkActor, VAO:vtkOpenGLVertexArrayObject=...) -> bool\nC++: bool SetShaderParameters(vtkOpenGLRenderer *renderer,\n    vtkShaderProgram *program, vtkAbstractMapper *mapper,\n    vtkActor *actor, vtkOpenGLVertexArrayObject *VAO=nullptr)\n    override;\n\n"},
  {"IsUpToDate", PyvtkGLSLModPixelDebugger_IsUpToDate, METH_VARARGS,
   "IsUpToDate(self, renderer:vtkOpenGLRenderer,\n    mapper:vtkAbstractMapper, actor:vtkActor) -> bool\nC++: bool IsUpToDate(vtkOpenGLRenderer *renderer,\n    vtkAbstractMapper *mapper, vtkActor *actor) override;\n\nWhether mod needs to be re-applied. Return true if your mod's\nReplaceShaderValues must be run again. Typically, you'd want to\nperform the shader substitutions again if properties fundamental\nto the shader construction have been modified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGLSLModPixelDebugger_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("substitution_json_file_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGLSLModPixelDebugger_SetSubstitutionJSONFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGLSLModPixelDebugger_SetSubstitutionJSONFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSubstitutionJSONFileName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGLSLModPixelDebugger_Doc =
  "vtkGLSLModPixelDebugger - Allow live pixel debugging by overwriting\ngl_FragData[0] output.\n\n"
  "Superclass: vtkGLSLModifierBase\n\n"
  "This modification significantly simplifies the lives of VTK OpenGL\n"
  "developers, enabling them to debug and adjust GLSL code in real-time\n"
  "while the application is running.\n\n"
  "This eliminates the need to recompile VTK for minor shader code\n"
  "adjustments. Developers can conveniently keep the JSON and associated\n"
  "GLSL files open in a code editor, making changes while a unit test or\n"
  "VTK application is actively running. Ultimately, you can just move\n"
  "your mouse in the render window to witness your modifications taking\n"
  "effect!\n\n"
  "Shader substitutions will need to be defined in a json file. An\n"
  "example is provided in\n"
  "Rendering/CellGrid/LiveGLSLDebugSample/sample.json file. If you've\n"
  "built VTK from source, you may live edit that json file and glsl\n"
  "files under the LiveGLSLDebugSample directory. Here is what it looks\n"
  "like: {\n"
  "  \"Substitutions\": [\n"
  "    {\n"
  "      \"Target\": \"//VTK::Light::Impl\",\n"
  "      \"ShaderType\": \"Fragment\",\n"
  "      \"FileName\": \"normal-debug.glsl\",\n"
  "      \"ReplaceAllOccurrences\": false,\n"
  "      \"FileNameIsAbsolute\": false,\n"
  "      \"Enabled\": false\n"
  "    },\n"
  "    {\n"
  "      \"Target\": \"//VTK::Light::Impl\",\n"
  "      \"ShaderType\": \"Fragment\",\n"
  "      \"FileName\": \"parametric-debug.glsl\",\n"
  "      \"ReplaceAllOccurrences\": false,\n"
  "      \"FileNameIsAbsolute\": false,\n"
  "      \"Enabled\": false\n"
  "    }\n"
  "  ] } In the sample, both substitutions are disabled. Please enable\n"
  "either to view it. Here is detailed information about the keys:\n\n"
  "\\li Substitutions: This is a list of maps that contain information\n"
  "    about a substitution.\n\n"
  "\\li Target: This must be a string of type\n"
  "    \"//VTK::Feature::[Dec,Impl]\".\n"
  "These are found in the shader templates.\n\n"
  "\\li ShaderType: This must be either \"Fragment\" or \"Vertex\" or\n"
  "    \"Geometry\".\n\n"
  "\\li FileName: Path to a file which has glsl code which will be pasted\n"
  "in place of the 'Target'\n"
  "string.\n\n"
  "\\li ReplaceAllOccurrences: Whether to replace all occurrences of\n"
  "    'Target' string with the\n"
  "contents from the 'FileName' file.\n\n"
  "\\li FileNameIsAbsolute: Whether 'FileName' is an absolute path or\n"
  "    relative to the json file.\n\n"
  "\\li Enabled: When enabled is true, the mod will perform the\n"
  "    substitution, otherwise, the\n"
  "substitution is not applied.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLSLModPixelDebugger_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkGLSLModPixelDebugger", // tp_name
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
  PyvtkGLSLModPixelDebugger_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLSLModPixelDebugger_StaticNew()
{
  return vtkGLSLModPixelDebugger::New();
}

PyObject *PyvtkGLSLModPixelDebugger_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLSLModPixelDebugger_Type, PyvtkGLSLModPixelDebugger_Methods,
    "vtkGLSLModPixelDebugger",
 &PyvtkGLSLModPixelDebugger_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGLSLModifierBase_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGLSLModPixelDebugger_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLSLModPixelDebugger(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLSLModPixelDebugger_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLSLModPixelDebugger", o) != 0)
  {
    Py_DECREF(o);
  }

}

