// python wrapper for vtkAbstractContextItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkAbstractContextItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAbstractContextItem(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAbstractContextItem_ClassNew(); }


static PyObject *
PyvtkAbstractContextItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractContextItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractContextItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractContextItem *tempr = vtkAbstractContextItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractContextItem::NewInstance());

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
PyvtkAbstractContextItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractContextItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractContextItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAbstractContextItem::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkAbstractContextItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_PaintChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintChildren(temp0) :
      op->vtkAbstractContextItem::PaintChildren(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkAbstractContextItem::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    long long tempr = (ap.IsBound() ?
      op->AddItem(temp0) :
      op->vtkAbstractContextItem::AddItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkAbstractContextItem::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractContextItem_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkAbstractContextItem::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractContextItem_RemoveItem_Methods[] = {
  {"RemoveItem", PyvtkAbstractContextItem_RemoveItem_s1, METH_VARARGS,
   "@V *vtkAbstractContextItem"},
  {"RemoveItem", PyvtkAbstractContextItem_RemoveItem_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractContextItem_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractContextItem_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return nullptr;
}


static PyObject *
PyvtkAbstractContextItem_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkAbstractContextItem::GetItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetItemIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemIndex(temp0) :
      op->vtkAbstractContextItem::GetItemIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkAbstractContextItem::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_ClearItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearItems();
    }
    else
    {
      op->vtkAbstractContextItem::ClearItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Raise(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Raise");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->Raise(temp0) :
      op->vtkAbstractContextItem::Raise(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_StackAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->StackAbove(temp0, temp1) :
      op->vtkAbstractContextItem::StackAbove(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Lower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->Lower(temp0) :
      op->vtkAbstractContextItem::Lower(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_StackUnder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackUnder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->StackUnder(temp0, temp1) :
      op->vtkAbstractContextItem::StackUnder(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkAbstractContextItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetPickedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetPickedItem(*temp0) :
      op->vtkAbstractContextItem::GetPickedItem(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkAbstractContextItem::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkAbstractContextItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkAbstractContextItem::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkAbstractContextItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkAbstractContextItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkAbstractContextItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkAbstractContextItem::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyPressEvent(*temp0) :
      op->vtkAbstractContextItem::KeyPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyReleaseEvent(*temp0) :
      op->vtkAbstractContextItem::KeyReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkAbstractContextItem::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->GetScene() :
      op->vtkAbstractContextItem::GetScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkAbstractContextItem::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkAbstractContextItem::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToParent(*temp0) :
      op->vtkAbstractContextItem::MapToParent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromParent(*temp0) :
      op->vtkAbstractContextItem::MapFromParent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToScene(*temp0) :
      op->vtkAbstractContextItem::MapToScene(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapFromScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromScene(*temp0) :
      op->vtkAbstractContextItem::MapFromScene(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisible() :
      op->vtkAbstractContextItem::GetVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisible(temp0);
    }
    else
    {
      op->vtkAbstractContextItem::SetVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkAbstractContextItem::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractive(temp0);
    }
    else
    {
      op->vtkAbstractContextItem::SetInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractContextItem_Methods[] = {
  {"IsTypeOf", PyvtkAbstractContextItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractContextItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractContextItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractContextItem\nC++: static vtkAbstractContextItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractContextItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractContextItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractContextItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkAbstractContextItem_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkAbstractContextItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {"PaintChildren", PyvtkAbstractContextItem_PaintChildren, METH_VARARGS,
   "PaintChildren(self, painter:vtkContext2D) -> bool\nC++: virtual bool PaintChildren(vtkContext2D *painter)\n\nPaint the children of the item, should be called whenever the\nchildren need to be rendered.\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractContextItem_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: virtual void ReleaseGraphicsResources()\n\nRelease graphics resources hold by the item. The default\nimplementation is empty.\n"},
  {"AddItem", PyvtkAbstractContextItem_AddItem, METH_VARARGS,
   "AddItem(self, item:vtkAbstractContextItem) -> int\nC++: vtkIdType AddItem(vtkAbstractContextItem *item)\n\nAdd child items to this item. Increments reference count of item.\n\\return the index of the child item.\n"},
  {"RemoveItem", PyvtkAbstractContextItem_RemoveItem, METH_VARARGS,
   "RemoveItem(self, item:vtkAbstractContextItem) -> bool\nC++: bool RemoveItem(vtkAbstractContextItem *item)\nRemoveItem(self, index:int) -> bool\nC++: bool RemoveItem(vtkIdType index)\n\nRemove child item from this item. Decrements reference count of\nitem.\n\\param item the item to be removed.\n\\return true on success, false otherwise.\n"},
  {"GetItem", PyvtkAbstractContextItem_GetItem, METH_VARARGS,
   "GetItem(self, index:int) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetItem(vtkIdType index)\n\nGet the item at the specified index.\n\\return the item at the specified index (null if index is\n    invalid).\n"},
  {"GetItemIndex", PyvtkAbstractContextItem_GetItemIndex, METH_VARARGS,
   "GetItemIndex(self, item:vtkAbstractContextItem) -> int\nC++: vtkIdType GetItemIndex(vtkAbstractContextItem *item)\n\nGet the index of the specified item in itemIndex.\n\\return the item index if found or -1 if not.\n"},
  {"GetNumberOfItems", PyvtkAbstractContextItem_GetNumberOfItems, METH_VARARGS,
   "GetNumberOfItems(self) -> int\nC++: vtkIdType GetNumberOfItems()\n\nGet the number of child items.\n"},
  {"ClearItems", PyvtkAbstractContextItem_ClearItems, METH_VARARGS,
   "ClearItems(self) -> None\nC++: void ClearItems()\n\nRemove all child items from this item.\n"},
  {"Raise", PyvtkAbstractContextItem_Raise, METH_VARARGS,
   "Raise(self, index:int) -> int\nC++: vtkIdType Raise(vtkIdType index)\n\nRaises the child to the top of the item's stack.\n\\return The new index of the item\n\\sa StackAbove(), Lower(), LowerUnder()\n"},
  {"StackAbove", PyvtkAbstractContextItem_StackAbove, METH_VARARGS,
   "StackAbove(self, index:int, under:int) -> int\nC++: virtual vtkIdType StackAbove(vtkIdType index,\n    vtkIdType under)\n\nRaises the child above the under sibling. If under is invalid,\nthe item is raised to the top of the item's stack.\n\\return The new index of the item\n\\sa Raise(), Lower(), StackUnder()\n"},
  {"Lower", PyvtkAbstractContextItem_Lower, METH_VARARGS,
   "Lower(self, index:int) -> int\nC++: vtkIdType Lower(vtkIdType index)\n\nLowers the child to the bottom of the item's stack.\n\\return The new index of the item\n\\sa StackUnder(), Raise(), StackAbove()\n"},
  {"StackUnder", PyvtkAbstractContextItem_StackUnder, METH_VARARGS,
   "StackUnder(self, child:int, above:int) -> int\nC++: virtual vtkIdType StackUnder(vtkIdType child,\n    vtkIdType above)\n\nLowers the child under the above sibling. If above is invalid,\nthe item is lowered to the bottom of the item's stack\n\\return The new index of the item\n\\sa Lower(), Raise(), StackAbove()\n"},
  {"Hit", PyvtkAbstractContextItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool Hit(const vtkContextMouseEvent &mouse)\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"GetPickedItem", PyvtkAbstractContextItem_GetPickedItem, METH_VARARGS,
   "GetPickedItem(self, mouse:vtkContextMouseEvent)\n    -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetPickedItem(\n    const vtkContextMouseEvent &mouse)\n\nReturn the item under the mouse. If no item is under the mouse,\nthe method returns a null pointer.\n"},
  {"MouseEnterEvent", PyvtkAbstractContextItem_MouseEnterEvent, METH_VARARGS,
   "MouseEnterEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseEnterEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse enter event. Return true if the item holds the event, false\nif the event can be propagated to other items.\n"},
  {"MouseMoveEvent", PyvtkAbstractContextItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseMoveEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse move event. Return true if the item holds the event, false\nif the event can be propagated to other items.\n"},
  {"MouseLeaveEvent", PyvtkAbstractContextItem_MouseLeaveEvent, METH_VARARGS,
   "MouseLeaveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseLeaveEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse leave event. Return true if the item holds the event, false\nif the event can be propagated to other items.\n"},
  {"MouseButtonPressEvent", PyvtkAbstractContextItem_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseButtonPressEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse button down event Return true if the item holds the event,\nfalse if the event can be propagated to other items.\n"},
  {"MouseButtonReleaseEvent", PyvtkAbstractContextItem_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse button release event. Return true if the item holds the\nevent, false if the event can be propagated to other items.\n"},
  {"MouseDoubleClickEvent", PyvtkAbstractContextItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: virtual bool MouseDoubleClickEvent(\n    const vtkContextMouseEvent &mouse)\n\nMouse button double click event. Return true if the item holds\nthe event, false if the event can be propagated to other items.\n"},
  {"MouseWheelEvent", PyvtkAbstractContextItem_MouseWheelEvent, METH_VARARGS,
   "MouseWheelEvent(self, mouse:vtkContextMouseEvent, delta:int)\n    -> bool\nC++: virtual bool MouseWheelEvent(\n    const vtkContextMouseEvent &mouse, int delta)\n\nMouse wheel event, positive delta indicates forward movement of\nthe wheel. Return true if the item holds the event, false if the\nevent can be propagated to other items.\n"},
  {"KeyPressEvent", PyvtkAbstractContextItem_KeyPressEvent, METH_VARARGS,
   "KeyPressEvent(self, key:vtkContextKeyEvent) -> bool\nC++: virtual bool KeyPressEvent(const vtkContextKeyEvent &key)\n\nKey press event.\n"},
  {"KeyReleaseEvent", PyvtkAbstractContextItem_KeyReleaseEvent, METH_VARARGS,
   "KeyReleaseEvent(self, key:vtkContextKeyEvent) -> bool\nC++: virtual bool KeyReleaseEvent(const vtkContextKeyEvent &key)\n\nKey release event.\n"},
  {"SetScene", PyvtkAbstractContextItem_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkContextScene) -> None\nC++: virtual void SetScene(vtkContextScene *scene)\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {"GetScene", PyvtkAbstractContextItem_GetScene, METH_VARARGS,
   "GetScene(self) -> vtkContextScene\nC++: vtkContextScene *GetScene()\n\nGet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {"SetParent", PyvtkAbstractContextItem_SetParent, METH_VARARGS,
   "SetParent(self, parent:vtkAbstractContextItem) -> None\nC++: virtual void SetParent(vtkAbstractContextItem *parent)\n\nSet the parent item. The parent will be set for all items except\ntop level items in a scene.\n"},
  {"GetParent", PyvtkAbstractContextItem_GetParent, METH_VARARGS,
   "GetParent(self) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetParent()\n\nGet the parent item. The parent will be set for all items except\ntop level items in a tree.\n"},
  {"MapToParent", PyvtkAbstractContextItem_MapToParent, METH_VARARGS,
   "MapToParent(self, point:vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToParent(const vtkVector2f &point)\n\nMaps the point to the parent coordinate system.\n"},
  {"MapFromParent", PyvtkAbstractContextItem_MapFromParent, METH_VARARGS,
   "MapFromParent(self, point:vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromParent(const vtkVector2f &point)\n\nMaps the point from the parent coordinate system.\n"},
  {"MapToScene", PyvtkAbstractContextItem_MapToScene, METH_VARARGS,
   "MapToScene(self, point:vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToScene(const vtkVector2f &point)\n\nMaps the point to the scene coordinate system.\n"},
  {"MapFromScene", PyvtkAbstractContextItem_MapFromScene, METH_VARARGS,
   "MapFromScene(self, point:vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromScene(const vtkVector2f &point)\n\nMaps the point from the scene coordinate system.\n"},
  {"GetVisible", PyvtkAbstractContextItem_GetVisible, METH_VARARGS,
   "GetVisible(self) -> bool\nC++: virtual bool GetVisible()\n\nGet the visibility of the item (should it be drawn).\n"},
  {"SetVisible", PyvtkAbstractContextItem_SetVisible, METH_VARARGS,
   "SetVisible(self, _arg:bool) -> None\nC++: virtual void SetVisible(bool _arg)\n\nSet the visibility of the item (should it be drawn). Visible by\ndefault.\n"},
  {"GetInteractive", PyvtkAbstractContextItem_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> bool\nC++: virtual bool GetInteractive()\n\nGet if the item is interactive (should respond to mouse events).\n"},
  {"SetInteractive", PyvtkAbstractContextItem_SetInteractive, METH_VARARGS,
   "SetInteractive(self, _arg:bool) -> None\nC++: virtual void SetInteractive(bool _arg)\n\nSet if the item is interactive (should respond to mouse events).\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAbstractContextItem_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("scene"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractContextItem_GetScene(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractContextItem_SetScene(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractContextItem_SetScene(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScene/SetScene\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractContextItem_GetParent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractContextItem_SetParent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractContextItem_SetParent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetParent/SetParent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractContextItem_GetVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractContextItem_SetVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractContextItem_SetVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVisible/SetVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interactive"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractContextItem_GetInteractive(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAbstractContextItem_SetInteractive(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAbstractContextItem_SetInteractive(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInteractive/SetInteractive\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_items"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractContextItem_GetNumberOfItems(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfItems\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAbstractContextItem_Doc =
  "vtkAbstractContextItem - base class for items that are part of a\nvtkContextScene.\n\n"
  "Superclass: vtkObject\n\n"
  "This class is the common base for all context scene items. You should\n"
  "generally derive from vtkContextItem, rather than this class, as it\n"
  "provides most of the commonly used API.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractContextItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkAbstractContextItem", // tp_name
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
  PyvtkAbstractContextItem_Doc, // tp_doc
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

PyObject *PyvtkAbstractContextItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractContextItem_Type, PyvtkAbstractContextItem_Methods,
    "vtkAbstractContextItem",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAbstractContextItem_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractContextItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractContextItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractContextItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

