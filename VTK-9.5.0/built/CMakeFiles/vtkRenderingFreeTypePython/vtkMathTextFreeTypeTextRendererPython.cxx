// python wrapper for vtkMathTextFreeTypeTextRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMathTextFreeTypeTextRenderer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMathTextFreeTypeTextRenderer_ClassNew(); }


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMathTextFreeTypeTextRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMathTextFreeTypeTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMathTextFreeTypeTextRenderer *tempr = vtkMathTextFreeTypeTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMathTextFreeTypeTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMathTextFreeTypeTextRenderer::NewInstance());

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
PyvtkMathTextFreeTypeTextRenderer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMathTextFreeTypeTextRenderer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMathTextFreeTypeTextRenderer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_FreeTypeIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeTypeIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeTypeIsSupported() :
      op->vtkMathTextFreeTypeTextRenderer::FreeTypeIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkMathTextFreeTypeTextRenderer::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMathTextFreeTypeTextRenderer_Methods[] = {
  {"IsTypeOf", PyvtkMathTextFreeTypeTextRenderer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMathTextFreeTypeTextRenderer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMathTextFreeTypeTextRenderer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMathTextFreeTypeTextRenderer\nC++: static vtkMathTextFreeTypeTextRenderer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMathTextFreeTypeTextRenderer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMathTextFreeTypeTextRenderer\nC++: vtkMathTextFreeTypeTextRenderer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMathTextFreeTypeTextRenderer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMathTextFreeTypeTextRenderer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FreeTypeIsSupported", PyvtkMathTextFreeTypeTextRenderer_FreeTypeIsSupported, METH_VARARGS,
   "FreeTypeIsSupported(self) -> bool\nC++: bool FreeTypeIsSupported() override;\n\nTest for availability of various backends\n"},
  {"MathTextIsSupported", PyvtkMathTextFreeTypeTextRenderer_MathTextIsSupported, METH_VARARGS,
   "MathTextIsSupported(self) -> bool\nC++: bool MathTextIsSupported() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMathTextFreeTypeTextRenderer_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMathTextFreeTypeTextRenderer_Doc =
  "vtkMathTextFreeTypeTextRenderer - Default implementation of\nvtkTextRenderer.\n\n"
  "Superclass: vtkTextRenderer\n\n"
  "Default implementation of vtkTextRenderer using vtkFreeTypeTools and\n"
  "vtkMathTextUtilities.\n\n"
  "@warning\n"
  "The MathText backend does not currently support UTF16 strings, thus\n"
  "UTF16 strings passed to the MathText renderer will be converted to\n"
  "UTF8.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMathTextFreeTypeTextRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingFreeType.vtkMathTextFreeTypeTextRenderer", // tp_name
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
  PyvtkMathTextFreeTypeTextRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMathTextFreeTypeTextRenderer_StaticNew()
{
  return vtkMathTextFreeTypeTextRenderer::New();
}

PyObject *PyvtkMathTextFreeTypeTextRenderer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMathTextFreeTypeTextRenderer_Type, PyvtkMathTextFreeTypeTextRenderer_Methods,
    "vtkMathTextFreeTypeTextRenderer",
 &PyvtkMathTextFreeTypeTextRenderer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTextRenderer");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMathTextFreeTypeTextRenderer_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMathTextFreeTypeTextRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMathTextFreeTypeTextRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

