// python wrapper for vtkGLSLModCoincidentTopology
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGLSLModCoincidentTopology.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGLSLModCoincidentTopology(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGLSLModCoincidentTopology_ClassNew(); }

#ifndef DECLARED_PyvtkGLSLModifierBase_ClassNew
extern "C" { PyObject *PyvtkGLSLModifierBase_ClassNew(); }
#define DECLARED_PyvtkGLSLModifierBase_ClassNew
#endif

static PyObject *
PyvtkGLSLModCoincidentTopology_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLSLModCoincidentTopology::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLSLModCoincidentTopology::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLSLModCoincidentTopology *tempr = vtkGLSLModCoincidentTopology::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLSLModCoincidentTopology *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLSLModCoincidentTopology::NewInstance());

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
PyvtkGLSLModCoincidentTopology_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLSLModCoincidentTopology::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLSLModCoincidentTopology::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_ReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

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
      op->vtkGLSLModCoincidentTopology::ReplaceShaderValues(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkGLSLModCoincidentTopology_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

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
      op->vtkGLSLModCoincidentTopology::SetShaderParameters(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLSLModCoincidentTopology_IsUpToDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUpToDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLModCoincidentTopology *op = static_cast<vtkGLSLModCoincidentTopology *>(vp);

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
      op->vtkGLSLModCoincidentTopology::IsUpToDate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLSLModCoincidentTopology_Methods[] = {
  {"IsTypeOf", PyvtkGLSLModCoincidentTopology_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLSLModCoincidentTopology_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLSLModCoincidentTopology_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLSLModCoincidentTopology\nC++: static vtkGLSLModCoincidentTopology *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLSLModCoincidentTopology_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLSLModCoincidentTopology\nC++: vtkGLSLModCoincidentTopology *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLSLModCoincidentTopology_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLSLModCoincidentTopology_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReplaceShaderValues", PyvtkGLSLModCoincidentTopology_ReplaceShaderValues, METH_VARARGS,
   "ReplaceShaderValues(self, renderer:vtkOpenGLRenderer,\n    vertexShader:str, tessControlShader:str, tessEvalShader:str,\n    geometryShader:str, fragmentShader:str,\n    mapper:vtkAbstractMapper, actor:vtkActor) -> bool\nC++: bool ReplaceShaderValues(vtkOpenGLRenderer *renderer,\n    std::string &vertexShader, std::string &tessControlShader,\n    std::string &tessEvalShader, std::string &geometryShader,\n    std::string &fragmentShader, vtkAbstractMapper *mapper,\n    vtkActor *actor) override;\n\nAbstract interfaces to replace shader values and apply parameters\nas uniform values.\n"},
  {"SetShaderParameters", PyvtkGLSLModCoincidentTopology_SetShaderParameters, METH_VARARGS,
   "SetShaderParameters(self, renderer:vtkOpenGLRenderer,\n    program:vtkShaderProgram, mapper:vtkAbstractMapper,\n    actor:vtkActor, VAO:vtkOpenGLVertexArrayObject=...) -> bool\nC++: bool SetShaderParameters(vtkOpenGLRenderer *renderer,\n    vtkShaderProgram *program, vtkAbstractMapper *mapper,\n    vtkActor *actor, vtkOpenGLVertexArrayObject *VAO=nullptr)\n    override;\n\n"},
  {"IsUpToDate", PyvtkGLSLModCoincidentTopology_IsUpToDate, METH_VARARGS,
   "IsUpToDate(self, renderer:vtkOpenGLRenderer,\n    mapper:vtkAbstractMapper, actor:vtkActor) -> bool\nC++: bool IsUpToDate(vtkOpenGLRenderer *renderer,\n    vtkAbstractMapper *mapper, vtkActor *actor) override;\n\nWhether mod needs to be re-applied. Return true if your mod's\nReplaceShaderValues must be run again. Typically, you'd want to\nperform the shader substitutions again if properties fundamental\nto the shader construction have been modified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGLSLModCoincidentTopology_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGLSLModCoincidentTopology_Doc =
  "vtkGLSLModCoincidentTopology - Handle coincident topology\n\n"
  "Superclass: vtkGLSLModifierBase\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLSLModCoincidentTopology_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkGLSLModCoincidentTopology", // tp_name
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
  PyvtkGLSLModCoincidentTopology_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLSLModCoincidentTopology_StaticNew()
{
  return vtkGLSLModCoincidentTopology::New();
}

PyObject *PyvtkGLSLModCoincidentTopology_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLSLModCoincidentTopology_Type, PyvtkGLSLModCoincidentTopology_Methods,
    "vtkGLSLModCoincidentTopology",
 &PyvtkGLSLModCoincidentTopology_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGLSLModifierBase_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGLSLModCoincidentTopology_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLSLModCoincidentTopology(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLSLModCoincidentTopology_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLSLModCoincidentTopology", o) != 0)
  {
    Py_DECREF(o);
  }

}

