// python wrapper for vtkOpenGLVertexArrayObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLVertexArrayObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLVertexArrayObject(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLVertexArrayObject_ClassNew(); }


static PyObject *
PyvtkOpenGLVertexArrayObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLVertexArrayObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVertexArrayObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLVertexArrayObject *tempr = vtkOpenGLVertexArrayObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexArrayObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVertexArrayObject::NewInstance());

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
PyvtkOpenGLVertexArrayObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLVertexArrayObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLVertexArrayObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Bind();
    }
    else
    {
      op->vtkOpenGLVertexArrayObject::Bind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_Release(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Release");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Release();
    }
    else
    {
      op->vtkOpenGLVertexArrayObject::Release();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLVertexArrayObject::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_ShaderProgramChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShaderProgramChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShaderProgramChanged();
    }
    else
    {
      op->vtkOpenGLVertexArrayObject::ShaderProgramChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_AddAttributeArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLBufferObject *temp1 = nullptr;
  std::string temp2;
  int temp3;
  size_t temp4;
  int temp5;
  int temp6;
  bool temp7 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLBufferObject") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAttributeArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLVertexArrayObject::AddAttributeArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexArrayObject_AddAttributeArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLVertexBufferObject *temp1 = nullptr;
  std::string temp2;
  int temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLVertexBufferObject") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAttributeArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLVertexArrayObject::AddAttributeArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexArrayObject_AddAttributeArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkOpenGLVertexArrayObject_AddAttributeArray_s1(self, args);
    case 5:
      return PyvtkOpenGLVertexArrayObject_AddAttributeArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddAttributeArray");
  return nullptr;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_AddAttributeArrayWithDivisor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttributeArrayWithDivisor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLBufferObject *temp1 = nullptr;
  std::string temp2;
  int temp3;
  size_t temp4;
  int temp5;
  int temp6;
  bool temp7 = false;
  int temp8;
  bool temp9 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLBufferObject") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAttributeArrayWithDivisor(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkOpenGLVertexArrayObject::AddAttributeArrayWithDivisor(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_AddAttributeMatrixWithDivisor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttributeMatrixWithDivisor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLBufferObject *temp1 = nullptr;
  std::string temp2;
  int temp3;
  size_t temp4;
  int temp5;
  int temp6;
  bool temp7 = false;
  int temp8;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLBufferObject") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAttributeMatrixWithDivisor(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkOpenGLVertexArrayObject::AddAttributeMatrixWithDivisor(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_RemoveAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveAttributeArray(temp0) :
      op->vtkOpenGLVertexArrayObject::RemoveAttributeArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexArrayObject_SetForceEmulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceEmulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexArrayObject *op = static_cast<vtkOpenGLVertexArrayObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceEmulation(temp0);
    }
    else
    {
      op->vtkOpenGLVertexArrayObject::SetForceEmulation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexArrayObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLVertexArrayObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLVertexArrayObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLVertexArrayObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLVertexArrayObject\nC++: static vtkOpenGLVertexArrayObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLVertexArrayObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLVertexArrayObject\nC++: vtkOpenGLVertexArrayObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLVertexArrayObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLVertexArrayObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Bind", PyvtkOpenGLVertexArrayObject_Bind, METH_VARARGS,
   "Bind(self) -> None\nC++: void Bind()\n\n"},
  {"Release", PyvtkOpenGLVertexArrayObject_Release, METH_VARARGS,
   "Release(self) -> None\nC++: void Release()\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLVertexArrayObject_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources()\n\n"},
  {"ShaderProgramChanged", PyvtkOpenGLVertexArrayObject_ShaderProgramChanged, METH_VARARGS,
   "ShaderProgramChanged(self) -> None\nC++: void ShaderProgramChanged()\n\n"},
  {"AddAttributeArray", PyvtkOpenGLVertexArrayObject_AddAttributeArray, METH_VARARGS,
   "AddAttributeArray(self, program:vtkShaderProgram,\n    buffer:vtkOpenGLBufferObject, name:str, offset:int,\n    stride:int, elementType:int, elementTupleSize:int,\n    normalize:bool) -> bool\nC++: bool AddAttributeArray(vtkShaderProgram *program,\n    vtkOpenGLBufferObject *buffer, const std::string &name,\n    int offset, size_t stride, int elementType,\n    int elementTupleSize, bool normalize)\nAddAttributeArray(self, program:vtkShaderProgram,\n    buffer:vtkOpenGLVertexBufferObject, name:str, offset:int,\n    normalize:bool) -> bool\nC++: bool AddAttributeArray(vtkShaderProgram *program,\n    vtkOpenGLVertexBufferObject *buffer, const std::string &name,\n    int offset, bool normalize)\n\n"},
  {"AddAttributeArrayWithDivisor", PyvtkOpenGLVertexArrayObject_AddAttributeArrayWithDivisor, METH_VARARGS,
   "AddAttributeArrayWithDivisor(self, program:vtkShaderProgram,\n    buffer:vtkOpenGLBufferObject, name:str, offset:int,\n    stride:int, elementType:int, elementTupleSize:int,\n    normalize:bool, divisor:int, isMatrix:bool) -> bool\nC++: bool AddAttributeArrayWithDivisor(vtkShaderProgram *program,\n    vtkOpenGLBufferObject *buffer, const std::string &name,\n    int offset, size_t stride, int elementType,\n    int elementTupleSize, bool normalize, int divisor,\n    bool isMatrix)\n\n"},
  {"AddAttributeMatrixWithDivisor", PyvtkOpenGLVertexArrayObject_AddAttributeMatrixWithDivisor, METH_VARARGS,
   "AddAttributeMatrixWithDivisor(self, program:vtkShaderProgram,\n    buffer:vtkOpenGLBufferObject, name:str, offset:int,\n    stride:int, elementType:int, elementTupleSize:int,\n    normalize:bool, divisor:int, tupleOffset:int) -> bool\nC++: bool AddAttributeMatrixWithDivisor(vtkShaderProgram *program,\n     vtkOpenGLBufferObject *buffer, const std::string &name,\n    int offset, size_t stride, int elementType,\n    int elementTupleSize, bool normalize, int divisor,\n    int tupleOffset)\n\n"},
  {"RemoveAttributeArray", PyvtkOpenGLVertexArrayObject_RemoveAttributeArray, METH_VARARGS,
   "RemoveAttributeArray(self, name:str) -> bool\nC++: bool RemoveAttributeArray(const std::string &name)\n\n"},
  {"SetForceEmulation", PyvtkOpenGLVertexArrayObject_SetForceEmulation, METH_VARARGS,
   "SetForceEmulation(self, val:bool) -> None\nC++: void SetForceEmulation(bool val)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLVertexArrayObject_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("force_emulation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLVertexArrayObject_SetForceEmulation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLVertexArrayObject_SetForceEmulation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetForceEmulation\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLVertexArrayObject_Doc =
  "vtkOpenGLVertexArrayObject - The VertexArrayObject class uses, or\nemulates, vertex array objects.\n\n"
  "Superclass: vtkObject\n\n"
  "These are extremely useful for setup/tear down of vertex attributes,\n"
  "and can offer significant performance benefits when the hardware\n"
  "supports them.\n\n"
  "It should be noted that this object is very lightweight, and it\n"
  "assumes the objects being used are correctly set up. Even without\n"
  "support for VAOs this class caches the array locations, types, etc\n"
  "and avoids repeated look ups. It it bound to a single ShaderProgram\n"
  "object.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLVertexArrayObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLVertexArrayObject", // tp_name
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
  PyvtkOpenGLVertexArrayObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLVertexArrayObject_StaticNew()
{
  return vtkOpenGLVertexArrayObject::New();
}

PyObject *PyvtkOpenGLVertexArrayObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLVertexArrayObject_Type, PyvtkOpenGLVertexArrayObject_Methods,
    "vtkOpenGLVertexArrayObject",
 &PyvtkOpenGLVertexArrayObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLVertexArrayObject_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLVertexArrayObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLVertexArrayObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLVertexArrayObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

