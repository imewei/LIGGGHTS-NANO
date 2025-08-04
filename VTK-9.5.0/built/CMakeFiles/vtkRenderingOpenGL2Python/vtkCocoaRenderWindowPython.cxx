// python wrapper for vtkCocoaRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCocoaRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCocoaRenderWindow(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCocoaRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderWindow_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderWindow_ClassNew
#endif

static PyObject *
PyvtkCocoaRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCocoaRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCocoaRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCocoaRenderWindow *tempr = vtkCocoaRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCocoaRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCocoaRenderWindow::NewInstance());

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
PyvtkCocoaRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCocoaRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCocoaRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkCocoaRenderWindow::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkCocoaRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_WindowConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowConfigure();
    }
    else
    {
      op->vtkCocoaRenderWindow::WindowConfigure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCocoaRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetFullScreen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowRemap();
    }
    else
    {
      op->vtkCocoaRenderWindow::WindowRemap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_PrefFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrefFullScreen();
    }
    else
    {
      op->vtkCocoaRenderWindow::PrefFullScreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCocoaRenderWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetSize(temp0);
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
PyvtkCocoaRenderWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCocoaRenderWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkCocoaRenderWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkCocoaRenderWindow_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkCocoaRenderWindow::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCocoaRenderWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetPosition(temp0);
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
PyvtkCocoaRenderWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCocoaRenderWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkCocoaRenderWindow_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkCocoaRenderWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkCocoaRenderWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkCocoaRenderWindow::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetWindowName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetNextWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkCocoaRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetDisplayId(temp0);
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
PyvtkCocoaRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkCocoaRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetNextWindowId(temp0);
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
PyvtkCocoaRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkCocoaRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetPlatformSupportsRenderWindowSharing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlatformSupportsRenderWindowSharing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlatformSupportsRenderWindowSharing() :
      op->vtkCocoaRenderWindow::GetPlatformSupportsRenderWindowSharing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkCocoaRenderWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_ReleaseCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseCurrent();
    }
    else
    {
      op->vtkCocoaRenderWindow::ReleaseCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkCocoaRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_UpdateContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateContext();
    }
    else
    {
      op->vtkCocoaRenderWindow::UpdateContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkCocoaRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkCocoaRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetForceMakeCurrent();
    }
    else
    {
      op->vtkCocoaRenderWindow::SetForceMakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkCocoaRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetupPalette(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupPalette");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetupPalette(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetupPalette(temp0);
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
PyvtkCocoaRenderWindow_SetupPixelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupPixelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp2;
  int temp3 = 16;
  int temp4 = 16;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetupPixelFormat(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetupPixelFormat(temp0, temp1, temp2, temp3, temp4);
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
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkCocoaRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkCocoaRenderWindow::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkCocoaRenderWindow::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0, temp1);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetCursorPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentCursor(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetCurrentCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetViewCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewCreated() :
      op->vtkCocoaRenderWindow::GetViewCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetWindowCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWindowCreated() :
      op->vtkCocoaRenderWindow::GetWindowCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetContextId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContextId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetContextId(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetContextId(temp0);
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
PyvtkCocoaRenderWindow_GetContextId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetContextId() :
      op->vtkCocoaRenderWindow::GetContextId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkCocoaRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetRootWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetRootWindow(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetRootWindow(temp0);
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
PyvtkCocoaRenderWindow_GetRootWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetRootWindow() :
      op->vtkCocoaRenderWindow::GetRootWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetWindowId(temp0);
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
PyvtkCocoaRenderWindow_GetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetWindowId() :
      op->vtkCocoaRenderWindow::GetWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkCocoaRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

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
      op->vtkCocoaRenderWindow::SetParentId(temp0);
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
PyvtkCocoaRenderWindow_GetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetParentId() :
      op->vtkCocoaRenderWindow::GetParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkCocoaRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetWantsBestResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWantsBestResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWantsBestResolution(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetWantsBestResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetWantsBestResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWantsBestResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWantsBestResolution() :
      op->vtkCocoaRenderWindow::GetWantsBestResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetConnectContextToNSView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectContextToNSView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectContextToNSView(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetConnectContextToNSView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_GetConnectContextToNSView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectContextToNSView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConnectContextToNSView() :
      op->vtkCocoaRenderWindow::GetConnectContextToNSView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_SetPixelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetPixelFormat(temp0);
    }
    else
    {
      op->vtkCocoaRenderWindow::SetPixelFormat(temp0);
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
PyvtkCocoaRenderWindow_GetPixelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetPixelFormat() :
      op->vtkCocoaRenderWindow::GetPixelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_PushContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushContext();
    }
    else
    {
      op->vtkCocoaRenderWindow::PushContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_PopContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopContext();
    }
    else
    {
      op->vtkCocoaRenderWindow::PopContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCocoaRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCocoaRenderWindow *op = static_cast<vtkCocoaRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
#ifdef VTK_PYTHON_FULL_THREADSAFE
    PyThreadState *ts = PyEval_SaveThread();
#endif

    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkCocoaRenderWindow::Render();
    }

#ifdef VTK_PYTHON_FULL_THREADSAFE
    PyEval_RestoreThread(ts);
#endif

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCocoaRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkCocoaRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCocoaRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCocoaRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCocoaRenderWindow\nC++: static vtkCocoaRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCocoaRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCocoaRenderWindow\nC++: vtkCocoaRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCocoaRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCocoaRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Start", PyvtkCocoaRenderWindow_Start, METH_VARARGS,
   "Start(self) -> None\nC++: void Start() override;\n\nBegin the rendering process.\n"},
  {"Frame", PyvtkCocoaRenderWindow_Frame, METH_VARARGS,
   "Frame(self) -> None\nC++: void Frame() override;\n\nFinish the rendering process.\n"},
  {"WindowConfigure", PyvtkCocoaRenderWindow_WindowConfigure, METH_VARARGS,
   "WindowConfigure(self) -> None\nC++: virtual void WindowConfigure()\n\nSpecify various window parameters.\n"},
  {"Initialize", PyvtkCocoaRenderWindow_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the window for rendering. virtual void\nWindowInitialize();\n\nInitialize the rendering window.\n"},
  {"SetFullScreen", PyvtkCocoaRenderWindow_SetFullScreen, METH_VARARGS,
   "SetFullScreen(self, __a:int) -> None\nC++: void SetFullScreen(vtkTypeBool) override;\n\nChange the window to fill the entire screen.  This is only\npartially implemented for the vtkCocoaRenderWindow.  It can only\nbe called before the window has been created, and it might not\nwork on all versions of OS X.\n"},
  {"WindowRemap", PyvtkCocoaRenderWindow_WindowRemap, METH_VARARGS,
   "WindowRemap(self) -> None\nC++: void WindowRemap() override;\n\nRemap the window.  This is not implemented for the\nvtkCocoaRenderWindow.\n"},
  {"PrefFullScreen", PyvtkCocoaRenderWindow_PrefFullScreen, METH_VARARGS,
   "PrefFullScreen(self) -> None\nC++: virtual void PrefFullScreen()\n\nSet the preferred window size to full screen.  This is not\nimplemented for the vtkCocoaRenderWindow.\n"},
  {"SetSize", PyvtkCocoaRenderWindow_SetSize, METH_VARARGS,
   "SetSize(self, width:int, height:int) -> None\nC++: void SetSize(int width, int height) override;\nSetSize(self, a:[int, int]) -> None\nC++: void SetSize(int a[2]) override;\n\nSet the size (width and height) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n\nIf the size has changed, this method will fire\nvtkCommand::WindowResizeEvent.\n"},
  {"GetSize", PyvtkCocoaRenderWindow_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: int *GetSize() override;\n\nGet the size (width and height) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetPosition", PyvtkCocoaRenderWindow_SetPosition, METH_VARARGS,
   "SetPosition(self, x:int, y:int) -> None\nC++: void SetPosition(int x, int y) override;\nSetPosition(self, a:[int, int]) -> None\nC++: void SetPosition(int a[2]) override;\n\nSet the position (x and y) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n"},
  {"GetScreenSize", PyvtkCocoaRenderWindow_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> (int, int)\nC++: int *GetScreenSize() override;\n\nGet the current size of the screen in pixels. An HDTV for example\nwould be 1920 x 1080 pixels.\n"},
  {"GetPosition", PyvtkCocoaRenderWindow_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (int, int)\nC++: int *GetPosition() override;\n\nGet the position (x and y) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetWindowName", PyvtkCocoaRenderWindow_SetWindowName, METH_VARARGS,
   "SetWindowName(self, __a:str) -> None\nC++: void SetWindowName(const char *) override;\n\nSet the name of the window. This appears at the top of the window\nnormally.\n"},
  {"SetNextWindowInfo", PyvtkCocoaRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "SetNextWindowInfo(self, __a:str) -> None\nC++: void SetNextWindowInfo(const char *) override;\n\n"},
  {"GetGenericDrawable", PyvtkCocoaRenderWindow_GetGenericDrawable, METH_VARARGS,
   "GetGenericDrawable(self) -> Pointer\nC++: void *GetGenericDrawable() override;\n\n"},
  {"SetDisplayId", PyvtkCocoaRenderWindow_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, displayId:Pointer) -> None\nC++: void SetDisplayId(void *displayId) override;\n\nSet the index of the NSScreen on which the window should be\ncreated. This is useful for creating the render window on\nsecondary displays. By default, the DisplayId is 0, meaning the\nwindow will appear on the main screen. This function must be\ncalled before the window is created.\n"},
  {"GetGenericDisplayId", PyvtkCocoaRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "GetGenericDisplayId(self) -> Pointer\nC++: void *GetGenericDisplayId() override;\n\n"},
  {"SetWindowInfo", PyvtkCocoaRenderWindow_SetWindowInfo, METH_VARARGS,
   "SetWindowInfo(self, __a:str) -> None\nC++: void SetWindowInfo(const char *) override;\n\nSet this RenderWindow's window id to a pre-existing window. The\nparameter is an ASCII string of a decimal number representing a\npointer to the window.\n"},
  {"SetParentInfo", PyvtkCocoaRenderWindow_SetParentInfo, METH_VARARGS,
   "SetParentInfo(self, __a:str) -> None\nC++: void SetParentInfo(const char *) override;\n\nSee the documentation for SetParentId().  This method allows the\nParentId to be set as an ASCII string of a decimal number that is\nthe memory address of the parent NSView.\n"},
  {"SetNextWindowId", PyvtkCocoaRenderWindow_SetNextWindowId, METH_VARARGS,
   "SetNextWindowId(self, __a:Pointer) -> None\nC++: void SetNextWindowId(void *) override;\n\n"},
  {"InitializeFromCurrentContext", PyvtkCocoaRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "InitializeFromCurrentContext(self) -> bool\nC++: bool InitializeFromCurrentContext() override;\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"GetPlatformSupportsRenderWindowSharing", PyvtkCocoaRenderWindow_GetPlatformSupportsRenderWindowSharing, METH_VARARGS,
   "GetPlatformSupportsRenderWindowSharing(self) -> bool\nC++: bool GetPlatformSupportsRenderWindowSharing() override;\n\nDoes this platform support render window data sharing.\n"},
  {"SetStereoCapableWindow", PyvtkCocoaRenderWindow_SetStereoCapableWindow, METH_VARARGS,
   "SetStereoCapableWindow(self, capable:int) -> None\nC++: void SetStereoCapableWindow(vtkTypeBool capable) override;\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. This\nmethod overrides the superclass method since this class can\nactually check whether the window has been realized yet.\n"},
  {"MakeCurrent", PyvtkCocoaRenderWindow_MakeCurrent, METH_VARARGS,
   "MakeCurrent(self) -> None\nC++: void MakeCurrent() override;\n\nMake this windows OpenGL context the current context.\n"},
  {"ReleaseCurrent", PyvtkCocoaRenderWindow_ReleaseCurrent, METH_VARARGS,
   "ReleaseCurrent(self) -> None\nC++: void ReleaseCurrent() override;\n\nRelease the current context.\n"},
  {"IsCurrent", PyvtkCocoaRenderWindow_IsCurrent, METH_VARARGS,
   "IsCurrent(self) -> bool\nC++: bool IsCurrent() override;\n\nTells if this window is the current OpenGL context for the\ncalling thread.\n"},
  {"UpdateContext", PyvtkCocoaRenderWindow_UpdateContext, METH_VARARGS,
   "UpdateContext(self) -> None\nC++: void UpdateContext()\n\nUpdate this window's OpenGL context, e.g. when the window is\nresized.\n"},
  {"ReportCapabilities", PyvtkCocoaRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"IsDirect", PyvtkCocoaRenderWindow_IsDirect, METH_VARARGS,
   "IsDirect(self) -> int\nC++: vtkTypeBool IsDirect() override;\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {"SetForceMakeCurrent", PyvtkCocoaRenderWindow_SetForceMakeCurrent, METH_VARARGS,
   "SetForceMakeCurrent(self) -> None\nC++: void SetForceMakeCurrent() override;\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {"GetEventPending", PyvtkCocoaRenderWindow_GetEventPending, METH_VARARGS,
   "GetEventPending(self) -> int\nC++: vtkTypeBool GetEventPending() override;\n\nCheck to see if an event is pending for this window. This is a\nuseful check to abort a long render.\n"},
  {"SetupPalette", PyvtkCocoaRenderWindow_SetupPalette, METH_VARARGS,
   "SetupPalette(self, hDC:Pointer) -> None\nC++: virtual void SetupPalette(void *hDC)\n\nInitialize OpenGL for this window.\n"},
  {"SetupPixelFormat", PyvtkCocoaRenderWindow_SetupPixelFormat, METH_VARARGS,
   "SetupPixelFormat(self, hDC:Pointer, dwFlags:Pointer, debug:int,\n    bpp:int=16, zbpp:int=16) -> None\nC++: virtual void SetupPixelFormat(void *hDC, void *dwFlags,\n    int debug, int bpp=16, int zbpp=16)\n\n"},
  {"Finalize", PyvtkCocoaRenderWindow_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\n\nClean up device contexts, rendering contexts, etc.\n"},
  {"HideCursor", PyvtkCocoaRenderWindow_HideCursor, METH_VARARGS,
   "HideCursor(self) -> None\nC++: void HideCursor() override;\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"ShowCursor", PyvtkCocoaRenderWindow_ShowCursor, METH_VARARGS,
   "ShowCursor(self) -> None\nC++: void ShowCursor() override;\n\n"},
  {"SetCursorPosition", PyvtkCocoaRenderWindow_SetCursorPosition, METH_VARARGS,
   "SetCursorPosition(self, x:int, y:int) -> None\nC++: void SetCursorPosition(int x, int y) override;\n\n"},
  {"SetCurrentCursor", PyvtkCocoaRenderWindow_SetCurrentCursor, METH_VARARGS,
   "SetCurrentCursor(self, __a:int) -> None\nC++: void SetCurrentCursor(int) override;\n\nChange the shape of the cursor.\n"},
  {"GetViewCreated", PyvtkCocoaRenderWindow_GetViewCreated, METH_VARARGS,
   "GetViewCreated(self) -> int\nC++: virtual vtkTypeBool GetViewCreated()\n\nGet the ViewCreated flag. It is 1 if this object created an\ninstance of NSView, 0 otherwise.\n"},
  {"GetWindowCreated", PyvtkCocoaRenderWindow_GetWindowCreated, METH_VARARGS,
   "GetWindowCreated(self) -> int\nC++: virtual vtkTypeBool GetWindowCreated()\n\nGet the WindowCreated flag. It is 1 if this object created an\ninstance of NSWindow, 0 otherwise.\n"},
  {"SetContextId", PyvtkCocoaRenderWindow_SetContextId, METH_VARARGS,
   "SetContextId(self, __a:Pointer) -> None\nC++: void SetContextId(void *)\n\nAccessors for the OpenGL context (Really an NSOpenGLContext*).\n"},
  {"GetContextId", PyvtkCocoaRenderWindow_GetContextId, METH_VARARGS,
   "GetContextId(self) -> Pointer\nC++: void *GetContextId()\n\n"},
  {"GetGenericContext", PyvtkCocoaRenderWindow_GetGenericContext, METH_VARARGS,
   "GetGenericContext(self) -> Pointer\nC++: void *GetGenericContext() override;\n\n"},
  {"SetRootWindow", PyvtkCocoaRenderWindow_SetRootWindow, METH_VARARGS,
   "SetRootWindow(self, __a:Pointer) -> None\nC++: virtual void SetRootWindow(void *)\n\nSets the NSWindow* associated with this vtkRenderWindow. This\nclass' default behaviour, that is, if you never call\nSetWindowId()/SetRootWindow() is to create an NSWindow and a\nvtkCocoaGLView (NSView subclass) which are used together to draw\nall vtk stuff into. If you already have an NSWindow and NSView\nand you want this class to use them you must call both\nSetRootWindow() and SetWindowId(), respectively, early on (before\nWindowInitialize() is executed). In the case of Java, you should\ncall only SetWindowId().\n"},
  {"GetRootWindow", PyvtkCocoaRenderWindow_GetRootWindow, METH_VARARGS,
   "GetRootWindow(self) -> Pointer\nC++: virtual void *GetRootWindow()\n\nReturns the NSWindow* associated with this vtkRenderWindow.\n"},
  {"SetWindowId", PyvtkCocoaRenderWindow_SetWindowId, METH_VARARGS,
   "SetWindowId(self, __a:Pointer) -> None\nC++: void SetWindowId(void *) override;\n\nSets the NSView* associated with this vtkRenderWindow. This\nclass' default behaviour, that is, if you never call\nSetWindowId()/SetRootWindow() is to create an NSWindow and a\nvtkCocoaGLView (NSView subclass) which are used together to draw\nall vtk stuff into. If you already have an NSWindow and NSView\nand you want this class to use them you must call both\nSetRootWindow() and SetWindowId(), respectively, early on (before\nWindowInitialize() is executed). In the case of Java, you should\ncall only SetWindowId().\n"},
  {"GetWindowId", PyvtkCocoaRenderWindow_GetWindowId, METH_VARARGS,
   "GetWindowId(self) -> Pointer\nC++: virtual void *GetWindowId()\n\nReturns the NSView* associated with this vtkRenderWindow.\n"},
  {"GetGenericWindowId", PyvtkCocoaRenderWindow_GetGenericWindowId, METH_VARARGS,
   "GetGenericWindowId(self) -> Pointer\nC++: void *GetGenericWindowId() override;\n\n"},
  {"SetParentId", PyvtkCocoaRenderWindow_SetParentId, METH_VARARGS,
   "SetParentId(self, nsview:Pointer) -> None\nC++: void SetParentId(void *nsview) override;\n\nSet the NSView* for the vtkRenderWindow to be parented within. \nThe Position and Size of the RenderWindow will set the rectangle\nof the NSView that the vtkRenderWindow will create within this\nparent. If you set the WindowId, then this ParentId will be\nignored.\n"},
  {"GetParentId", PyvtkCocoaRenderWindow_GetParentId, METH_VARARGS,
   "GetParentId(self) -> Pointer\nC++: virtual void *GetParentId()\n\nGet the parent NSView* for this vtkRenderWindow.  This method\nwill return \"NULL\" if the parent was not set with SetParentId()\nor SetParentInfo().\n"},
  {"GetGenericParentId", PyvtkCocoaRenderWindow_GetGenericParentId, METH_VARARGS,
   "GetGenericParentId(self) -> Pointer\nC++: void *GetGenericParentId() override;\n\n"},
  {"SetWantsBestResolution", PyvtkCocoaRenderWindow_SetWantsBestResolution, METH_VARARGS,
   "SetWantsBestResolution(self, wantsBest:bool) -> None\nC++: void SetWantsBestResolution(bool wantsBest)\n\nSet to true if you want to force NSViews created by this object\nto have their wantsBestResolutionOpenGLSurface property set to\nYES. Otherwise, the bundle's Info.plist will be checked for the\n\"NSHighResolutionCapable\" key, if it is present and YES,\nwantsBestResolutionOpenGLSurface will be set to YES. In all other\ncases, setWantsBestResolutionOpenGLSurface: is not invoked at\nall. Notably, setWantsBestResolutionOpenGLSurface: is never\ninvoked on NSViews not created by VTK itself.\n"},
  {"GetWantsBestResolution", PyvtkCocoaRenderWindow_GetWantsBestResolution, METH_VARARGS,
   "GetWantsBestResolution(self) -> bool\nC++: bool GetWantsBestResolution()\n\n"},
  {"SetConnectContextToNSView", PyvtkCocoaRenderWindow_SetConnectContextToNSView, METH_VARARGS,
   "SetConnectContextToNSView(self, connect:bool) -> None\nC++: void SetConnectContextToNSView(bool connect)\n\nSet to false if you want to prevent the NSOpenGLContext from\nbeing associated with the NSView. You might want this is you are\nrendering vtk content into a CAOpenGLLayer instead of an NSView.\nDefaults to true.\n"},
  {"GetConnectContextToNSView", PyvtkCocoaRenderWindow_GetConnectContextToNSView, METH_VARARGS,
   "GetConnectContextToNSView(self) -> bool\nC++: bool GetConnectContextToNSView()\n\n"},
  {"SetPixelFormat", PyvtkCocoaRenderWindow_SetPixelFormat, METH_VARARGS,
   "SetPixelFormat(self, pixelFormat:Pointer) -> None\nC++: void SetPixelFormat(void *pixelFormat)\n\nAccessors for the pixel format object (Really an\nNSOpenGLPixelFormat*).\n"},
  {"GetPixelFormat", PyvtkCocoaRenderWindow_GetPixelFormat, METH_VARARGS,
   "GetPixelFormat(self) -> Pointer\nC++: void *GetPixelFormat()\n\n"},
  {"PushContext", PyvtkCocoaRenderWindow_PushContext, METH_VARARGS,
   "PushContext(self) -> None\nC++: void PushContext() override;\n\nAbility to push and pop this window's context as the current\ncontext. The idea being to if needed make this window's context\ncurrent and when done releasing resources restore the prior\ncontext\n"},
  {"PopContext", PyvtkCocoaRenderWindow_PopContext, METH_VARARGS,
   "PopContext(self) -> None\nC++: void PopContext() override;\n\n"},
  {"Render", PyvtkCocoaRenderWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nHandle opengl specific code and calls superclass\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCocoaRenderWindow_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("full_screen"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetFullScreen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetFullScreen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFullScreen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSize/SetSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPosition/SetPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetWindowName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetWindowName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWindowName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("next_window_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetNextWindowInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetNextWindowInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNextWindowInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("display_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetDisplayId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetDisplayId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDisplayId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetWindowInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetWindowInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWindowInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parent_info"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetParentInfo(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetParentInfo(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetParentInfo\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("next_window_id"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetNextWindowId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetNextWindowId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNextWindowId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stereo_capable_window"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetStereoCapableWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetStereoCapableWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetStereoCapableWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cursor_position"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetCursorPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetCursorPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCursorPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("current_cursor"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetCurrentCursor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetCurrentCursor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCurrentCursor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("context_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetContextId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetContextId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetContextId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContextId/SetContextId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("root_window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetRootWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetRootWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetRootWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRootWindow/SetRootWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetWindowId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetWindowId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetWindowId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWindowId/SetWindowId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parent_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetParentId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetParentId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetParentId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetParentId/SetParentId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("wants_best_resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetWantsBestResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetWantsBestResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetWantsBestResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWantsBestResolution/SetWantsBestResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("connect_context_to_ns_view"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetConnectContextToNSView(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetConnectContextToNSView(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetConnectContextToNSView(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConnectContextToNSView/SetConnectContextToNSView\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pixel_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetPixelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCocoaRenderWindow_SetPixelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCocoaRenderWindow_SetPixelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPixelFormat/SetPixelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("screen_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetScreenSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetScreenSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_drawable"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetGenericDrawable(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericDrawable\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_display_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetGenericDisplayId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericDisplayId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("platform_supports_render_window_sharing"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetPlatformSupportsRenderWindowSharing(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPlatformSupportsRenderWindowSharing\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_pending"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetEventPending(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEventPending\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("view_created"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetViewCreated(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetViewCreated\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("window_created"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetWindowCreated(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWindowCreated\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_context"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetGenericContext(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericContext\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generic_window_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCocoaRenderWindow_GetGenericWindowId(self, args);
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
      auto result = PyvtkCocoaRenderWindow_GetGenericParentId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGenericParentId\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCocoaRenderWindow_Doc =
  "vtkCocoaRenderWindow - Cocoa OpenGL rendering window\n\n"
  "Superclass: vtkOpenGLRenderWindow\n\n"
  "vtkCocoaRenderWindow is a concrete implementation of the abstract\n"
  "class vtkOpenGLRenderWindow. It is only available on Mac OS X. To use\n"
  "this class, build VTK with VTK_USE_COCOA turned ON (this is the\n"
  "default). This class can be used by 32 and 64 bit processes, and\n"
  "either in garbage collected or reference counted modes. ARC is not\n"
  "yet supported. vtkCocoaRenderWindow uses Objective-C++, and the\n"
  "OpenGL and Cocoa APIs. This class's default behaviour is to create an\n"
  "NSWindow and a vtkCocoaGLView which are used together to draw all VTK\n"
  "content. If you already have an NSWindow and vtkCocoaGLView and you\n"
  "want this class to use them you must call both SetRootWindow() and\n"
  "SetWindowId(), respectively, early on (before WindowInitialize() is\n"
  "executed).\n\n"
  "@sa\n"
  "vtkOpenGLRenderWindow vtkCocoaGLView\n\n"
  "@warning\n"
  "This header must be in C++ only because it is included by .cxx files.\n"
  "That means no Objective-C may be used. That's why some instance\n"
  "variables are void* instead of what they really should be.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCocoaRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkCocoaRenderWindow", // tp_name
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
  PyvtkCocoaRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCocoaRenderWindow_StaticNew()
{
  return vtkCocoaRenderWindow::New();
}

PyObject *PyvtkCocoaRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCocoaRenderWindow_Type, PyvtkCocoaRenderWindow_Methods,
    "vtkCocoaRenderWindow",
 &PyvtkCocoaRenderWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderWindow_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCocoaRenderWindow_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCocoaRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCocoaRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCocoaRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

