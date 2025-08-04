// python wrapper for vtkOSOpenGLRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOSOpenGLRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOSOpenGLRenderWindow(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOSOpenGLRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderWindow_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderWindow_ClassNew
#endif

static PyObject *
PyvtkOSOpenGLRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOSOpenGLRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOSOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOSOpenGLRenderWindow *tempr = vtkOSOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOSOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOSOpenGLRenderWindow::NewInstance());

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
PyvtkOSOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOSOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOSOpenGLRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_WindowInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowInitialize();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::WindowInitialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullScreen(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetFullScreen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOSOpenGLRenderWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetSize(temp0);
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
PyvtkOSOpenGLRenderWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkOSOpenGLRenderWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkOSOpenGLRenderWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkOSOpenGLRenderWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkOSOpenGLRenderWindow::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOSOpenGLRenderWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetPosition(temp0);
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
PyvtkOSOpenGLRenderWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkOSOpenGLRenderWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkOSOpenGLRenderWindow_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoCapableWindow(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkOSOpenGLRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetForceMakeCurrent();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetForceMakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkOSOpenGLRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkOSOpenGLRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkOSOpenGLRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowRemap();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::WindowRemap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkOSOpenGLRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkOSOpenGLRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkOSOpenGLRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkOSOpenGLRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkOSOpenGLRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayId(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetDisplayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetParentId(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetParentId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetWindowId(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetWindowId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowId(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetNextWindowId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowName(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetWindowName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkOSOpenGLRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowInfo(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowInfo(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetNextWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOSOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOSOpenGLRenderWindow *op = static_cast<vtkOSOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentInfo(temp0);
    }
    else
    {
      op->vtkOSOpenGLRenderWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOSOpenGLRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkOSOpenGLRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOSOpenGLRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOSOpenGLRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOSOpenGLRenderWindow\nC++: static vtkOSOpenGLRenderWindow *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOSOpenGLRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOSOpenGLRenderWindow\nC++: vtkOSOpenGLRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOSOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOSOpenGLRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Frame", PyvtkOSOpenGLRenderWindow_Frame, METH_VARARGS,
   "Frame(self) -> None\nC++: void Frame() override;\n\nEnd the rendering process and display the image.\n"},
  {"WindowInitialize", PyvtkOSOpenGLRenderWindow_WindowInitialize, METH_VARARGS,
   "WindowInitialize(self) -> None\nC++: virtual void WindowInitialize()\n\nInitialize the window for rendering.\n"},
  {"Initialize", PyvtkOSOpenGLRenderWindow_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {"Finalize", PyvtkOSOpenGLRenderWindow_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\n\n\"Deinitialize\" the rendering window.  This will shutdown all\nsystem-specific resources.  After having called this, it should\nbe possible to destroy a window that was used for a SetWindowId()\ncall without any ill effects.\n"},
  {"SetFullScreen", PyvtkOSOpenGLRenderWindow_SetFullScreen, METH_VARARGS,
   "SetFullScreen(self, __a:int) -> None\nC++: void SetFullScreen(vtkTypeBool) override;\n\nChange the window to fill the entire screen.\n"},
  {"SetSize", PyvtkOSOpenGLRenderWindow_SetSize, METH_VARARGS,
   "SetSize(self, width:int, height:int) -> None\nC++: void SetSize(int width, int height) override;\nSetSize(self, a:[int, int]) -> None\nC++: void SetSize(int a[2]) override;\n\nSet the size of the window in screen coordinates in pixels. This\nresizes the operating system's window and redraws it.\n\nIf the size has changed, this method will fire\nvtkCommand::WindowResizeEvent.\n"},
  {"GetScreenSize", PyvtkOSOpenGLRenderWindow_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> (int, int)\nC++: int *GetScreenSize() override;\n\nGet the current size of the screen in pixels. An HDTV for example\nwould be 1920 x 1080 pixels.\n"},
  {"GetPosition", PyvtkOSOpenGLRenderWindow_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (int, int)\nC++: int *GetPosition() override;\n\nGet the position (x and y) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetPosition", PyvtkOSOpenGLRenderWindow_SetPosition, METH_VARARGS,
   "SetPosition(self, x:int, y:int) -> None\nC++: void SetPosition(int x, int y) override;\nSetPosition(self, a:[int, int]) -> None\nC++: void SetPosition(int a[2]) override;\n\nMove the window to a new position on the display.\n"},
  {"SetStereoCapableWindow", PyvtkOSOpenGLRenderWindow_SetStereoCapableWindow, METH_VARARGS,
   "SetStereoCapableWindow(self, capable:int) -> None\nC++: void SetStereoCapableWindow(vtkTypeBool capable) override;\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. This\nmethod overrides the superclass method since this class can\nactually check whether the window has been realized yet.\n"},
  {"MakeCurrent", PyvtkOSOpenGLRenderWindow_MakeCurrent, METH_VARARGS,
   "MakeCurrent(self) -> None\nC++: void MakeCurrent() override;\n\nMake this window the current OpenGL context.\n"},
  {"IsCurrent", PyvtkOSOpenGLRenderWindow_IsCurrent, METH_VARARGS,
   "IsCurrent(self) -> bool\nC++: bool IsCurrent() override;\n\nTells if this window is the current OpenGL context for the\ncalling thread.\n"},
  {"SetForceMakeCurrent", PyvtkOSOpenGLRenderWindow_SetForceMakeCurrent, METH_VARARGS,
   "SetForceMakeCurrent(self) -> None\nC++: void SetForceMakeCurrent() override;\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {"ReportCapabilities", PyvtkOSOpenGLRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"SupportsOpenGL", PyvtkOSOpenGLRenderWindow_SupportsOpenGL, METH_VARARGS,
   "SupportsOpenGL(self) -> int\nC++: int SupportsOpenGL() override;\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {"IsDirect", PyvtkOSOpenGLRenderWindow_IsDirect, METH_VARARGS,
   "IsDirect(self) -> int\nC++: vtkTypeBool IsDirect() override;\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {"WindowRemap", PyvtkOSOpenGLRenderWindow_WindowRemap, METH_VARARGS,
   "WindowRemap(self) -> None\nC++: void WindowRemap() override;\n\nResize the window.\n"},
  {"GetGenericDisplayId", PyvtkOSOpenGLRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "GetGenericDisplayId(self) -> Pointer\nC++: void *GetGenericDisplayId() override;\n\nXwindow get set functions\n"},
  {"GetGenericWindowId", PyvtkOSOpenGLRenderWindow_GetGenericWindowId, METH_VARARGS,
   "GetGenericWindowId(self) -> Pointer\nC++: void *GetGenericWindowId() override;\n\n"},
  {"GetGenericParentId", PyvtkOSOpenGLRenderWindow_GetGenericParentId, METH_VARARGS,
   "GetGenericParentId(self) -> Pointer\nC++: void *GetGenericParentId() override;\n\n"},
  {"GetGenericContext", PyvtkOSOpenGLRenderWindow_GetGenericContext, METH_VARARGS,
   "GetGenericContext(self) -> Pointer\nC++: void *GetGenericContext() override;\n\n"},
  {"GetGenericDrawable", PyvtkOSOpenGLRenderWindow_GetGenericDrawable, METH_VARARGS,
   "GetGenericDrawable(self) -> Pointer\nC++: void *GetGenericDrawable() override;\n\n"},
  {"SetDisplayId", PyvtkOSOpenGLRenderWindow_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, __a:Pointer) -> None\nC++: void SetDisplayId(void *) override;\n\nSet the X display id for this RenderWindow to use to a\npre-existing X display id.\n"},
  {"SetParentId", PyvtkOSOpenGLRenderWindow_SetParentId, METH_VARARGS,
   "SetParentId(self, __a:Pointer) -> None\nC++: void SetParentId(void *) override;\n\nSets the parent of the window that WILL BE created.\n"},
  {"SetWindowId", PyvtkOSOpenGLRenderWindow_SetWindowId, METH_VARARGS,
   "SetWindowId(self, __a:Pointer) -> None\nC++: void SetWindowId(void *) override;\n\nSet this RenderWindow's X window id to a pre-existing window.\n"},
  {"SetNextWindowId", PyvtkOSOpenGLRenderWindow_SetNextWindowId, METH_VARARGS,
   "SetNextWindowId(self, __a:Pointer) -> None\nC++: void SetNextWindowId(void *) override;\n\nSet the window id of the new window once a WindowRemap is done.\nThis is the generic prototype as required by the vtkRenderWindow\nparent.\n"},
  {"SetWindowName", PyvtkOSOpenGLRenderWindow_SetWindowName, METH_VARARGS,
   "SetWindowName(self, __a:str) -> None\nC++: void SetWindowName(const char *) override;\n\n"},
  {"HideCursor", PyvtkOSOpenGLRenderWindow_HideCursor, METH_VARARGS,
   "HideCursor(self) -> None\nC++: void HideCursor() override;\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {"ShowCursor", PyvtkOSOpenGLRenderWindow_ShowCursor, METH_VARARGS,
   "ShowCursor(self) -> None\nC++: void ShowCursor() override;\n\n"},
  {"GetEventPending", PyvtkOSOpenGLRenderWindow_GetEventPending, METH_VARARGS,
   "GetEventPending(self) -> int\nC++: vtkTypeBool GetEventPending() override;\n\nCheck to see if a mouse button has been pressed. All other events\nare ignored by this method. This is a useful check to abort a\nlong render.\n"},
  {"SetWindowInfo", PyvtkOSOpenGLRenderWindow_SetWindowInfo, METH_VARARGS,
   "SetWindowInfo(self, info:str) -> None\nC++: void SetWindowInfo(const char *info) override;\n\nSet this RenderWindow's X window id to a pre-existing window.\n"},
  {"SetNextWindowInfo", PyvtkOSOpenGLRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "SetNextWindowInfo(self, info:str) -> None\nC++: void SetNextWindowInfo(const char *info) override;\n\nSet the window info that will be used after WindowRemap()\n"},
  {"SetParentInfo", PyvtkOSOpenGLRenderWindow_SetParentInfo, METH_VARARGS,
   "SetParentInfo(self, info:str) -> None\nC++: void SetParentInfo(const char *info) override;\n\nSets the X window id of the window that WILL BE created.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOSOpenGLRenderWindow_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("full_screen"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetFullScreen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetFullScreen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFullScreen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("size"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPosition/SetPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stereo_capable_window"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetStereoCapableWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetStereoCapableWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetStereoCapableWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("display_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetDisplayId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetDisplayId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDisplayId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parent_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetParentId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetParentId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetParentId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWindowId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("next_window_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetNextWindowId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetNextWindowId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNextWindowId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWindowName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetWindowInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWindowInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("next_window_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetNextWindowInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetNextWindowInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNextWindowInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parent_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOSOpenGLRenderWindow_SetParentInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOSOpenGLRenderWindow_SetParentInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetParentInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("screen_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetScreenSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetScreenSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_display_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetGenericDisplayId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericDisplayId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_window_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetGenericWindowId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericWindowId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_parent_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetGenericParentId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericParentId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_context"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetGenericContext(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericContext\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_drawable"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetGenericDrawable(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericDrawable\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_pending"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOSOpenGLRenderWindow_GetEventPending(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEventPending\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOSOpenGLRenderWindow_Doc =
  "vtkOSOpenGLRenderWindow - OffScreen Mesa rendering window\n\n"
  "Superclass: vtkOpenGLRenderWindow\n\n"
  "vtkOSOpenGLRenderWindow is a concrete implementation of the abstract\n"
  "class vtkOpenGLRenderWindow. vtkOSOpenGLRenderWindow interfaces to\n"
  "the OffScreen Mesa software implementation of the OpenGL library. The\n"
  "framebuffer resides on host memory. The framebuffer is the collection\n"
  "of logical buffers (color buffer(s), depth buffer, stencil buffer,\n"
  "accumulation buffer, multisample buffer) defining where the output of\n"
  "GL rendering is directed. Application programmers should normally use\n"
  "vtkRenderWindow instead of the OpenGL specific version.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOSOpenGLRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOSOpenGLRenderWindow", // tp_name
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
  PyvtkOSOpenGLRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOSOpenGLRenderWindow_StaticNew()
{
  return vtkOSOpenGLRenderWindow::New();
}

PyObject *PyvtkOSOpenGLRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOSOpenGLRenderWindow_Type, PyvtkOSOpenGLRenderWindow_Methods,
    "vtkOSOpenGLRenderWindow",
 &PyvtkOSOpenGLRenderWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderWindow_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOSOpenGLRenderWindow_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOSOpenGLRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOSOpenGLRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOSOpenGLRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

