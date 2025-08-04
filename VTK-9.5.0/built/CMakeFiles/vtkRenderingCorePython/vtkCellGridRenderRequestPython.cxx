// python wrapper for vtkCellGridRenderRequest
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkCellGridRenderRequest.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridRenderRequest(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridRenderRequest_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridRenderRequest_RenderableGeometry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCellGridRenderRequest.RenderableGeometry", // tp_name
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
static PyObject *PyvtkCellGridRenderRequest_RenderableGeometry_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridRenderRequest_RenderableGeometry_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellGridRenderRequest_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridRenderRequest::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridRenderRequest::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridRenderRequest *tempr = vtkCellGridRenderRequest::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridRenderRequest *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridRenderRequest::NewInstance());

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
PyvtkCellGridRenderRequest_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridRenderRequest::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridRenderRequest::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  vtkCellGridMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGridMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkCellGridRenderRequest::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->SetActor(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkCellGridRenderRequest::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkCellGridRenderRequest::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkCellGridRenderRequest::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetShapesToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDraw() :
      op->vtkCellGridRenderRequest::GetShapesToDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetShapesToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapesToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShapesToDraw(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetShapesToDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetShapesToDrawMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDrawMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDrawMinValue() :
      op->vtkCellGridRenderRequest::GetShapesToDrawMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetShapesToDrawMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDrawMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDrawMaxValue() :
      op->vtkCellGridRenderRequest::GetShapesToDrawMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridRenderRequest::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridRenderRequest::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_GetIsReleasingResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsReleasingResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsReleasingResources() :
      op->vtkCellGridRenderRequest::GetIsReleasingResources());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRenderRequest_SetIsReleasingResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsReleasingResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRenderRequest *op = static_cast<vtkCellGridRenderRequest *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsReleasingResources(temp0);
    }
    else
    {
      op->vtkCellGridRenderRequest::SetIsReleasingResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridRenderRequest_Methods[] = {
  {"IsTypeOf", PyvtkCellGridRenderRequest_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridRenderRequest_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridRenderRequest_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridRenderRequest\nC++: static vtkCellGridRenderRequest *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridRenderRequest_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridRenderRequest\nC++: vtkCellGridRenderRequest *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridRenderRequest_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridRenderRequest_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMapper", PyvtkCellGridRenderRequest_SetMapper, METH_VARARGS,
   "SetMapper(self, mapper:vtkCellGridMapper) -> None\nC++: virtual void SetMapper(vtkCellGridMapper *mapper)\n\nSet/get the mapper which owns this request (so responders can\ninspect its configuration).\n\nNote that the render request does **NOT** increase the reference\ncount of the mapper (thus it does not take ownership). This is\nbecause the request is owned by the mapper and we do not want to\ncreate a reference loop.\n"},
  {"GetMapper", PyvtkCellGridRenderRequest_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkCellGridMapper\nC++: virtual vtkCellGridMapper *GetMapper()\n\n"},
  {"SetActor", PyvtkCellGridRenderRequest_SetActor, METH_VARARGS,
   "SetActor(self, actor:vtkActor) -> None\nC++: virtual void SetActor(vtkActor *actor)\n\nSet/get the actor which responders should use to draw cells.\n\nNote that the render request does **NOT** increase the reference\ncount of the actor (thus it does not take ownership). This is to\navoid creating a reference loop.\n"},
  {"GetActor", PyvtkCellGridRenderRequest_GetActor, METH_VARARGS,
   "GetActor(self) -> vtkActor\nC++: virtual vtkActor *GetActor()\n\n"},
  {"SetRenderer", PyvtkCellGridRenderRequest_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *renderer)\n\nSet/get the renderer responders should use to draw cells.\n\nNote that the render request does **NOT** increase the reference\ncount of the renderer (thus it does not take ownership). This is\nto avoid creating a reference loop.\n"},
  {"GetRenderer", PyvtkCellGridRenderRequest_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetWindow", PyvtkCellGridRenderRequest_SetWindow, METH_VARARGS,
   "SetWindow(self, window:vtkWindow) -> None\nC++: virtual void SetWindow(vtkWindow *window)\n\nSet/get a window (used when IsReleasingResources is true).\n\nNote that the render request does **NOT** increase the reference\ncount of the window (thus it does not take ownership). This is to\navoid creating a reference loop.\n"},
  {"GetWindow", PyvtkCellGridRenderRequest_GetWindow, METH_VARARGS,
   "GetWindow(self) -> vtkWindow\nC++: virtual vtkWindow *GetWindow()\n\n"},
  {"GetShapesToDraw", PyvtkCellGridRenderRequest_GetShapesToDraw, METH_VARARGS,
   "GetShapesToDraw(self) -> str\nC++: virtual char GetShapesToDraw()\n\nSet/get what geometric data to draw for each cell.\n\nThe DEFAULT is currently equivalent to ALL. Note that any\ncombination of RenderableGeometry enumerants is accepted.\n\n\\sa RenderableGeometry\n"},
  {"SetShapesToDraw", PyvtkCellGridRenderRequest_SetShapesToDraw, METH_VARARGS,
   "SetShapesToDraw(self, _arg:str) -> None\nC++: virtual void SetShapesToDraw(char _arg)\n\n"},
  {"GetShapesToDrawMinValue", PyvtkCellGridRenderRequest_GetShapesToDrawMinValue, METH_VARARGS,
   "GetShapesToDrawMinValue(self) -> str\nC++: virtual char GetShapesToDrawMinValue()\n\n"},
  {"GetShapesToDrawMaxValue", PyvtkCellGridRenderRequest_GetShapesToDrawMaxValue, METH_VARARGS,
   "GetShapesToDrawMaxValue(self) -> str\nC++: virtual char GetShapesToDrawMaxValue()\n\n"},
  {"Initialize", PyvtkCellGridRenderRequest_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: bool Initialize() override;\n\nThis is invoked before processing any cell types during a render.\n"},
  {"Finalize", PyvtkCellGridRenderRequest_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: bool Finalize() override;\n\nThis is invoked after processing all cell types during a render.\n"},
  {"GetIsReleasingResources", PyvtkCellGridRenderRequest_GetIsReleasingResources, METH_VARARGS,
   "GetIsReleasingResources(self) -> bool\nC++: virtual bool GetIsReleasingResources()\n\nSet/get whether the request should render (false) or release\nresources (true). The latter should be performed as a separate\nquery after rendering.\n\nNote that after a successful call to Query with\nIsReleasingResources set to true, the Finalize() method will\nreset IsReleasingResources to false, which results in the request\nbeing marked modified.\n"},
  {"SetIsReleasingResources", PyvtkCellGridRenderRequest_SetIsReleasingResources, METH_VARARGS,
   "SetIsReleasingResources(self, _arg:bool) -> None\nC++: virtual void SetIsReleasingResources(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridRenderRequest_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("mapper"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetMapper(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetMapper(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetMapper(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMapper/SetMapper\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("actor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetActor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetActor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetActor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetActor/SetActor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("renderer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetRenderer(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetRenderer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetRenderer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRenderer/SetRenderer\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWindow/SetWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shapes_to_draw"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetShapesToDraw(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetShapesToDraw(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetShapesToDraw(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetShapesToDraw/SetShapesToDraw\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("is_releasing_resources"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRenderRequest_GetIsReleasingResources(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRenderRequest_SetIsReleasingResources(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRenderRequest_SetIsReleasingResources(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIsReleasingResources/SetIsReleasingResources\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridRenderRequest_Doc =
  "vtkCellGridRenderRequest - State used by vtkCellGridMapper during\nrendering.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "This is a vtkCellGridQuery subclass that mappers can use to draw\n"
  "cells into a renderer using an actor and, subsequently, to release\n"
  "resources.\n\n"
  "Note that this request has two modes: it will either instruct\n"
  "responders to draw cells (IsReleasingResources == false) or instruct\n"
  "responders to release OpenGL objects for a particular window (when\n"
  "IsReleasingResources == true). Responders must call\n"
  "GetIsReleasingResources() and only perform one task or the other,\n"
  "depending on the returned value.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridRenderRequest_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCellGridRenderRequest", // tp_name
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
  PyvtkCellGridRenderRequest_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridRenderRequest_StaticNew()
{
  return vtkCellGridRenderRequest::New();
}

PyObject *PyvtkCellGridRenderRequest_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridRenderRequest_Type, PyvtkCellGridRenderRequest_Methods,
    "vtkCellGridRenderRequest",
 &PyvtkCellGridRenderRequest_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellGridQuery");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellGridRenderRequest_RenderableGeometry_Type);
  PyVTKEnum_Add(&PyvtkCellGridRenderRequest_RenderableGeometry_Type, "vtkCellGridRenderRequest.RenderableGeometry");

  o = (PyObject *)&PyvtkCellGridRenderRequest_RenderableGeometry_Type;
  if (PyDict_SetItemString(d, "RenderableGeometry", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkCellGridRenderRequest::RenderableGeometry cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "VERTICES", vtkCellGridRenderRequest::VERTICES },
        { "EDGES", vtkCellGridRenderRequest::EDGES },
        { "FACES", vtkCellGridRenderRequest::FACES },
        { "VOLUMES", vtkCellGridRenderRequest::VOLUMES },
        { "SURFACE_WITH_EDGES", vtkCellGridRenderRequest::SURFACE_WITH_EDGES },
        { "ALL", vtkCellGridRenderRequest::ALL },
      };

    o = PyvtkCellGridRenderRequest_RenderableGeometry_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridRenderRequest_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridRenderRequest(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridRenderRequest_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridRenderRequest", o) != 0)
  {
    Py_DECREF(o);
  }

}

