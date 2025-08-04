// python wrapper for vtkPolarAxesActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolarAxesActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPolarAxesActor2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPolarAxesActor2D_ClassNew(); }


static PyObject *
PyvtkPolarAxesActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolarAxesActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolarAxesActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolarAxesActor2D *tempr = vtkPolarAxesActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolarAxesActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolarAxesActor2D::NewInstance());

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
PyvtkPolarAxesActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolarAxesActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolarAxesActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPolarAxesActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPolarAxesActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkPolarAxesActor2D::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPolarAxesActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxesTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetAxesTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxesTextProperty() :
      op->vtkPolarAxesActor2D::GetAxesTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetNumberOfAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkPolarAxesActor2D::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetNumberOfAxesTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxesTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAxesTicks(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetNumberOfAxesTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetNumberOfAxesTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxesTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxesTicks() :
      op->vtkPolarAxesActor2D::GetNumberOfAxesTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetAxesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxesLength(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetAxesLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetAxesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxesLength() :
      op->vtkPolarAxesActor2D::GetAxesLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngle() :
      op->vtkPolarAxesActor2D::GetStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetEndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_GetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngle() :
      op->vtkPolarAxesActor2D::GetEndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor2D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetOrigin(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor2D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::SetOrigin(temp0);
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
PyvtkPolarAxesActor2D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolarAxesActor2D_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor2D_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor2D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor2D *op = static_cast<vtkPolarAxesActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkPolarAxesActor2D::GetOrigin(temp0);
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

static PyMethodDef PyvtkPolarAxesActor2D_Methods[] = {
  {"IsTypeOf", PyvtkPolarAxesActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolarAxesActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolarAxesActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolarAxesActor2D\nC++: static vtkPolarAxesActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolarAxesActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolarAxesActor2D\nC++: vtkPolarAxesActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolarAxesActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolarAxesActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOverlay", PyvtkPolarAxesActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nRender the actor as overlay.\n"},
  {"RenderOpaqueGeometry", PyvtkPolarAxesActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nOverridden as a no-op. Needed to avoid warnings/errors from\nSuperclass that expects a Mapper to be defined. It is not the\ncase here as everything is delegated to other internal actors.\nReturn 1.\n"},
  {"HasOpaqueGeometry", PyvtkPolarAxesActor2D_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> int\nC++: vtkTypeBool HasOpaqueGeometry() override;\n\nNo opaque geometry for this actor. Return 0.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPolarAxesActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nNo translucent geometry for this actor. Return 0.\n"},
  {"GetActors2D", PyvtkPolarAxesActor2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, pc:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *pc) override;\n\nAppend the underlying 2D actors to the collection.\n"},
  {"SetAxesTextProperty", PyvtkPolarAxesActor2D_SetAxesTextProperty, METH_VARARGS,
   "SetAxesTextProperty(self, property:vtkTextProperty) -> None\nC++: void SetAxesTextProperty(vtkTextProperty *property)\n\nSet/Get the text property for the axes.\n"},
  {"GetAxesTextProperty", PyvtkPolarAxesActor2D_GetAxesTextProperty, METH_VARARGS,
   "GetAxesTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetAxesTextProperty()\n\n"},
  {"SetNumberOfAxes", PyvtkPolarAxesActor2D_SetNumberOfAxes, METH_VARARGS,
   "SetNumberOfAxes(self, number:int) -> None\nC++: void SetNumberOfAxes(int number)\n\nSet/Get\342\200\257the number of Axes to use. Default is 6.\n"},
  {"GetNumberOfAxes", PyvtkPolarAxesActor2D_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: int GetNumberOfAxes()\n\n"},
  {"SetNumberOfAxesTicks", PyvtkPolarAxesActor2D_SetNumberOfAxesTicks, METH_VARARGS,
   "SetNumberOfAxesTicks(self, number:int) -> None\nC++: void SetNumberOfAxesTicks(int number)\n\nSet/Get the number of ticks for each axis. Default is 6.\n"},
  {"GetNumberOfAxesTicks", PyvtkPolarAxesActor2D_GetNumberOfAxesTicks, METH_VARARGS,
   "GetNumberOfAxesTicks(self) -> int\nC++: int GetNumberOfAxesTicks()\n\n"},
  {"SetAxesLength", PyvtkPolarAxesActor2D_SetAxesLength, METH_VARARGS,
   "SetAxesLength(self, length:float) -> None\nC++: void SetAxesLength(double length)\n\nSet/Get the length of each axis in viewport coordinates. Default\nis 100.\n"},
  {"GetAxesLength", PyvtkPolarAxesActor2D_GetAxesLength, METH_VARARGS,
   "GetAxesLength(self) -> float\nC++: double GetAxesLength()\n\n"},
  {"SetStartAngle", PyvtkPolarAxesActor2D_SetStartAngle, METH_VARARGS,
   "SetStartAngle(self, angle:float) -> None\nC++: void SetStartAngle(double angle)\n\nSet the angle for the main radial axis. Default is 0.\n"},
  {"GetStartAngle", PyvtkPolarAxesActor2D_GetStartAngle, METH_VARARGS,
   "GetStartAngle(self) -> float\nC++: double GetStartAngle()\n\n"},
  {"SetEndAngle", PyvtkPolarAxesActor2D_SetEndAngle, METH_VARARGS,
   "SetEndAngle(self, angle:float) -> None\nC++: void SetEndAngle(double angle)\n\nSet the angle for the last radial axis. Default is 90.\n"},
  {"GetEndAngle", PyvtkPolarAxesActor2D_GetEndAngle, METH_VARARGS,
   "GetEndAngle(self) -> float\nC++: double GetEndAngle()\n\n"},
  {"SetOrigin", PyvtkPolarAxesActor2D_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float) -> None\nC++: void SetOrigin(double x, double y)\nSetOrigin(self, origin:[float, float]) -> None\nC++: void SetOrigin(double origin[2])\n\nSet the origin of the radial measurement, in normalized viewport\ncoordinates. Default is [0.5, 0.5].\n"},
  {"GetOrigin", PyvtkPolarAxesActor2D_GetOrigin, METH_VARARGS,
   "GetOrigin(self, origin:[float, float]) -> None\nC++: void GetOrigin(double origin[2])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPolarAxesActor2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("axes_text_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetAxesTextProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetAxesTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetAxesTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxesTextProperty/SetAxesTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axes_length"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetAxesLength(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetAxesLength(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetAxesLength(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxesLength/SetAxesLength\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("start_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetStartAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetStartAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetStartAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStartAngle/SetStartAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("end_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetEndAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetEndAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetEndAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEndAngle/SetEndAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetNumberOfAxes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetNumberOfAxes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetNumberOfAxes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfAxes/SetNumberOfAxes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes_ticks"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolarAxesActor2D_GetNumberOfAxesTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPolarAxesActor2D_SetNumberOfAxesTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPolarAxesActor2D_SetNumberOfAxesTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfAxesTicks/SetNumberOfAxesTicks\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPolarAxesActor2D_Doc =
  "vtkPolarAxesActor2D - Display polar axes in Viewport 2D space.\n\n"
  "Superclass: vtkActor2D\n\n"
  "The polar axes actor is drawn on overlay. It displays polar\n"
  "coordinates. It is made of concentric axes linked with arcs.\n\n"
  "@warning\n"
  "Please be aware that the axes coordinate values are subject to\n"
  "perspective effects. With perspective projection, the computed\n"
  "distances may look wrong. These effects are not present when parallel\n"
  "projection is enabled. (@sa vtkCamera::ParallelProjectionOn())\n\n"
  "It is the polar counter part of vtkLegendScaleActor.\n"
  "@sa vtkRadialGridActor2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolarAxesActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkPolarAxesActor2D", // tp_name
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
  PyvtkPolarAxesActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolarAxesActor2D_StaticNew()
{
  return vtkPolarAxesActor2D::New();
}

PyObject *PyvtkPolarAxesActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolarAxesActor2D_Type, PyvtkPolarAxesActor2D_Methods,
    "vtkPolarAxesActor2D",
 &PyvtkPolarAxesActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPolarAxesActor2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolarAxesActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolarAxesActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolarAxesActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

