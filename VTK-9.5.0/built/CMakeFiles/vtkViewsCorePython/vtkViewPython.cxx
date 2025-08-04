// python wrapper for vtkView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkView(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkView_ClassNew(); }


static PyObject *
PyvtkView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkView *tempr = vtkView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkView::NewInstance());

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
PyvtkView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->AddRepresentation(temp0);
    }
    else
    {
      op->vtkView::AddRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkView::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_AddRepresentationFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentationFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->AddRepresentationFromInputConnection(temp0) :
      op->vtkView::AddRepresentationFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_SetRepresentationFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetRepresentationFromInputConnection(temp0) :
      op->vtkView::SetRepresentationFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_AddRepresentationFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentationFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->AddRepresentationFromInput(temp0) :
      op->vtkView::AddRepresentationFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_SetRepresentationFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetRepresentationFromInput(temp0) :
      op->vtkView::SetRepresentationFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_RemoveRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkView::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkView_RemoveRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkView::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkView_RemoveRepresentation_Methods[] = {
  {"RemoveRepresentation", PyvtkView_RemoveRepresentation_s1, METH_VARARGS,
   "@V *vtkDataRepresentation"},
  {"RemoveRepresentation", PyvtkView_RemoveRepresentation_s2, METH_VARARGS,
   "@V *vtkAlgorithmOutput"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkView_RemoveRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkView_RemoveRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveRepresentation");
  return nullptr;
}


static PyObject *
PyvtkView_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRepresentations();
    }
    else
    {
      op->vtkView::RemoveAllRepresentations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_GetNumberOfRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRepresentations() :
      op->vtkView::GetNumberOfRepresentations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation(temp0) :
      op->vtkView::GetRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_IsRepresentationPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRepresentationPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRepresentationPresent(temp0) :
      op->vtkView::IsRepresentationPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkView::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_GetObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetObserver() :
      op->vtkView::GetObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkView_RegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkObject *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->RegisterProgress(temp0, temp1);
    }
    else
    {
      op->vtkView::RegisterProgress(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkView_UnRegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProgress(temp0);
    }
    else
    {
      op->vtkView::UnRegisterProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkView_Methods[] = {
  {"IsTypeOf", PyvtkView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkView\nC++: static vtkView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkView\nC++: vtkView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddRepresentation", PyvtkView_AddRepresentation, METH_VARARGS,
   "AddRepresentation(self, rep:vtkDataRepresentation) -> None\nC++: void AddRepresentation(vtkDataRepresentation *rep)\n\nAdds the representation to the view.\n"},
  {"SetRepresentation", PyvtkView_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, rep:vtkDataRepresentation) -> None\nC++: void SetRepresentation(vtkDataRepresentation *rep)\n\nSet the representation to the view.\n"},
  {"AddRepresentationFromInputConnection", PyvtkView_AddRepresentationFromInputConnection, METH_VARARGS,
   "AddRepresentationFromInputConnection(self,\n    conn:vtkAlgorithmOutput) -> vtkDataRepresentation\nC++: vtkDataRepresentation *AddRepresentationFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nConvenience method which creates a simple representation with the\nconnection and adds it to the view. Returns the representation\ninternally created. NOTE: The returned representation pointer is\nnot reference-counted, so you MUST call Register() on the\nrepresentation if you want to keep a reference to it.\n"},
  {"SetRepresentationFromInputConnection", PyvtkView_SetRepresentationFromInputConnection, METH_VARARGS,
   "SetRepresentationFromInputConnection(self,\n    conn:vtkAlgorithmOutput) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetRepresentationFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nConvenience method which sets the representation with the\nconnection and adds it to the view. Returns the representation\ninternally created. NOTE: The returned representation pointer is\nnot reference-counted, so you MUST call Register() on the\nrepresentation if you want to keep a reference to it.\n"},
  {"AddRepresentationFromInput", PyvtkView_AddRepresentationFromInput, METH_VARARGS,
   "AddRepresentationFromInput(self, input:vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *AddRepresentationFromInput(\n    vtkDataObject *input)\n\nConvenience method which creates a simple representation with the\nspecified input and adds it to the view. NOTE: The returned\nrepresentation pointer is not reference-counted, so you MUST call\nRegister() on the representation if you want to keep a reference\nto it.\n"},
  {"SetRepresentationFromInput", PyvtkView_SetRepresentationFromInput, METH_VARARGS,
   "SetRepresentationFromInput(self, input:vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetRepresentationFromInput(\n    vtkDataObject *input)\n\nConvenience method which sets the representation to the specified\ninput and adds it to the view. NOTE: The returned representation\npointer is not reference-counted, so you MUST call Register() on\nthe representation if you want to keep a reference to it.\n"},
  {"RemoveRepresentation", PyvtkView_RemoveRepresentation, METH_VARARGS,
   "RemoveRepresentation(self, rep:vtkDataRepresentation) -> None\nC++: void RemoveRepresentation(vtkDataRepresentation *rep)\nRemoveRepresentation(self, rep:vtkAlgorithmOutput) -> None\nC++: void RemoveRepresentation(vtkAlgorithmOutput *rep)\n\nRemoves the representation from the view.\n"},
  {"RemoveAllRepresentations", PyvtkView_RemoveAllRepresentations, METH_VARARGS,
   "RemoveAllRepresentations(self) -> None\nC++: void RemoveAllRepresentations()\n\nRemoves all representations from the view.\n"},
  {"GetNumberOfRepresentations", PyvtkView_GetNumberOfRepresentations, METH_VARARGS,
   "GetNumberOfRepresentations(self) -> int\nC++: int GetNumberOfRepresentations()\n\nReturns the number of representations from first port(0) in this\nview.\n"},
  {"GetRepresentation", PyvtkView_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self, index:int=0) -> vtkDataRepresentation\nC++: vtkDataRepresentation *GetRepresentation(int index=0)\n\nThe representation at a specified index.\n"},
  {"IsRepresentationPresent", PyvtkView_IsRepresentationPresent, METH_VARARGS,
   "IsRepresentationPresent(self, rep:vtkDataRepresentation) -> bool\nC++: bool IsRepresentationPresent(vtkDataRepresentation *rep)\n\nCheck to see if a representation is present in the view.\n"},
  {"Update", PyvtkView_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nUpdate the view.\n"},
  {"ApplyViewTheme", PyvtkView_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to the view.\n"},
  {"GetObserver", PyvtkView_GetObserver, METH_VARARGS,
   "GetObserver(self) -> vtkCommand\nC++: vtkCommand *GetObserver()\n\nReturns the observer that the subclasses can use to listen to\nadditional events. Additionally these subclasses should override\nProcessEvents() to handle these events.\n"},
  {"RegisterProgress", PyvtkView_RegisterProgress, METH_VARARGS,
   "RegisterProgress(self, algorithm:vtkObject, message:str=...)\n    -> None\nC++: void RegisterProgress(vtkObject *algorithm,\n    const char *message=nullptr)\n\nMeant for use by subclasses and vtkRepresentation subclasses.\nCall this method to register vtkObjects (generally vtkAlgorithm\nsubclasses) which fire vtkCommand::ProgressEvent with the view.\nThe view listens to vtkCommand::ProgressEvent and fires\nViewProgressEvent with ViewProgressEventCallData containing the\nmessage and the progress amount. If message is not provided, then\nthe class name for the algorithm is used.\n"},
  {"UnRegisterProgress", PyvtkView_UnRegisterProgress, METH_VARARGS,
   "UnRegisterProgress(self, algorithm:vtkObject) -> None\nC++: void UnRegisterProgress(vtkObject *algorithm)\n\nUnregister objects previously registered with RegisterProgress.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkView_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("representation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkView_SetRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkView_SetRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("observer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkView_GetObserver(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetObserver\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkView_Doc =
  "vtkView - The superclass for all views.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkView is the superclass for views.  A view is generally an area of\n"
  "an application's canvas devoted to displaying one or more VTK data\n"
  "objects. Associated representations (subclasses of\n"
  "vtkDataRepresentation) are responsible for converting the data into a\n"
  "displayable format.  These representations are then added to the\n"
  "view.\n\n"
  "For views which display only one data object at a time you may set a\n"
  "data object or pipeline connection directly on the view itself (e.g.\n"
  "vtkGraphLayoutView, vtkLandscapeView, vtkTreeMapView). The view will\n"
  "internally create a vtkDataRepresentation for the data.\n\n"
  "A view has the concept of linked selection.  If the same data is\n"
  "displayed in multiple views, their selections may be linked by\n"
  "setting the same vtkAnnotationLink on their representations (see\n"
  "vtkDataRepresentation).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsCore.vtkView", // tp_name
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
  PyvtkView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkView_StaticNew()
{
  return vtkView::New();
}

PyObject *PyvtkView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkView_Type, PyvtkView_Methods,
    "vtkView",
 &PyvtkView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkView_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkView", o) != 0)
  {
    Py_DECREF(o);
  }

}

