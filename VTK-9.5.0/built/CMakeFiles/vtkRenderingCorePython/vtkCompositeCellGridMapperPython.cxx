// python wrapper for vtkCompositeCellGridMapper
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
#include "vtkCompositeCellGridMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCompositeCellGridMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCompositeCellGridMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static PyObject *
PyvtkCompositeCellGridMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeCellGridMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeCellGridMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeCellGridMapper *tempr = vtkCompositeCellGridMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeCellGridMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeCellGridMapper::NewInstance());

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
PyvtkCompositeCellGridMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeCellGridMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeCellGridMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkCompositeCellGridMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCompositeCellGridMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeCellGridMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::GetBounds(temp0);
    }

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
PyvtkCompositeCellGridMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCompositeCellGridMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkCompositeCellGridMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkCompositeCellGridMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

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
      op->vtkCompositeCellGridMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkCompositeCellGridMapper::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_RecursiveHasTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecursiveHasTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RecursiveHasTranslucentGeometry(temp0, temp1) :
      op->vtkCompositeCellGridMapper::RecursiveHasTranslucentGeometry(temp0, temp1));

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
PyvtkCompositeCellGridMapper_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCompositeCellGridMapper::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetProcessIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    if (ap.IsBound())
    {
      op->SetProcessIdAttributeName(*temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetProcessIdAttributeName(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetProcessIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetProcessIdAttributeName() :
      op->vtkCompositeCellGridMapper::GetProcessIdAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetCompositeIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIdAttributeName(*temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetCompositeIdAttributeName(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetCompositeIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetCompositeIdAttributeName() :
      op->vtkCompositeCellGridMapper::GetCompositeIdAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetPointIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    if (ap.IsBound())
    {
      op->SetPointIdAttributeName(*temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetPointIdAttributeName(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetPointIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetPointIdAttributeName() :
      op->vtkCompositeCellGridMapper::GetPointIdAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetCellIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    if (ap.IsBound())
    {
      op->SetCellIdAttributeName(*temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetCellIdAttributeName(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetCellIdAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetCellIdAttributeName() :
      op->vtkCompositeCellGridMapper::GetCellIdAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetProcessIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetCompositeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetPointIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetCellIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositeCellGridMapper::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeDataDisplayAttributes(temp0);
    }
    else
    {
      op->vtkCompositeCellGridMapper::SetCompositeDataDisplayAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeCellGridMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCellGridMapper *op = static_cast<vtkCompositeCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCompositeCellGridMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeCellGridMapper_Methods[] = {
  {"IsTypeOf", PyvtkCompositeCellGridMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeCellGridMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeCellGridMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositeCellGridMapper\nC++: static vtkCompositeCellGridMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeCellGridMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeCellGridMapper\nC++: vtkCompositeCellGridMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeCellGridMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeCellGridMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkCompositeCellGridMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, a:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *a) override;\n\nStandard method for rendering a mapper. This method will be\ncalled by the actor.\n"},
  {"GetBounds", PyvtkCompositeCellGridMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nStandard vtkProp method to get 3D bounds of a 3D prop\n"},
  {"ReleaseGraphicsResources", PyvtkCompositeCellGridMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease the underlying resources associated with this mapper\n"},
  {"HasOpaqueGeometry", PyvtkCompositeCellGridMapper_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> bool\nC++: bool HasOpaqueGeometry() override;\n\nSome introspection on the type of data the mapper will render\nused by props to determine if they should invoke the mapper on a\nspecific rendering pass.\n"},
  {"RecursiveHasTranslucentGeometry", PyvtkCompositeCellGridMapper_RecursiveHasTranslucentGeometry, METH_VARARGS,
   "RecursiveHasTranslucentGeometry(self, dobj:vtkDataObject,\n    flat_index:int) -> bool\nC++: bool RecursiveHasTranslucentGeometry(vtkDataObject *dobj,\n    unsigned int &flat_index)\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCompositeCellGridMapper_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> bool\nC++: bool HasTranslucentPolygonalGeometry() override;\n\n"},
  {"SetProcessIdAttributeName", PyvtkCompositeCellGridMapper_SetProcessIdAttributeName, METH_VARARGS,
   "SetProcessIdAttributeName(self, _arg:vtkStringToken) -> None\nC++: virtual void SetProcessIdAttributeName(vtkStringToken _arg)\n\nSet/get the name of the process ID attribute used during\nselection.\n"},
  {"GetProcessIdAttributeName", PyvtkCompositeCellGridMapper_GetProcessIdAttributeName, METH_VARARGS,
   "GetProcessIdAttributeName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetProcessIdAttributeName()\n\n"},
  {"SetCompositeIdAttributeName", PyvtkCompositeCellGridMapper_SetCompositeIdAttributeName, METH_VARARGS,
   "SetCompositeIdAttributeName(self, _arg:vtkStringToken) -> None\nC++: virtual void SetCompositeIdAttributeName(vtkStringToken _arg)\n\nSet/get the name of the composite ID attribute used during\nselection.\n"},
  {"GetCompositeIdAttributeName", PyvtkCompositeCellGridMapper_GetCompositeIdAttributeName, METH_VARARGS,
   "GetCompositeIdAttributeName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetCompositeIdAttributeName()\n\n"},
  {"SetPointIdAttributeName", PyvtkCompositeCellGridMapper_SetPointIdAttributeName, METH_VARARGS,
   "SetPointIdAttributeName(self, _arg:vtkStringToken) -> None\nC++: virtual void SetPointIdAttributeName(vtkStringToken _arg)\n\nSet/get the name of the point ID attribute used during selection.\n"},
  {"GetPointIdAttributeName", PyvtkCompositeCellGridMapper_GetPointIdAttributeName, METH_VARARGS,
   "GetPointIdAttributeName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetPointIdAttributeName()\n\n"},
  {"SetCellIdAttributeName", PyvtkCompositeCellGridMapper_SetCellIdAttributeName, METH_VARARGS,
   "SetCellIdAttributeName(self, _arg:vtkStringToken) -> None\nC++: virtual void SetCellIdAttributeName(vtkStringToken _arg)\n\nSet/get the name of the cell ID attribute used during selection.\n"},
  {"GetCellIdAttributeName", PyvtkCompositeCellGridMapper_GetCellIdAttributeName, METH_VARARGS,
   "GetCellIdAttributeName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetCellIdAttributeName()\n\n"},
  {"SetProcessIdArrayName", PyvtkCompositeCellGridMapper_SetProcessIdArrayName, METH_VARARGS,
   "SetProcessIdArrayName(self, __a:str) -> None\nC++: void SetProcessIdArrayName(const char *)\n\nFIXME: These are temporary. They exist to test what is needed\n       to use the CompositeCellGridMapper as a drop-in\nreplacement\n       for the CompositePolyDataMapper2 inside ParaView's\n       GeometryRepresentation.\n"},
  {"SetCompositeIdArrayName", PyvtkCompositeCellGridMapper_SetCompositeIdArrayName, METH_VARARGS,
   "SetCompositeIdArrayName(self, __a:str) -> None\nC++: void SetCompositeIdArrayName(const char *)\n\n"},
  {"SetPointIdArrayName", PyvtkCompositeCellGridMapper_SetPointIdArrayName, METH_VARARGS,
   "SetPointIdArrayName(self, __a:str) -> None\nC++: void SetPointIdArrayName(const char *)\n\n"},
  {"SetCellIdArrayName", PyvtkCompositeCellGridMapper_SetCellIdArrayName, METH_VARARGS,
   "SetCellIdArrayName(self, __a:str) -> None\nC++: void SetCellIdArrayName(const char *)\n\n"},
  {"GetCompositeDataDisplayAttributes", PyvtkCompositeCellGridMapper_GetCompositeDataDisplayAttributes, METH_VARARGS,
   "GetCompositeDataDisplayAttributes(self)\n    -> vtkCompositeDataDisplayAttributes\nC++: virtual vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\nSet/get a data structure that can be used to control per-object\nvisibility, opacity, and pickability.\n\nThese methods exist for compatibility with ParaView but may be\nreplaced in the future with a more flexible system that allows\nmore control using CSS-style selectors and properties.\n\nNote that CompositeDataDisplayAttributes is null by default.\n"},
  {"SetCompositeDataDisplayAttributes", PyvtkCompositeCellGridMapper_SetCompositeDataDisplayAttributes, METH_VARARGS,
   "SetCompositeDataDisplayAttributes(self,\n    __a:vtkCompositeDataDisplayAttributes) -> None\nC++: virtual void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *)\n\n"},
  {"GetMTime", PyvtkCompositeCellGridMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nAccount for mtime of vtkCompositeDataDisplayAttributes\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCompositeCellGridMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("process_id_attribute_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetProcessIdAttributeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetProcessIdAttributeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetProcessIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("composite_id_attribute_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetCompositeIdAttributeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetCompositeIdAttributeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCompositeIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_id_attribute_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetPointIdAttributeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetPointIdAttributeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPointIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_id_attribute_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetCellIdAttributeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetCellIdAttributeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCellIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("process_id_array_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetProcessIdArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetProcessIdArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetProcessIdArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("composite_id_array_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetCompositeIdArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetCompositeIdArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCompositeIdArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_id_array_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetPointIdArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetPointIdArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPointIdArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_id_array_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetCellIdArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetCellIdArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCellIdArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("composite_data_display_attributes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetCompositeDataDisplayAttributes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeCellGridMapper_SetCompositeDataDisplayAttributes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeCellGridMapper_SetCompositeDataDisplayAttributes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCompositeDataDisplayAttributes/SetCompositeDataDisplayAttributes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("process_id_attribute_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetProcessIdAttributeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetProcessIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("composite_id_attribute_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetCompositeIdAttributeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCompositeIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_id_attribute_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetPointIdAttributeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_id_attribute_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetCellIdAttributeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellIdAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeCellGridMapper_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCompositeCellGridMapper_Doc =
  "vtkCompositeCellGridMapper - a class that renders hierarchical\ncell-grid data\n\n"
  "Superclass: vtkMapper\n\n"
  "This class uses a vtkCellGridMapper to render input data which may be\n"
  "hierarchical. The input to this mapper may be either vtkCellGrid or a\n"
  "vtkCompositeDataSet built from cell-grids. If something other than\n"
  "vtkCellGrid is encountered, an error message will be produced.\n"
  "@sa\n"
  "vtkCellGridMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeCellGridMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCompositeCellGridMapper", // tp_name
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
  PyvtkCompositeCellGridMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeCellGridMapper_StaticNew()
{
  return vtkCompositeCellGridMapper::New();
}

PyObject *PyvtkCompositeCellGridMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeCellGridMapper_Type, PyvtkCompositeCellGridMapper_Methods,
    "vtkCompositeCellGridMapper",
 &PyvtkCompositeCellGridMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCompositeCellGridMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeCellGridMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeCellGridMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeCellGridMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

