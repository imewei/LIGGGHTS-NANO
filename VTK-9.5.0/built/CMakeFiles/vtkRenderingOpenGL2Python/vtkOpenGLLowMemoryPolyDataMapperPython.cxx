// python wrapper for vtkOpenGLLowMemoryPolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLLowMemoryPolyDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLLowMemoryPolyDataMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLLowMemoryPolyDataMapper_ClassNew(); }


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLLowMemoryPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLLowMemoryPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLLowMemoryPolyDataMapper *tempr = vtkOpenGLLowMemoryPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLLowMemoryPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLLowMemoryPolyDataMapper::NewInstance());

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
PyvtkOpenGLLowMemoryPolyDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLLowMemoryPolyDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLLowMemoryPolyDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceStart(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RenderPieceStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceDraw(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RenderPieceDraw(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceFinish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceFinish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceFinish(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RenderPieceFinish(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

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
      op->vtkOpenGLLowMemoryPolyDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_GetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPopulateSelectionSettings() :
      op->vtkOpenGLLowMemoryPolyDataMapper::GetPopulateSelectionSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_SetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPopulateSelectionSettings(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::SetPopulateSelectionSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVBOShiftScaleMethod(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkOpenGLLowMemoryPolyDataMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_ResetModsToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetModsToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetModsToDefault();
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::ResetModsToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_AddMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddMod(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::AddMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_AddMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->AddMods(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::AddMods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RemoveMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveMod(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RemoveMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RemoveAllMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMods();
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RemoveAllMods();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertexAttributeMapping(temp0);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RemoveVertexAttributeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVertexAttributeMappings();
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::RemoveAllVertexAttributeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLLowMemoryPolyDataMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLowMemoryPolyDataMapper *op = static_cast<vtkOpenGLLowMemoryPolyDataMapper *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  vtkProp *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLLowMemoryPolyDataMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLLowMemoryPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLLowMemoryPolyDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLLowMemoryPolyDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLLowMemoryPolyDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLLowMemoryPolyDataMapper\nC++: static vtkOpenGLLowMemoryPolyDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLLowMemoryPolyDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLLowMemoryPolyDataMapper\nC++: vtkOpenGLLowMemoryPolyDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLLowMemoryPolyDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLLowMemoryPolyDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkOpenGLLowMemoryPolyDataMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nMake a shallow copy of this mapper.\n"},
  {"RenderPiece", PyvtkOpenGLLowMemoryPolyDataMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, renderer:vtkRenderer, actor:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *renderer, vtkActor *actor)\n    override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceStart", PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceStart, METH_VARARGS,
   "RenderPieceStart(self, renderer:vtkRenderer, actor:vtkActor)\n    -> None\nC++: virtual void RenderPieceStart(vtkRenderer *renderer,\n    vtkActor *actor)\n\n"},
  {"RenderPieceDraw", PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceDraw, METH_VARARGS,
   "RenderPieceDraw(self, renderer:vtkRenderer, actor:vtkActor)\n    -> None\nC++: virtual void RenderPieceDraw(vtkRenderer *renderer,\n    vtkActor *actor)\n\n"},
  {"RenderPieceFinish", PyvtkOpenGLLowMemoryPolyDataMapper_RenderPieceFinish, METH_VARARGS,
   "RenderPieceFinish(self, renderer:vtkRenderer, actor:vtkActor)\n    -> None\nC++: virtual void RenderPieceFinish(vtkRenderer *renderer,\n    vtkActor *actor)\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLLowMemoryPolyDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources associated with the window.\n"},
  {"GetPopulateSelectionSettings", PyvtkOpenGLLowMemoryPolyDataMapper_GetPopulateSelectionSettings, METH_VARARGS,
   "GetPopulateSelectionSettings(self) -> bool\nC++: virtual bool GetPopulateSelectionSettings()\n\n"},
  {"SetPopulateSelectionSettings", PyvtkOpenGLLowMemoryPolyDataMapper_SetPopulateSelectionSettings, METH_VARARGS,
   "SetPopulateSelectionSettings(self, v:bool) -> None\nC++: void SetPopulateSelectionSettings(bool v)\n\n"},
  {"SetVBOShiftScaleMethod", PyvtkOpenGLLowMemoryPolyDataMapper_SetVBOShiftScaleMethod, METH_VARARGS,
   "SetVBOShiftScaleMethod(self, method:int) -> None\nC++: void SetVBOShiftScaleMethod(int method) override;\n\nA convenience method for enabling/disabling\nthe VBO's shift+scale transform.\n"},
  {"GetSupportsSelection", PyvtkOpenGLLowMemoryPolyDataMapper_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"ResetModsToDefault", PyvtkOpenGLLowMemoryPolyDataMapper_ResetModsToDefault, METH_VARARGS,
   "ResetModsToDefault(self) -> None\nC++: virtual void ResetModsToDefault()\n\nIf you removed all mods, call this to go back to default setting.\n"},
  {"AddMod", PyvtkOpenGLLowMemoryPolyDataMapper_AddMod, METH_VARARGS,
   "AddMod(self, className:str) -> None\nC++: void AddMod(const std::string &className)\n\n"},
  {"AddMods", PyvtkOpenGLLowMemoryPolyDataMapper_AddMods, METH_VARARGS,
   "AddMods(self, classNames:(str, ...)) -> None\nC++: void AddMods(const std::vector<std::string> &classNames)\n\n"},
  {"RemoveMod", PyvtkOpenGLLowMemoryPolyDataMapper_RemoveMod, METH_VARARGS,
   "RemoveMod(self, className:str) -> None\nC++: void RemoveMod(const std::string &className)\n\n"},
  {"RemoveAllMods", PyvtkOpenGLLowMemoryPolyDataMapper_RemoveAllMods, METH_VARARGS,
   "RemoveAllMods(self) -> None\nC++: void RemoveAllMods()\n\n"},
  {"MapDataArrayToVertexAttribute", PyvtkOpenGLLowMemoryPolyDataMapper_MapDataArrayToVertexAttribute, METH_VARARGS,
   "MapDataArrayToVertexAttribute(self, vertexAttributeName:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1) override;\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed.\n"},
  {"MapDataArrayToMultiTextureAttribute", PyvtkOpenGLLowMemoryPolyDataMapper_MapDataArrayToMultiTextureAttribute, METH_VARARGS,
   "MapDataArrayToMultiTextureAttribute(self, tname:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: void MapDataArrayToMultiTextureAttribute(const char *tname,\n    const char *dataArrayName, int fieldAssociation,\n    int componentno=-1) override;\n\n"},
  {"RemoveVertexAttributeMapping", PyvtkOpenGLLowMemoryPolyDataMapper_RemoveVertexAttributeMapping, METH_VARARGS,
   "RemoveVertexAttributeMapping(self, vertexAttributeName:str)\n    -> None\nC++: void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName) override;\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllVertexAttributeMappings", PyvtkOpenGLLowMemoryPolyDataMapper_RemoveAllVertexAttributeMappings, METH_VARARGS,
   "RemoveAllVertexAttributeMappings(self) -> None\nC++: void RemoveAllVertexAttributeMappings() override;\n\nRemove all vertex attributes.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkOpenGLLowMemoryPolyDataMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLLowMemoryPolyDataMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("populate_selection_settings"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLLowMemoryPolyDataMapper_GetPopulateSelectionSettings(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLLowMemoryPolyDataMapper_SetPopulateSelectionSettings(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLLowMemoryPolyDataMapper_SetPopulateSelectionSettings(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPopulateSelectionSettings/SetPopulateSelectionSettings\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vbo_shift_scale_method"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLLowMemoryPolyDataMapper_SetVBOShiftScaleMethod(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLLowMemoryPolyDataMapper_SetVBOShiftScaleMethod(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetVBOShiftScaleMethod\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("supports_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLLowMemoryPolyDataMapper_GetSupportsSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSupportsSelection\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLLowMemoryPolyDataMapper_Doc =
  "vtkOpenGLLowMemoryPolyDataMapper - PolyDataMapper using OpenGL to\nrender surface meshes.\n\n"
  "Superclass: vtkPolyDataMapper\n\n"
  "This mapper targets webassembly, mobile and other platforms where\n"
  "memory is scarce and geometry shaders are unavailable or inefficient.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLLowMemoryPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLLowMemoryPolyDataMapper", // tp_name
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
  PyvtkOpenGLLowMemoryPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLLowMemoryPolyDataMapper_StaticNew()
{
  return vtkOpenGLLowMemoryPolyDataMapper::New();
}

PyObject *PyvtkOpenGLLowMemoryPolyDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLLowMemoryPolyDataMapper_Type, PyvtkOpenGLLowMemoryPolyDataMapper_Methods,
    "vtkOpenGLLowMemoryPolyDataMapper",
 &PyvtkOpenGLLowMemoryPolyDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataMapper");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLLowMemoryPolyDataMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLLowMemoryPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLLowMemoryPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLLowMemoryPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

