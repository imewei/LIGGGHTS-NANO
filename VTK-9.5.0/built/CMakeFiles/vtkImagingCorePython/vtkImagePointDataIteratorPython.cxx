// python wrapper for vtkImagePointDataIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImagePointDataIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImagePointDataIterator(PyObject *dict); }

static PyObject *
PyvtkImagePointDataIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = 0;
  int store1[6];
  int *temp1 = nullptr;
  if (ap.GetArgSize(1) > 0)
  {
    size1 = 6;
    temp1 = store1;
  }
  vtkImageStencilData *temp2 = nullptr;
  vtkAlgorithm *temp3 = nullptr;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkImageStencilData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkAlgorithm")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    op->Initialize(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_NextSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextSpan");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->NextSpan();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_IsInStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInStencil");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsInStencil();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_GetIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetIndex(temp0);

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
PyvtkImagePointDataIterator_GetIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = op->GetIndex();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePointDataIterator_GetIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkImagePointDataIterator_GetIndex_s1(self, args);
    case 0:
      return PyvtkImagePointDataIterator_GetIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIndex");
  return nullptr;
}


static PyObject *
PyvtkImagePointDataIterator_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_SpanEndId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpanEndId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImagePointDataIterator *op = static_cast<vtkImagePointDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->SpanEndId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePointDataIterator_GetVoidPointer_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVoidPointer");

  vtkImageData *temp0 = nullptr;
  long long temp1 = 0;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    void  *tempr = vtkImagePointDataIterator::GetVoidPointer(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePointDataIterator_GetVoidPointer_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVoidPointer");

  vtkDataArray *temp0 = nullptr;
  long long temp1 = 0;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    void  *tempr = vtkImagePointDataIterator::GetVoidPointer(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImagePointDataIterator_GetVoidPointer_Methods[] = {
  {"GetVoidPointer", PyvtkImagePointDataIterator_GetVoidPointer_s1, METH_VARARGS | METH_STATIC,
   "V|kP *vtkImageData *i"},
  {"GetVoidPointer", PyvtkImagePointDataIterator_GetVoidPointer_s2, METH_VARARGS | METH_STATIC,
   "V|kP *vtkDataArray *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImagePointDataIterator_GetVoidPointer(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImagePointDataIterator_GetVoidPointer_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVoidPointer");
  return nullptr;
}

static PyMethodDef PyvtkImagePointDataIterator_Methods[] = {
  {"Initialize", PyvtkImagePointDataIterator_Initialize, METH_VARARGS,
   "Initialize(self, image:vtkImageData, extent:(int, int, int, int,\n    int, int)=..., stencil:vtkImageStencilData=...,\n    algorithm:vtkAlgorithm=..., threadId:int=0) -> None\nC++: void Initialize(vtkImageData *image,\n    const int extent[6]=nullptr,\n    vtkImageStencilData *stencil=nullptr,\n    vtkAlgorithm *algorithm=nullptr, int threadId=0)\n\nInitialize an iterator.  See constructor for more details.\n"},
  {"NextSpan", PyvtkImagePointDataIterator_NextSpan, METH_VARARGS,
   "NextSpan(self) -> None\nC++: void NextSpan()\n\nMove the iterator to the beginning of the next span. A span is a\ncontiguous region of the image over which nothing but the point\nId and the X index changes.\n"},
  {"IsAtEnd", PyvtkImagePointDataIterator_IsAtEnd, METH_VARARGS,
   "IsAtEnd(self) -> bool\nC++: bool IsAtEnd()\n\nTest if the iterator has completed iterating over the entire\nextent.\n"},
  {"IsInStencil", PyvtkImagePointDataIterator_IsInStencil, METH_VARARGS,
   "IsInStencil(self) -> bool\nC++: bool IsInStencil()\n\nCheck if the iterator is within the region specified by the\nstencil. This is updated when NextSpan() is called.\n"},
  {"GetIndex", PyvtkImagePointDataIterator_GetIndex, METH_VARARGS,
   "GetIndex(self, result:[int, int, int]) -> None\nC++: void GetIndex(int result[3])\nGetIndex(self) -> (int, int, int)\nC++: const int *GetIndex()\n\nGet the index at the beginning of the current span.\n"},
  {"GetId", PyvtkImagePointDataIterator_GetId, METH_VARARGS,
   "GetId(self) -> int\nC++: vtkIdType GetId()\n\nGet the point Id at the beginning of the current span.\n"},
  {"SpanEndId", PyvtkImagePointDataIterator_SpanEndId, METH_VARARGS,
   "SpanEndId(self) -> int\nC++: vtkIdType SpanEndId()\n\nGet the end of the span.\n"},
  {"GetVoidPointer", PyvtkImagePointDataIterator_GetVoidPointer, METH_VARARGS,
   "GetVoidPointer(image:vtkImageData, i:int=0, pixelIncrement:[int,\n    ...]=...) -> Pointer\nC++: static void *GetVoidPointer(vtkImageData *image,\n    vtkIdType i=0, int *pixelIncrement=nullptr)\nGetVoidPointer(array:vtkDataArray, i:int=0, pixelIncrement:[int,\n    ...]=...) -> Pointer\nC++: static void *GetVoidPointer(vtkDataArray *array,\n    vtkIdType i=0, int *pixelIncrement=nullptr)\n\nGet a void pointer and pixel increment for the given point Id.\nThe pixel increment is the number of scalar components.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImagePointDataIterator_GetSets[] = {
  {
    /*name=*/pystr("index"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImagePointDataIterator_GetIndex(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetIndex\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImagePointDataIterator_GetId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetId\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkImagePointDataIterator_vtkImagePointDataIterator_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointDataIterator");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImagePointDataIterator *op = new vtkImagePointDataIterator();

    result = PyVTKSpecialObject_New("vtkImagePointDataIterator", op);
  }

  return result;
}

static PyObject *
PyvtkImagePointDataIterator_vtkImagePointDataIterator_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointDataIterator");

  vtkImageData *temp0 = nullptr;
  size_t size1 = 0;
  int store1[6];
  int *temp1 = nullptr;
  if (ap.GetArgSize(1) > 0)
  {
    size1 = 6;
    temp1 = store1;
  }
  vtkImageStencilData *temp2 = nullptr;
  vtkAlgorithm *temp3 = nullptr;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkImageStencilData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkAlgorithm")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkImagePointDataIterator *op = new vtkImagePointDataIterator(temp0, temp1, temp2, temp3, temp4);

    result = PyVTKSpecialObject_New("vtkImagePointDataIterator", op);
  }

  return result;
}

static PyObject *
PyvtkImagePointDataIterator_vtkImagePointDataIterator_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImagePointDataIterator");

  vtkImagePointDataIterator *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkImagePointDataIterator"))
  {
    vtkImagePointDataIterator *op = new vtkImagePointDataIterator(*temp0);

    result = PyVTKSpecialObject_New("vtkImagePointDataIterator", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImagePointDataIterator_vtkImagePointDataIterator_Methods[] = {
  {"vtkImagePointDataIterator", PyvtkImagePointDataIterator_vtkImagePointDataIterator_s2, METH_VARARGS,
   "@V|PVVi *vtkImageData *i *vtkImageStencilData *vtkAlgorithm"},
  {"vtkImagePointDataIterator", PyvtkImagePointDataIterator_vtkImagePointDataIterator_s3, METH_VARARGS,
   "@W vtkImagePointDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImagePointDataIterator_vtkImagePointDataIterator(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImagePointDataIterator_vtkImagePointDataIterator_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePointDataIterator_vtkImagePointDataIterator_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
      return PyvtkImagePointDataIterator_vtkImagePointDataIterator_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkImagePointDataIterator");
  return nullptr;
}


static const char *PyvtkImagePointDataIterator_Doc =

  "vtkImagePointDataIterator() -> vtkImagePointDataIterator\nC++: vtkImagePointDataIterator()\nvtkImagePointDataIterator(image:vtkImageData, extent:(int, int, int,\n    int, int, int)=..., stencil:vtkImageStencilData=...,\n    algorithm:vtkAlgorithm=..., threadId:int=0)\n    -> vtkImagePointDataIterator\nC++: vtkImagePointDataIterator(vtkImageData *image,\n    const int extent[6]=nullptr, vtkImageStencilData *stencil=nullptr,\n     vtkAlgorithm *algorithm=nullptr, int threadId=0)\nvtkImagePointDataIterator(__a:vtkImagePointDataIterator)\n    -> vtkImagePointDataIterator\nC++: vtkImagePointDataIterator(const &vtkImagePointDataIterator)\n""\n"
  "vtkImagePointDataIterator - iterate over point data in an image.\n\n"
  "This class will iterate over an image.  For each position, it will\n"
  "provide the (I,J,K) index, the point Id, and if a stencil is\n"
  "supplied, it will report whether the point is inside or outside of\n"
  "the stencil.\n\n"
  "For efficiency, this class iterates over spans rather than points.\n"
  "Each span is one image row or partial row, defined by a start\n"
  "position and a size.  Within a span, only the X index and the point\n"
  "Id will change. The vtkImagePointDataIterator and related iterators\n"
  "are the preferred method of iterating over image data within the VTK\n"
  "image filters.\n"
  "@sa\n"
  "vtkImageData vtkImageStencilData vtkImageProgressIterator\n\n";

static PyObject *
PyvtkImagePointDataIterator_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImagePointDataIterator_vtkImagePointDataIterator(nullptr, args);
}

static void PyvtkImagePointDataIterator_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImagePointDataIterator *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImagePointDataIterator_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImagePointDataIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImagePointDataIterator", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImagePointDataIterator_Delete, // tp_dealloc
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
  PyvtkImagePointDataIterator_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImagePointDataIterator_Doc, // tp_doc
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
  PyvtkImagePointDataIterator_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkImagePointDataIterator_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkImagePointDataIterator(*static_cast<const vtkImagePointDataIterator*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkImagePointDataIterator_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImagePointDataIterator_TypeNew(); }
#define DECLARED_PyvtkImagePointDataIterator_TypeNew
#endif

PyObject *PyvtkImagePointDataIterator_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkImagePointDataIterator_Type,
    PyvtkImagePointDataIterator_Methods,
    PyvtkImagePointDataIterator_GetSets,
    PyvtkImagePointDataIterator_vtkImagePointDataIterator_Methods,
    &PyvtkImagePointDataIterator_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImagePointDataIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImagePointDataIterator_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImagePointDataIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

