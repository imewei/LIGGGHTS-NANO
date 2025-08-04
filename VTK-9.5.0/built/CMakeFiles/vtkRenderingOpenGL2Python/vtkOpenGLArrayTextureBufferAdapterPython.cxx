// python wrapper for vtkOpenGLArrayTextureBufferAdapter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenGLArrayTextureBufferAdapter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLArrayTextureBufferAdapter(PyObject *dict); }

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_Upload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLArrayTextureBufferAdapter *op = static_cast<vtkOpenGLArrayTextureBufferAdapter *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->Upload(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLArrayTextureBufferAdapter *op = static_cast<vtkOpenGLArrayTextureBufferAdapter *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLArrayTextureBufferAdapter_Methods[] = {
  {"Upload", PyvtkOpenGLArrayTextureBufferAdapter_Upload, METH_VARARGS,
   "Upload(self, renderWindow:vtkOpenGLRenderWindow, force:bool=False)\n     -> None\nC++: void Upload(vtkOpenGLRenderWindow *renderWindow,\n    bool force=false)\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLArrayTextureBufferAdapter_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLArrayTextureBufferAdapter_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLArrayTextureBufferAdapter");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLArrayTextureBufferAdapter *op = new vtkOpenGLArrayTextureBufferAdapter();

    result = PyVTKSpecialObject_New("vtkOpenGLArrayTextureBufferAdapter", op);
  }

  return result;
}

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLArrayTextureBufferAdapter");

  vtkDataArray *temp0 = nullptr;
  bool temp1 = false;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<bool> store2(2*size2);
  bool *temp2 = store2.Data();
  bool *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkOpenGLArrayTextureBufferAdapter *op = new vtkOpenGLArrayTextureBufferAdapter(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    result = PyVTKSpecialObject_New("vtkOpenGLArrayTextureBufferAdapter", op);
  }

  return result;
}

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLArrayTextureBufferAdapter");

  vtkOpenGLArrayTextureBufferAdapter *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkOpenGLArrayTextureBufferAdapter"))
  {
    vtkOpenGLArrayTextureBufferAdapter *op = new vtkOpenGLArrayTextureBufferAdapter(*temp0);

    result = PyVTKSpecialObject_New("vtkOpenGLArrayTextureBufferAdapter", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_Methods[] = {
  {"vtkOpenGLArrayTextureBufferAdapter", PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s3, METH_VARARGS,
   "@W vtkOpenGLArrayTextureBufferAdapter"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s1(self, args);
    case 2:
    case 3:
      return PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s2(self, args);
    case 1:
      return PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkOpenGLArrayTextureBufferAdapter");
  return nullptr;
}


static const char *PyvtkOpenGLArrayTextureBufferAdapter_Doc =

  "vtkOpenGLArrayTextureBufferAdapter()\n    -> vtkOpenGLArrayTextureBufferAdapter\nC++: vtkOpenGLArrayTextureBufferAdapter()\nvtkOpenGLArrayTextureBufferAdapter(array:vtkDataArray, asScalars:bool,\n     integerTexture:[bool, ...]=...)\n    -> vtkOpenGLArrayTextureBufferAdapter\nC++: vtkOpenGLArrayTextureBufferAdapter(vtkDataArray *array,\n    bool asScalars, bool *integerTexture=nullptr)\nvtkOpenGLArrayTextureBufferAdapter(\n    __a:vtkOpenGLArrayTextureBufferAdapter)\n    -> vtkOpenGLArrayTextureBufferAdapter\nC++: vtkOpenGLArrayTextureBufferAdapter(\n    const vtkOpenGLArrayTextureBufferAdapter &)\n""\n"
  "vtkOpenGLArrayTextureBufferAdapter - Interfaces vtkDataArray to an\nOpenGL texture buffer.\n\n"
;

static PyObject *
PyvtkOpenGLArrayTextureBufferAdapter_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter(nullptr, args);
}

static void PyvtkOpenGLArrayTextureBufferAdapter_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOpenGLArrayTextureBufferAdapter *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOpenGLArrayTextureBufferAdapter_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLArrayTextureBufferAdapter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLArrayTextureBufferAdapter", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOpenGLArrayTextureBufferAdapter_Delete, // tp_dealloc
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
  PyvtkOpenGLArrayTextureBufferAdapter_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOpenGLArrayTextureBufferAdapter_Doc, // tp_doc
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
  PyvtkOpenGLArrayTextureBufferAdapter_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkOpenGLArrayTextureBufferAdapter_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkOpenGLArrayTextureBufferAdapter(*static_cast<const vtkOpenGLArrayTextureBufferAdapter*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkOpenGLArrayTextureBufferAdapter_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLArrayTextureBufferAdapter_TypeNew(); }
#define DECLARED_PyvtkOpenGLArrayTextureBufferAdapter_TypeNew
#endif

PyObject *PyvtkOpenGLArrayTextureBufferAdapter_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkOpenGLArrayTextureBufferAdapter_Type,
    PyvtkOpenGLArrayTextureBufferAdapter_Methods,
    PyvtkOpenGLArrayTextureBufferAdapter_GetSets,
    PyvtkOpenGLArrayTextureBufferAdapter_vtkOpenGLArrayTextureBufferAdapter_Methods,
    &PyvtkOpenGLArrayTextureBufferAdapter_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLArrayTextureBufferAdapter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLArrayTextureBufferAdapter_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLArrayTextureBufferAdapter", o) != 0)
  {
    Py_DECREF(o);
  }

}

