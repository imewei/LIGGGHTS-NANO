// python wrapper for vtkMarshalContext
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkMarshalContext.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMarshalContext(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMarshalContext_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkMarshalContext_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMarshalContext::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarshalContext::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMarshalContext *tempr = vtkMarshalContext::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMarshalContext *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarshalContext::NewInstance());

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
PyvtkMarshalContext_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMarshalContext::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMarshalContext::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_KeepAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  std::string temp0;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->KeepAlive(temp0, temp1);
    }
    else
    {
      op->vtkMarshalContext::KeepAlive(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_Retire(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Retire");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  std::string temp0;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Retire(temp0, temp1);
    }
    else
    {
      op->vtkMarshalContext::Retire(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_UnRegisterState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterState(temp0) :
      op->vtkMarshalContext::UnRegisterState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_RegisterObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  vtkObjectBase *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObjectBase") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterObject(temp0, temp1) :
      op->vtkMarshalContext::RegisterObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_UnRegisterObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterObject(temp0) :
      op->vtkMarshalContext::UnRegisterObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_GetObjectAtId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkObjectBase> tempr = (ap.IsBound() ?
      op->GetObjectAtId(temp0) :
      op->vtkMarshalContext::GetObjectAtId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetId(temp0) :
      op->vtkMarshalContext::GetId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_RegisterBlob(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterBlob");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  vtkSmartPointer<vtkTypeUInt8Array> temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTypeUInt8Array") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterBlob(temp0, temp1) :
      op->vtkMarshalContext::RegisterBlob(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_UnRegisterBlob(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterBlob");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterBlob(temp0) :
      op->vtkMarshalContext::UnRegisterBlob(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_GetBlob(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlob");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkTypeUInt8Array> tempr = (ap.IsBound() ?
      op->GetBlob(temp0) :
      op->vtkMarshalContext::GetBlob(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_GetDirectDependencies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectDependencies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<unsigned int> tempr = (ap.IsBound() ?
      op->GetDirectDependencies(temp0) :
      op->vtkMarshalContext::GetDirectDependencies(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_ResetDirectDependencies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDirectDependencies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetDirectDependencies();
    }
    else
    {
      op->vtkMarshalContext::ResetDirectDependencies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_ResetDirectDependenciesForNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDirectDependenciesForNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ResetDirectDependenciesForNode(temp0);
    }
    else
    {
      op->vtkMarshalContext::ResetDirectDependenciesForNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_MakeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->MakeId() :
      op->vtkMarshalContext::MakeId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_PushParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushParent(temp0);
    }
    else
    {
      op->vtkMarshalContext::PushParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarshalContext_PopParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarshalContext *op = static_cast<vtkMarshalContext *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopParent();
    }
    else
    {
      op->vtkMarshalContext::PopParent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMarshalContext_Methods[] = {
  {"IsTypeOf", PyvtkMarshalContext_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMarshalContext_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMarshalContext_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMarshalContext\nC++: static vtkMarshalContext *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMarshalContext_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMarshalContext\nC++: vtkMarshalContext *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMarshalContext_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMarshalContext_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"KeepAlive", PyvtkMarshalContext_KeepAlive, METH_VARARGS,
   "KeepAlive(self, owner:str, objectBase:vtkObjectBase) -> None\nC++: void KeepAlive(const std::string &owner,\n    vtkObjectBase *objectBase)\n\nThis method creates a record of ownership between `owner` and\n`objectBase`.\n"},
  {"Retire", PyvtkMarshalContext_Retire, METH_VARARGS,
   "Retire(self, owner:str, objectBase:vtkObjectBase) -> None\nC++: void Retire(const std::string &owner,\n    vtkObjectBase *objectBase)\n\nRelease the strong reference kept by `owner` to the given\n`objectBase`.\n\nThis method does nothing if the records show that `owner` doesn't\nown `objectBase`.\n"},
  {"UnRegisterState", PyvtkMarshalContext_UnRegisterState, METH_VARARGS,
   "UnRegisterState(self, identifier:int) -> bool\nC++: bool UnRegisterState(vtkTypeUInt32 identifier)\n\nRemoves a `state`. Returns `true` if a `state` exists at\n`identifier` and it was removed, `false` otherwise.\n"},
  {"RegisterObject", PyvtkMarshalContext_RegisterObject, METH_VARARGS,
   "RegisterObject(self, objectBase:vtkObjectBase, identifier:int)\n    -> bool\nC++: bool RegisterObject(vtkObjectBase *objectBase,\n    vtkTypeUInt32 &identifier)\n\nAdd an `objectBase` into the weak object store associated with\n`identifier`. If `identifier` is 0, a new `identifier` will be\ncreated. Returns `true` if the `objectBase` was registered,\n`false` otherwise.\n\note The `objectBase` is successfully registered only if it is\nnon-null.\n"},
  {"UnRegisterObject", PyvtkMarshalContext_UnRegisterObject, METH_VARARGS,
   "UnRegisterObject(self, identifier:int) -> bool\nC++: bool UnRegisterObject(vtkTypeUInt32 identifier)\n\nRemoves an `objectBase` registered at `identifier` from the weak\nobject store. Returns `true` if a `objectBase` exists at\n`identifier` and it was removed, `false` otherwise.\n"},
  {"GetObjectAtId", PyvtkMarshalContext_GetObjectAtId, METH_VARARGS,
   "GetObjectAtId(self, identifier:int) -> vtkObjectBase\nC++: vtkSmartPointer<vtkObjectBase> GetObjectAtId(\n    vtkTypeUInt32 identifier)\n\nFind and get the `objectBase` registered at `identifier`.\n"},
  {"GetId", PyvtkMarshalContext_GetId, METH_VARARGS,
   "GetId(self, objectBase:vtkObjectBase) -> int\nC++: vtkTypeUInt32 GetId(vtkObjectBase *objectBase)\n\nGet the `identifier` associated with `objectBase`.\n"},
  {"RegisterBlob", PyvtkMarshalContext_RegisterBlob, METH_VARARGS,
   "RegisterBlob(self, blob:vtkTypeUInt8Array, hash:str) -> bool\nC++: bool RegisterBlob(vtkSmartPointer<vtkTypeUInt8Array> blob,\n    std::string &hash)\n\nAdd a `blob` into the blob store associated with `hash`. If\n`hash` is an empty string, the contents of `blob` will be hashed\nand the result of the hashing algorithm stored in `hash`. Returns\n`true` if the `blob` was registered, `false` otherwise.\n\note The `blob` is successfully registered only if it is non-null.\nThis method accepts empty blobs.\n"},
  {"UnRegisterBlob", PyvtkMarshalContext_UnRegisterBlob, METH_VARARGS,
   "UnRegisterBlob(self, hash:str) -> bool\nC++: bool UnRegisterBlob(const std::string &hash)\n\nRemoves a `blob` registered at `hash` from the blob store.\nReturns `true` if a `blob` exists at `hash` and it was removed,\n`false` otherwise.\n"},
  {"GetBlob", PyvtkMarshalContext_GetBlob, METH_VARARGS,
   "GetBlob(self, hash:str) -> vtkTypeUInt8Array\nC++: vtkSmartPointer<vtkTypeUInt8Array> GetBlob(\n    const std::string &hash)\n\nFind and get the `blob` registered at `hash`.\n"},
  {"GetDirectDependencies", PyvtkMarshalContext_GetDirectDependencies, METH_VARARGS,
   "GetDirectDependencies(self, identifier:int) -> (int, ...)\nC++: std::vector<vtkTypeUInt32> GetDirectDependencies(\n    vtkTypeUInt32 identifier)\n\nReturn all direct dependencies of the object/state registered at\n`identifier`.\n\note This method doesn't compute the dependencies on demand.\nInstead it relies upon the `vtkSerializer`/`vtkDeserializer`\ncorrectly using the `ScopedParentTracker` API to record the\ngenealogy of object(s)/state(s) serialized/deserialized.\n\nTechnically, it's not a strict genealogy as it is possible to\nhave circular dependencies.\n"},
  {"ResetDirectDependencies", PyvtkMarshalContext_ResetDirectDependencies, METH_VARARGS,
   "ResetDirectDependencies(self) -> None\nC++: void ResetDirectDependencies()\n\nReset the dependency cache.\n"},
  {"ResetDirectDependenciesForNode", PyvtkMarshalContext_ResetDirectDependenciesForNode, METH_VARARGS,
   "ResetDirectDependenciesForNode(self, identifier:int) -> None\nC++: void ResetDirectDependenciesForNode(vtkTypeUInt32 identifier)\n\nReset the dependency cache for the given `identifier`\n"},
  {"MakeId", PyvtkMarshalContext_MakeId, METH_VARARGS,
   "MakeId(self) -> int\nC++: vtkTypeUInt32 MakeId()\n\nMake a new `identifier`.\n"},
  {"PushParent", PyvtkMarshalContext_PushParent, METH_VARARGS,
   "PushParent(self, identifier:int) -> None\nC++: void PushParent(vtkTypeUInt32 identifier)\n\nMake `identifier` the active identifier. All subsequent\n`AddChild(child)` will add `child` into the list of children for\n`identifier` until `PopParent` gets invoked.\n"},
  {"PopParent", PyvtkMarshalContext_PopParent, METH_VARARGS,
   "PopParent(self) -> None\nC++: void PopParent()\n\nAdds the 'active' identifier into the genealogy. It's children\nare populated using the recorded children of the 'active'\n`identifier` using `AddChild` The active parent is reset to the\nprevious `identifier`.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMarshalContext_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMarshalContext_Doc =
  "vtkMarshalContext - Shared context used by `vtkSerializer` and\n`vtkDeserializer`\n\n"
  "Superclass: vtkObject\n\n"
  "This class is capable of tracking dependencies among VTK objects,\n"
  "their states and preventing recursion when the VTK serialization\n"
  "classes are used.\n\n"
  "It also provides centralized storage and tracking of objects in a\n"
  "weak object map, recording ownership of objects using a strong object\n"
  "map, hashing the contents of blobs to minimize data redundancies in\n"
  "the state and finally an API to coordinate the registration and\n"
  "removal of states, objects and blobs.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarshalContext_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkMarshalContext", // tp_name
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
  PyvtkMarshalContext_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMarshalContext_StaticNew()
{
  return vtkMarshalContext::New();
}

PyObject *PyvtkMarshalContext_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMarshalContext_Type, PyvtkMarshalContext_Methods,
    "vtkMarshalContext",
 &PyvtkMarshalContext_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMarshalContext_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarshalContext(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarshalContext_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMarshalContext", o) != 0)
  {
    Py_DECREF(o);
  }

}

