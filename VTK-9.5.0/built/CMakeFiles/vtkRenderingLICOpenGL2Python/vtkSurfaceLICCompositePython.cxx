// python wrapper for vtkSurfaceLICComposite
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceLICComposite.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSurfaceLICComposite(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSurfaceLICComposite_ClassNew(); }


static PyObject *
PyvtkSurfaceLICComposite_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceLICComposite::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICComposite::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceLICComposite *tempr = vtkSurfaceLICComposite::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICComposite *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICComposite::NewInstance());

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
PyvtkSurfaceLICComposite_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceLICComposite::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceLICComposite::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_SetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkSurfaceLICComposite::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrategy() :
      op->vtkSurfaceLICComposite::GetStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetNumberOfCompositeExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompositeExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompositeExtents() :
      op->vtkSurfaceLICComposite::GetNumberOfCompositeExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetGuardExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGuardExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetGuardExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetGuardExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetDisjointGuardExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisjointGuardExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetDisjointGuardExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetDisjointGuardExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetCompositeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetCompositeExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetCompositeExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetDataSetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetDataSetExtent() :
      &op->vtkSurfaceLICComposite::GetDataSetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetWindowExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetWindowExtent() :
      &op->vtkSurfaceLICComposite::GetWindowExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_InitializeCompositeExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeCompositeExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InitializeCompositeExtents(temp0) :
      op->vtkSurfaceLICComposite::InitializeCompositeExtents(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkSurfaceLICComposite::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkSurfaceLICComposite::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_RestoreDefaultCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreDefaultCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreDefaultCommunicator();
    }
    else
    {
      op->vtkSurfaceLICComposite::RestoreDefaultCommunicator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_BuildProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->BuildProgram(temp0) :
      op->vtkSurfaceLICComposite::BuildProgram(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceLICComposite_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceLICComposite_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceLICComposite_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceLICComposite_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceLICComposite\nC++: static vtkSurfaceLICComposite *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceLICComposite_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceLICComposite\nC++: vtkSurfaceLICComposite *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceLICComposite_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceLICComposite_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStrategy", PyvtkSurfaceLICComposite_SetStrategy, METH_VARARGS,
   "SetStrategy(self, val:int) -> None\nC++: void SetStrategy(int val)\n\n"},
  {"GetStrategy", PyvtkSurfaceLICComposite_GetStrategy, METH_VARARGS,
   "GetStrategy(self) -> int\nC++: int GetStrategy()\n\n"},
  {"GetNumberOfCompositeExtents", PyvtkSurfaceLICComposite_GetNumberOfCompositeExtents, METH_VARARGS,
   "GetNumberOfCompositeExtents(self) -> int\nC++: int GetNumberOfCompositeExtents()\n\nGet the number of new extents assigned to this rank after the\ndecomposition.\n"},
  {"GetGuardExtent", PyvtkSurfaceLICComposite_GetGuardExtent, METH_VARARGS,
   "GetGuardExtent(self, i:int=0) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetGuardExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be queried only after the Composite takes place.\n"},
  {"GetDisjointGuardExtent", PyvtkSurfaceLICComposite_GetDisjointGuardExtent, METH_VARARGS,
   "GetDisjointGuardExtent(self, i:int=0) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetDisjointGuardExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be queried only after the Composite takes place.\n"},
  {"GetCompositeExtent", PyvtkSurfaceLICComposite_GetCompositeExtent, METH_VARARGS,
   "GetCompositeExtent(self, i:int=0) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetCompositeExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be queried only after the Composite takes place.\n"},
  {"GetDataSetExtent", PyvtkSurfaceLICComposite_GetDataSetExtent, METH_VARARGS,
   "GetDataSetExtent(self) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetDataSetExtent()\n\nGet the whole dataset extent (all blocks).\n"},
  {"GetWindowExtent", PyvtkSurfaceLICComposite_GetWindowExtent, METH_VARARGS,
   "GetWindowExtent(self) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetWindowExtent()\n\nGet the whole window extent.\n"},
  {"InitializeCompositeExtents", PyvtkSurfaceLICComposite_InitializeCompositeExtents, METH_VARARGS,
   "InitializeCompositeExtents(self, vectors:[float, ...]) -> int\nC++: int InitializeCompositeExtents(float *vectors)\n\nSet up for a serial run, makes the decomp disjoint and adds\nrequisite guard pixles.\n"},
  {"SetContext", PyvtkSurfaceLICComposite_SetContext, METH_VARARGS,
   "SetContext(self, __a:vtkOpenGLRenderWindow) -> None\nC++: virtual void SetContext(vtkOpenGLRenderWindow *)\n\nSet the rendering context. Must set prior to use. Reference is\nnot held, so caller must ensure the renderer is not destroyed\nduring use.\n"},
  {"GetContext", PyvtkSurfaceLICComposite_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkOpenGLRenderWindow\nC++: virtual vtkOpenGLRenderWindow *GetContext()\n\n"},
  {"RestoreDefaultCommunicator", PyvtkSurfaceLICComposite_RestoreDefaultCommunicator, METH_VARARGS,
   "RestoreDefaultCommunicator(self) -> None\nC++: virtual void RestoreDefaultCommunicator()\n\nSet the communicator to the default communicator\n"},
  {"BuildProgram", PyvtkSurfaceLICComposite_BuildProgram, METH_VARARGS,
   "BuildProgram(self, __a:[float, ...]) -> int\nC++: virtual int BuildProgram(float *)\n\nBuild programs to move data to the new decomp In parallel THIS IS\nA COLLECTIVE OPERATION\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSurfaceLICComposite_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("strategy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSurfaceLICComposite_GetStrategy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSurfaceLICComposite_SetStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSurfaceLICComposite_SetStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStrategy/SetStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("context"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSurfaceLICComposite_GetContext(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSurfaceLICComposite_SetContext(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSurfaceLICComposite_SetContext(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContext/SetContext\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_set_extent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSurfaceLICComposite_GetDataSetExtent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataSetExtent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_extent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSurfaceLICComposite_GetWindowExtent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWindowExtent\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSurfaceLICComposite_Doc =
  "vtkSurfaceLICComposite - This class decomposes the image space and\nshuffles image space data onto the new decomposition with the\nnecessary guard cells to prevent artifacts at the decomposition\nboundaries.\n\n"
  "Superclass: vtkObject\n\n"
  "After the image LIC is computed on the new decomposition this class\n"
  "will un-shuffle the computed LIC back onto the original decomposition\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceLICComposite_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkSurfaceLICComposite", // tp_name
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
  PyvtkSurfaceLICComposite_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceLICComposite_StaticNew()
{
  return vtkSurfaceLICComposite::New();
}

PyObject *PyvtkSurfaceLICComposite_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceLICComposite_Type, PyvtkSurfaceLICComposite_Methods,
    "vtkSurfaceLICComposite",
 &PyvtkSurfaceLICComposite_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "COMPOSITE_INPLACE", vtkSurfaceLICComposite::COMPOSITE_INPLACE },
        { "COMPOSITE_INPLACE_DISJOINT", vtkSurfaceLICComposite::COMPOSITE_INPLACE_DISJOINT },
        { "COMPOSITE_BALANCED", vtkSurfaceLICComposite::COMPOSITE_BALANCED },
        { "COMPOSITE_AUTO", vtkSurfaceLICComposite::COMPOSITE_AUTO },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSurfaceLICComposite_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceLICComposite(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceLICComposite_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceLICComposite", o) != 0)
  {
    Py_DECREF(o);
  }

}

