// python wrapper for vtkOpenGLES30PolyDataMapper2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLES30PolyDataMapper2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLES30PolyDataMapper2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLES30PolyDataMapper2D_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper2D_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper2D_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper2D_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLES30PolyDataMapper2D.PrimitiveTypes", // tp_name
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
static PyObject *PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLES30PolyDataMapper2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLES30PolyDataMapper2D *op = static_cast<vtkOpenGLES30PolyDataMapper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLES30PolyDataMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLES30PolyDataMapper2D *tempr = vtkOpenGLES30PolyDataMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLES30PolyDataMapper2D *op = static_cast<vtkOpenGLES30PolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLES30PolyDataMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLES30PolyDataMapper2D::NewInstance());

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
PyvtkOpenGLES30PolyDataMapper2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLES30PolyDataMapper2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLES30PolyDataMapper2D *op = static_cast<vtkOpenGLES30PolyDataMapper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLES30PolyDataMapper2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLES30PolyDataMapper2D *op = static_cast<vtkOpenGLES30PolyDataMapper2D *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLES30PolyDataMapper2D::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLES30PolyDataMapper2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLES30PolyDataMapper2D *op = static_cast<vtkOpenGLES30PolyDataMapper2D *>(vp);

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
      op->vtkOpenGLES30PolyDataMapper2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLES30PolyDataMapper2D_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLES30PolyDataMapper2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLES30PolyDataMapper2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLES30PolyDataMapper2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLES30PolyDataMapper2D\nC++: static vtkOpenGLES30PolyDataMapper2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLES30PolyDataMapper2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLES30PolyDataMapper2D\nC++: vtkOpenGLES30PolyDataMapper2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLES30PolyDataMapper2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLES30PolyDataMapper2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOverlay", PyvtkOpenGLES30PolyDataMapper2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport, actor:vtkActor2D)\n    -> None\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\nActually draw the poly data.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLES30PolyDataMapper2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLES30PolyDataMapper2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLES30PolyDataMapper2D_Doc =
  "vtkOpenGLES30PolyDataMapper2D - 2D PolyData support for OpenGL ES 3.0\n\n"
  "Superclass: vtkOpenGLPolyDataMapper2D\n\n"
  "This mapper provides a GLES 3.0 compatible implementation of the 2D\n"
  "OpenGL polydata mapper. Since GLES30 3.0 lacks geometry shaders and\n"
  "texture buffers, `vtkOpenGLPolyDataMapper2D` will not function\n"
  "correctly when VTK is configured with `VTK_OPENGL_USE_GLES=ON` since\n"
  "that mapper works with GLES30 >= 3.2 or desktop GL 3.2 contexts.\n\n"
  "ote This class replaces the default OpenGL factory override for\n"
  "`vtkOpenGLPolyDataMapper2D` when VTK targets GLES 3.0 contexts with\n"
  "`VTK_OPENGL_USE_GLES=ON`.\n\n"
  "@sa\n"
  "vtkPolyDataMapper2D, vtkOpenGLPolyDataMapper2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLES30PolyDataMapper2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLES30PolyDataMapper2D", // tp_name
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
  PyvtkOpenGLES30PolyDataMapper2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLES30PolyDataMapper2D_StaticNew()
{
  return vtkOpenGLES30PolyDataMapper2D::New();
}

PyObject *PyvtkOpenGLES30PolyDataMapper2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLES30PolyDataMapper2D_Type, PyvtkOpenGLES30PolyDataMapper2D_Methods,
    "vtkOpenGLES30PolyDataMapper2D",
 &PyvtkOpenGLES30PolyDataMapper2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper2D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_Type);
  PyVTKEnum_Add(&PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_Type, "vtkOpenGLES30PolyDataMapper2D.PrimitiveTypes");

  o = (PyObject *)&PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_Type;
  if (PyDict_SetItemString(d, "PrimitiveTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkOpenGLES30PolyDataMapper2D::PrimitiveTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "PrimitiveStart", vtkOpenGLES30PolyDataMapper2D::PrimitiveStart },
        { "PrimitivePoints", vtkOpenGLES30PolyDataMapper2D::PrimitivePoints },
        { "PrimitiveLines", vtkOpenGLES30PolyDataMapper2D::PrimitiveLines },
        { "PrimitiveTris", vtkOpenGLES30PolyDataMapper2D::PrimitiveTris },
        { "PrimitiveTriStrips", vtkOpenGLES30PolyDataMapper2D::PrimitiveTriStrips },
        { "PrimitiveEnd", vtkOpenGLES30PolyDataMapper2D::PrimitiveEnd },
      };

    o = PyvtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLES30PolyDataMapper2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLES30PolyDataMapper2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLES30PolyDataMapper2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLES30PolyDataMapper2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

