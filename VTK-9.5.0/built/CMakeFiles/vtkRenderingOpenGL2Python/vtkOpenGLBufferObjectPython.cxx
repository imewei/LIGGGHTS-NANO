// python wrapper for vtkOpenGLBufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLBufferObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLBufferObject(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLBufferObject_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLBufferObject_ObjectType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLBufferObject.ObjectType", // tp_name
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
static PyObject *PyvtkOpenGLBufferObject_ObjectType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLBufferObject_ObjectType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLBufferObject_ObjectUsage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLBufferObject.ObjectUsage", // tp_name
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
static PyObject *PyvtkOpenGLBufferObject_ObjectUsage_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLBufferObject_ObjectUsage_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLBufferObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLBufferObject *tempr = vtkOpenGLBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLBufferObject::NewInstance());

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
PyvtkOpenGLBufferObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLBufferObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLBufferObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLBufferObject::ObjectType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkOpenGLBufferObject::GetType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLBufferObject_ObjectType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  typedef vtkOpenGLBufferObject::ObjectType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLBufferObject.ObjectType"))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkOpenGLBufferObject::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLBufferObject::ObjectUsage tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetUsage() :
      op->vtkOpenGLBufferObject::GetUsage());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLBufferObject_ObjectUsage_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_SetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  typedef vtkOpenGLBufferObject::ObjectUsage temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLBufferObject.ObjectUsage"))
  {
    if (ap.IsBound())
    {
      op->SetUsage(temp0);
    }
    else
    {
      op->vtkOpenGLBufferObject::SetUsage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkOpenGLBufferObject::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_IsReady(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsReady");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsReady() :
      op->vtkOpenGLBufferObject::IsReady());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_FlagBufferAsDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlagBufferAsDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlagBufferAsDirty();
    }
    else
    {
      op->vtkOpenGLBufferObject::FlagBufferAsDirty();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GenerateBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  typedef vtkOpenGLBufferObject::ObjectType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLBufferObject.ObjectType"))
  {
    bool tempr = (ap.IsBound() ?
      op->GenerateBuffer(temp0) :
      op->vtkOpenGLBufferObject::GenerateBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  size_t temp0;
  typedef vtkOpenGLBufferObject::ObjectType temp1_type;
  temp1_type temp1;
  typedef vtkOpenGLBufferObject::ObjectUsage temp2_type;
  temp2_type temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkOpenGLBufferObject.ObjectType") &&
      ap.GetEnumValue(temp2, "vtkOpenGLBufferObject.ObjectUsage"))
  {
    bool tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1, temp2) :
      op->vtkOpenGLBufferObject::Allocate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkOpenGLBufferObject::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Bind() :
      op->vtkOpenGLBufferObject::Bind());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_BindShaderStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindShaderStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->BindShaderStorage(temp0) :
      op->vtkOpenGLBufferObject::BindShaderStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_Release(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Release");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Release() :
      op->vtkOpenGLBufferObject::Release());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLBufferObject::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBufferObject_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBufferObject *op = static_cast<vtkOpenGLBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkOpenGLBufferObject::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLBufferObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLBufferObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLBufferObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLBufferObject\nC++: static vtkOpenGLBufferObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLBufferObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLBufferObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLBufferObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetType", PyvtkOpenGLBufferObject_GetType, METH_VARARGS,
   "GetType(self) -> ObjectType\nC++: ObjectType GetType()\n\nGet the type of the buffer object.\n"},
  {"SetType", PyvtkOpenGLBufferObject_SetType, METH_VARARGS,
   "SetType(self, value:ObjectType) -> None\nC++: void SetType(ObjectType value)\n\nSet the type of the buffer object.\n"},
  {"GetUsage", PyvtkOpenGLBufferObject_GetUsage, METH_VARARGS,
   "GetUsage(self) -> ObjectUsage\nC++: ObjectUsage GetUsage()\n\nGet the usage of the buffer object.\n"},
  {"SetUsage", PyvtkOpenGLBufferObject_SetUsage, METH_VARARGS,
   "SetUsage(self, value:ObjectUsage) -> None\nC++: void SetUsage(ObjectUsage value)\n\nSet the usage of the buffer object.\n"},
  {"GetHandle", PyvtkOpenGLBufferObject_GetHandle, METH_VARARGS,
   "GetHandle(self) -> int\nC++: int GetHandle()\n\nGet the handle of the buffer object.\n"},
  {"IsReady", PyvtkOpenGLBufferObject_IsReady, METH_VARARGS,
   "IsReady(self) -> bool\nC++: bool IsReady()\n\nDetermine if the buffer object is ready to be used.\n"},
  {"FlagBufferAsDirty", PyvtkOpenGLBufferObject_FlagBufferAsDirty, METH_VARARGS,
   "FlagBufferAsDirty(self) -> None\nC++: void FlagBufferAsDirty()\n\nIndicate that the buffer object needs to be re-uploaded.\n"},
  {"GenerateBuffer", PyvtkOpenGLBufferObject_GenerateBuffer, METH_VARARGS,
   "GenerateBuffer(self, type:ObjectType) -> bool\nC++: bool GenerateBuffer(ObjectType type)\n\nGenerate the opengl buffer for this Handle\n"},
  {"Allocate", PyvtkOpenGLBufferObject_Allocate, METH_VARARGS,
   "Allocate(self, size:int, type:ObjectType, usage:ObjectUsage)\n    -> bool\nC++: bool Allocate(size_t size, ObjectType type,\n    ObjectUsage usage)\n\nAllocates a buffer of `type` with `size` bytes.\n"},
  {"GetSize", PyvtkOpenGLBufferObject_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: size_t GetSize()\n\nGet size of the buffer in bytes.\n"},
  {"Bind", PyvtkOpenGLBufferObject_Bind, METH_VARARGS,
   "Bind(self) -> bool\nC++: bool Bind()\n\nBind the buffer object ready for rendering.\n\note Only one ARRAY_BUFFER and one ELEMENT_ARRAY_BUFFER may be\nbound at any time.\n"},
  {"BindShaderStorage", PyvtkOpenGLBufferObject_BindShaderStorage, METH_VARARGS,
   "BindShaderStorage(self, index:int) -> bool\nC++: bool BindShaderStorage(int index)\n\nBind the buffer to a shader storage point.\n"},
  {"Release", PyvtkOpenGLBufferObject_Release, METH_VARARGS,
   "Release(self) -> bool\nC++: bool Release()\n\nRelease the buffer. This should be done after rendering is\ncomplete.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLBufferObject_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources()\n\nRelease any graphics resources that are being consumed by this\nclass.\n"},
  {"GetError", PyvtkOpenGLBufferObject_GetError, METH_VARARGS,
   "GetError(self) -> str\nC++: std::string GetError()\n\nReturn a string describing errors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLBufferObject_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLBufferObject_GetType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLBufferObject_SetType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLBufferObject_SetType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetType/SetType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("usage"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLBufferObject_GetUsage(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLBufferObject_SetUsage(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLBufferObject_SetUsage(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUsage/SetUsage\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLBufferObject_GetHandle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHandle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLBufferObject_GetSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("error"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLBufferObject_GetError(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetError\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLBufferObject_Doc =
  "vtkOpenGLBufferObject - OpenGL buffer object\n\n"
  "Superclass: vtkObject\n\n"
  "OpenGL buffer object to store index, geometry and/or attribute data\n"
  "on the GPU.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLBufferObject", // tp_name
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
  PyvtkOpenGLBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLBufferObject_StaticNew()
{
  return vtkOpenGLBufferObject::New();
}

PyObject *PyvtkOpenGLBufferObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLBufferObject_Type, PyvtkOpenGLBufferObject_Methods,
    "vtkOpenGLBufferObject",
 &PyvtkOpenGLBufferObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLBufferObject_ObjectType_Type);
  PyVTKEnum_Add(&PyvtkOpenGLBufferObject_ObjectType_Type, "vtkOpenGLBufferObject.ObjectType");

  o = (PyObject *)&PyvtkOpenGLBufferObject_ObjectType_Type;
  if (PyDict_SetItemString(d, "ObjectType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkOpenGLBufferObject_ObjectUsage_Type);
  PyVTKEnum_Add(&PyvtkOpenGLBufferObject_ObjectUsage_Type, "vtkOpenGLBufferObject.ObjectUsage");

  o = (PyObject *)&PyvtkOpenGLBufferObject_ObjectUsage_Type;
  if (PyDict_SetItemString(d, "ObjectUsage", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOpenGLBufferObject::ObjectType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ArrayBuffer", vtkOpenGLBufferObject::ArrayBuffer },
        { "ElementArrayBuffer", vtkOpenGLBufferObject::ElementArrayBuffer },
        { "TextureBuffer", vtkOpenGLBufferObject::TextureBuffer },
      };

    o = PyvtkOpenGLBufferObject_ObjectType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkOpenGLBufferObject::ObjectUsage cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "StreamDraw", vtkOpenGLBufferObject::StreamDraw },
        { "StreamRead", vtkOpenGLBufferObject::StreamRead },
        { "StreamCopy", vtkOpenGLBufferObject::StreamCopy },
        { "StaticDraw", vtkOpenGLBufferObject::StaticDraw },
        { "StaticRead", vtkOpenGLBufferObject::StaticRead },
        { "StaticCopy", vtkOpenGLBufferObject::StaticCopy },
        { "DynamicDraw", vtkOpenGLBufferObject::DynamicDraw },
        { "DynamicRead", vtkOpenGLBufferObject::DynamicRead },
        { "DynamicCopy", vtkOpenGLBufferObject::DynamicCopy },
      };

    o = PyvtkOpenGLBufferObject_ObjectUsage_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLBufferObject_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

