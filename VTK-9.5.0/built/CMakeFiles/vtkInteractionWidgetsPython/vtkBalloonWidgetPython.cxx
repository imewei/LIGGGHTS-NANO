// python wrapper for vtkBalloonWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBalloonWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkBalloonWidget(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkBalloonWidget_ClassNew(); }

#ifndef DECLARED_PyvtkHoverWidget_ClassNew
extern "C" { PyObject *PyvtkHoverWidget_ClassNew(); }
#define DECLARED_PyvtkHoverWidget_ClassNew
#endif

static PyObject *
PyvtkBalloonWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBalloonWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBalloonWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBalloonWidget *tempr = vtkBalloonWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBalloonWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBalloonWidget::NewInstance());

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
PyvtkBalloonWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBalloonWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBalloonWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkBalloonWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkBalloonRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBalloonRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkBalloonWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->GetBalloonRepresentation() :
      op->vtkBalloonWidget::GetBalloonRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkBalloonWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_AddBalloon_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->AddBalloon(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBalloonWidget::AddBalloon(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonWidget_AddBalloon_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddBalloon(temp0, temp1);
    }
    else
    {
      op->vtkBalloonWidget::AddBalloon(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonWidget_AddBalloon(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBalloonWidget_AddBalloon_s1(self, args);
    case 2:
      return PyvtkBalloonWidget_AddBalloon_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddBalloon");
  return nullptr;
}


static PyObject *
PyvtkBalloonWidget_RemoveBalloon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveBalloon(temp0);
    }
    else
    {
      op->vtkBalloonWidget::RemoveBalloon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBalloonString(temp0) :
      op->vtkBalloonWidget::GetBalloonString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBalloonImage(temp0) :
      op->vtkBalloonWidget::GetBalloonImage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_UpdateBalloonString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBalloonString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateBalloonString(temp0, temp1);
    }
    else
    {
      op->vtkBalloonWidget::UpdateBalloonString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_UpdateBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->UpdateBalloonImage(temp0, temp1);
    }
    else
    {
      op->vtkBalloonWidget::UpdateBalloonImage(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetCurrentProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetCurrentProp() :
      op->vtkBalloonWidget::GetCurrentProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkAbstractPropPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
  {
    if (ap.IsBound())
    {
      op->SetPicker(temp0);
    }
    else
    {
      op->vtkBalloonWidget::SetPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->GetPicker() :
      op->vtkBalloonWidget::GetPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonWidget_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkBalloonWidget::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBalloonWidget_Methods[] = {
  {"IsTypeOf", PyvtkBalloonWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBalloonWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBalloonWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBalloonWidget\nC++: static vtkBalloonWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBalloonWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBalloonWidget\nC++: vtkBalloonWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBalloonWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBalloonWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkBalloonWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it performs special\ntimer-related operations.\n"},
  {"SetRepresentation", PyvtkBalloonWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkBalloonRepresentation) -> None\nC++: void SetRepresentation(vtkBalloonRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetBalloonRepresentation", PyvtkBalloonWidget_GetBalloonRepresentation, METH_VARARGS,
   "GetBalloonRepresentation(self) -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *GetBalloonRepresentation()\n\nReturn the representation as a vtkBalloonRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkBalloonWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"AddBalloon", PyvtkBalloonWidget_AddBalloon, METH_VARARGS,
   "AddBalloon(self, prop:vtkProp, str:str, img:vtkImageData) -> None\nC++: void AddBalloon(vtkProp *prop, const char *str,\n    vtkImageData *img)\nAddBalloon(self, prop:vtkProp, str:str) -> None\nC++: void AddBalloon(vtkProp *prop, const char *str)\n\n"},
  {"RemoveBalloon", PyvtkBalloonWidget_RemoveBalloon, METH_VARARGS,
   "RemoveBalloon(self, prop:vtkProp) -> None\nC++: void RemoveBalloon(vtkProp *prop)\n\n"},
  {"GetBalloonString", PyvtkBalloonWidget_GetBalloonString, METH_VARARGS,
   "GetBalloonString(self, prop:vtkProp) -> str\nC++: const char *GetBalloonString(vtkProp *prop)\n\nMethods to retrieve the information associated with each vtkProp\n(i.e., the information that makes up each balloon). A nullptr\nwill be returned if the vtkProp does not exist, or if a string or\nimage have not been associated with the specified vtkProp.\n"},
  {"GetBalloonImage", PyvtkBalloonWidget_GetBalloonImage, METH_VARARGS,
   "GetBalloonImage(self, prop:vtkProp) -> vtkImageData\nC++: vtkImageData *GetBalloonImage(vtkProp *prop)\n\n"},
  {"UpdateBalloonString", PyvtkBalloonWidget_UpdateBalloonString, METH_VARARGS,
   "UpdateBalloonString(self, prop:vtkProp, str:str) -> None\nC++: void UpdateBalloonString(vtkProp *prop, const char *str)\n\nUpdate the balloon string or image. If the specified prop does\nnot exist, then nothing is added not changed.\n"},
  {"UpdateBalloonImage", PyvtkBalloonWidget_UpdateBalloonImage, METH_VARARGS,
   "UpdateBalloonImage(self, prop:vtkProp, image:vtkImageData) -> None\nC++: void UpdateBalloonImage(vtkProp *prop, vtkImageData *image)\n\n"},
  {"GetCurrentProp", PyvtkBalloonWidget_GetCurrentProp, METH_VARARGS,
   "GetCurrentProp(self) -> vtkProp\nC++: virtual vtkProp *GetCurrentProp()\n\nReturn the current vtkProp that is being hovered over. Note that\nthe value may be nullptr (if hovering over nothing or the mouse\nis moving).\n"},
  {"SetPicker", PyvtkBalloonWidget_SetPicker, METH_VARARGS,
   "SetPicker(self, __a:vtkAbstractPropPicker) -> None\nC++: void SetPicker(vtkAbstractPropPicker *)\n\nSet/Get the object used to perform pick operations. Since the\nvtkBalloonWidget operates on vtkProps, the picker must be a\nsubclass of vtkAbstractPropPicker. (Note: if not specified, an\ninstance of vtkPropPicker is used.)\n"},
  {"GetPicker", PyvtkBalloonWidget_GetPicker, METH_VARARGS,
   "GetPicker(self) -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *GetPicker()\n\n"},
  {"RegisterPickers", PyvtkBalloonWidget_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widgets to register their pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkBalloonWidget_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("enabled"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBalloonWidget_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBalloonWidget_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("representation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBalloonWidget_SetRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBalloonWidget_SetRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("picker"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBalloonWidget_GetPicker(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBalloonWidget_SetPicker(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBalloonWidget_SetPicker(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPicker/SetPicker\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("balloon_representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBalloonWidget_GetBalloonRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBalloonRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("current_prop"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBalloonWidget_GetCurrentProp(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCurrentProp\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkBalloonWidget_Doc =
  "vtkBalloonWidget - popup text balloons above instance of vtkProp when\nhovering occurs\n\n"
  "Superclass: vtkHoverWidget\n\n"
  "The vtkBalloonWidget is used to popup text and/or an image when the\n"
  "mouse hovers over an instance of vtkProp. The widget keeps track of\n"
  "(vtkProp,vtkBalloon) pairs (where the internal vtkBalloon class is\n"
  "defined by a pair of vtkStdString and vtkImageData), and when the\n"
  "mouse stops moving for a user-specified period of time over the\n"
  "vtkProp, then the vtkBalloon is drawn nearby the vtkProp. Note that\n"
  "an instance of vtkBalloonRepresentation is used to draw the balloon.\n\n"
  "To use this widget, specify an instance of vtkBalloonWidget and a\n"
  "representation (e.g., vtkBalloonRepresentation). Then list all\n"
  "instances of vtkProp, a text string, and/or an instance of\n"
  "vtkImageData to be associated with each vtkProp. (Note that you can\n"
  "specify both text and an image, or just one or the other.) You may\n"
  "also wish to specify the hover delay (i.e., set in the superclass\n"
  "vtkHoverWidget).\n\n"
  "@par Event Bindings: By default, the widget observes the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  MouseMoveEvent - occurs when mouse is moved in render window.\n"
  "  TimerEvent - occurs when the time between events (e.g., mouse move)\n"
  "               is greater than TimerDuration.\n"
  "  KeyPressEvent - when the \"Enter\" key is pressed after the balloon\n"
  "appears,\n"
  "                  a callback is activated (e.g.,\n"
  "WidgetActivateEvent). \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkBalloonWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Move -- start the timer\n"
  "  vtkWidgetEvent::TimedOut -- when hovering occurs,\n"
  "  vtkWidgetEvent::SelectAction -- activate any callbacks associated\n"
  "                                  with the balloon. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::TimerEvent (when hovering is determined to occur)\n"
  "  vtkCommand::EndInteractionEvent (after a hover has occurred and the\n"
  "                                   mouse begins moving again).\n"
  "  vtkCommand::WidgetActivateEvent (when the balloon is selected with\n"
  "a\n"
  "                                   keypress). \n\n"
  "@sa\n"
  "vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBalloonWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBalloonWidget", // tp_name
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
  PyvtkBalloonWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBalloonWidget_StaticNew()
{
  return vtkBalloonWidget::New();
}

PyObject *PyvtkBalloonWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBalloonWidget_Type, PyvtkBalloonWidget_Methods,
    "vtkBalloonWidget",
 &PyvtkBalloonWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHoverWidget_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkBalloonWidget_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBalloonWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBalloonWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBalloonWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

