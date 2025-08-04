// python wrapper for vtkDataRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDataRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDataRepresentation_ClassNew(); }


static PyObject *
PyvtkDataRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataRepresentation *tempr = vtkDataRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataRepresentation::NewInstance());

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
PyvtkDataRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputConnection(temp0, temp1) :
      op->vtkDataRepresentation::GetInputConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkDataRepresentation::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLink(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetAnnotationLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

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
      op->vtkDataRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Select(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::Select(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Select(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataRepresentation::Select(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataRepresentation_Select_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Select_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_Annotate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkAnnotationLayers *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers"))
  {
    if (ap.IsBound())
    {
      op->Annotate(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::Annotate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkAnnotationLayers *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Annotate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataRepresentation::Annotate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataRepresentation_Annotate_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Annotate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Annotate");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkDataRepresentation::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkDataRepresentation::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkDataRepresentation::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_UpdateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->UpdateSelection(temp0);
    }
    else
    {
      op->vtkDataRepresentation::UpdateSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateSelection(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::UpdateSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataRepresentation_UpdateSelection_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateSelection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateSelection");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers"))
  {
    if (ap.IsBound())
    {
      op->UpdateAnnotations(temp0);
    }
    else
    {
      op->vtkDataRepresentation::UpdateAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateAnnotations(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::UpdateAnnotations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataRepresentation_UpdateAnnotations_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateAnnotations_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateAnnotations");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort() :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalAnnotationOutputPort");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort() :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalSelectionOutputPort");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort() :
      op->vtkDataRepresentation::GetInternalOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalOutputPort");
  return nullptr;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionType() :
      op->vtkDataRepresentation::GetSelectionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionArrayNames(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSelectionArrayNames() :
      op->vtkDataRepresentation::GetSelectionArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionArrayName(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelectionArrayName() :
      op->vtkDataRepresentation::GetSelectionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ConvertSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->ConvertSelection(temp0, temp1) :
      op->vtkDataRepresentation::ConvertSelection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDataRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataRepresentation\nC++: static vtkDataRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataRepresentation\nC++: vtkDataRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInputConnection", PyvtkDataRepresentation_GetInputConnection, METH_VARARGS,
   "GetInputConnection(self, port:int=0, index:int=0)\n    -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port=0,\n    int index=0)\n\nConvenience override method for obtaining the input connection\nwithout specifying the port or index.\n"},
  {"GetAnnotationLink", PyvtkDataRepresentation_GetAnnotationLink, METH_VARARGS,
   "GetAnnotationLink(self) -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nThe annotation link for this representation. To link annotations,\nset the same vtkAnnotationLink object in multiple\nrepresentations.\n"},
  {"SetAnnotationLink", PyvtkDataRepresentation_SetAnnotationLink, METH_VARARGS,
   "SetAnnotationLink(self, link:vtkAnnotationLink) -> None\nC++: void SetAnnotationLink(vtkAnnotationLink *link)\n\n"},
  {"ApplyViewTheme", PyvtkDataRepresentation_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to this representation. Subclasses should override\nthis method.\n"},
  {"Select", PyvtkDataRepresentation_Select, METH_VARARGS,
   "Select(self, view:vtkView, selection:vtkSelection) -> None\nC++: void Select(vtkView *view, vtkSelection *selection)\nSelect(self, view:vtkView, selection:vtkSelection, extend:bool)\n    -> None\nC++: void Select(vtkView *view, vtkSelection *selection,\n    bool extend)\n\nThe view calls this method when a selection occurs. The\nrepresentation takes this selection and converts it into a\nselection on its data by calling ConvertSelection, then calls\nUpdateSelection with the converted selection. Subclasses should\nnot override this method, but should instead override\nConvertSelection. The optional third argument specifies whether\nthe selection should be added to the previous selection on this\nrepresentation.\n"},
  {"Annotate", PyvtkDataRepresentation_Annotate, METH_VARARGS,
   "Annotate(self, view:vtkView, annotations:vtkAnnotationLayers)\n    -> None\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations)\nAnnotate(self, view:vtkView, annotations:vtkAnnotationLayers,\n    extend:bool) -> None\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations, bool extend)\n\nAnalogous to Select(). The view calls this method when it needs\nto change the underlying annotations (some views might perform\nthe creation of annotations). The representation takes the\nannotations and converts them into a selection on its data by\ncalling ConvertAnnotations, then calls UpdateAnnotations with the\nconverted selection. Subclasses should not override this method,\nbut should instead override ConvertSelection. The optional third\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"SetSelectable", PyvtkDataRepresentation_SetSelectable, METH_VARARGS,
   "SetSelectable(self, _arg:bool) -> None\nC++: virtual void SetSelectable(bool _arg)\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {"GetSelectable", PyvtkDataRepresentation_GetSelectable, METH_VARARGS,
   "GetSelectable(self) -> bool\nC++: virtual bool GetSelectable()\n\n"},
  {"SelectableOn", PyvtkDataRepresentation_SelectableOn, METH_VARARGS,
   "SelectableOn(self) -> None\nC++: virtual void SelectableOn()\n\n"},
  {"SelectableOff", PyvtkDataRepresentation_SelectableOff, METH_VARARGS,
   "SelectableOff(self) -> None\nC++: virtual void SelectableOff()\n\n"},
  {"UpdateSelection", PyvtkDataRepresentation_UpdateSelection, METH_VARARGS,
   "UpdateSelection(self, selection:vtkSelection) -> None\nC++: void UpdateSelection(vtkSelection *selection)\nUpdateSelection(self, selection:vtkSelection, extend:bool) -> None\nC++: void UpdateSelection(vtkSelection *selection, bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not override this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"UpdateAnnotations", PyvtkDataRepresentation_UpdateAnnotations, METH_VARARGS,
   "UpdateAnnotations(self, annotations:vtkAnnotationLayers) -> None\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations)\nUpdateAnnotations(self, annotations:vtkAnnotationLayers,\n    extend:bool) -> None\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations,\n    bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not override this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"GetInternalAnnotationOutputPort", PyvtkDataRepresentation_GetInternalAnnotationOutputPort, METH_VARARGS,
   "GetInternalAnnotationOutputPort(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort()\nGetInternalAnnotationOutputPort(self, port:int)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port)\nGetInternalAnnotationOutputPort(self, port:int, conn:int)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port, int conn)\n\nThe output port that contains the annotations whose selections\nare localized for a particular input data object. This should be\nused when connecting the internal pipelines.\n"},
  {"GetInternalSelectionOutputPort", PyvtkDataRepresentation_GetInternalSelectionOutputPort, METH_VARARGS,
   "GetInternalSelectionOutputPort(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort()\nGetInternalSelectionOutputPort(self, port:int)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port)\nGetInternalSelectionOutputPort(self, port:int, conn:int)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port, int conn)\n\nThe output port that contains the selection associated with the\ncurrent annotation (normally the interactive selection). This\nshould be used when connecting the internal pipelines.\n"},
  {"GetInternalOutputPort", PyvtkDataRepresentation_GetInternalOutputPort, METH_VARARGS,
   "GetInternalOutputPort(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort()\nGetInternalOutputPort(self, port:int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port)\nGetInternalOutputPort(self, port:int, conn:int)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port,\n    int conn)\n\nRetrieves an output port for the input data object at the\nspecified port and connection index. This may be connected to the\nrepresentation's internal pipeline.\n"},
  {"SetSelectionType", PyvtkDataRepresentation_SetSelectionType, METH_VARARGS,
   "SetSelectionType(self, _arg:int) -> None\nC++: virtual void SetSelectionType(int _arg)\n\nSet the selection type produced by this view. This should be one\nof the content type constants defined in vtkSelectionNode.h.\nCommon values are vtkSelectionNode::INDICES\nvtkSelectionNode::PEDIGREEIDS vtkSelectionNode::VALUES\n"},
  {"GetSelectionType", PyvtkDataRepresentation_GetSelectionType, METH_VARARGS,
   "GetSelectionType(self) -> int\nC++: virtual int GetSelectionType()\n\n"},
  {"SetSelectionArrayNames", PyvtkDataRepresentation_SetSelectionArrayNames, METH_VARARGS,
   "SetSelectionArrayNames(self, names:vtkStringArray) -> None\nC++: virtual void SetSelectionArrayNames(vtkStringArray *names)\n\nIf a VALUES selection, the arrays used to produce a selection.\n"},
  {"GetSelectionArrayNames", PyvtkDataRepresentation_GetSelectionArrayNames, METH_VARARGS,
   "GetSelectionArrayNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSelectionArrayNames()\n\n"},
  {"SetSelectionArrayName", PyvtkDataRepresentation_SetSelectionArrayName, METH_VARARGS,
   "SetSelectionArrayName(self, name:str) -> None\nC++: virtual void SetSelectionArrayName(const char *name)\n\nIf a VALUES selection, the array used to produce a selection.\n"},
  {"GetSelectionArrayName", PyvtkDataRepresentation_GetSelectionArrayName, METH_VARARGS,
   "GetSelectionArrayName(self) -> str\nC++: virtual const char *GetSelectionArrayName()\n\n"},
  {"ConvertSelection", PyvtkDataRepresentation_ConvertSelection, METH_VARARGS,
   "ConvertSelection(self, view:vtkView, selection:vtkSelection)\n    -> vtkSelection\nC++: virtual vtkSelection *ConvertSelection(vtkView *view,\n    vtkSelection *selection)\n\nConvert the selection to a type appropriate for sharing with\nother representations through vtkAnnotationLink, possibly using\nthe view. For the superclass, we just return the same selection.\nSubclasses may do something more fancy, like convert the\nselection from a frustum to a list of pedigree ids.  If the\nselection cannot be applied to this representation, return\nnullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDataRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("annotation_link"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetAnnotationLink(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataRepresentation_SetAnnotationLink(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataRepresentation_SetAnnotationLink(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAnnotationLink/SetAnnotationLink\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selectable"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetSelectable(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataRepresentation_SetSelectable(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataRepresentation_SetSelectable(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectable/SetSelectable\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetSelectionType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataRepresentation_SetSelectionType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataRepresentation_SetSelectionType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionType/SetSelectionType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_array_names"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetSelectionArrayNames(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataRepresentation_SetSelectionArrayNames(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataRepresentation_SetSelectionArrayNames(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionArrayNames/SetSelectionArrayNames\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetSelectionArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataRepresentation_SetSelectionArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataRepresentation_SetSelectionArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionArrayName/SetSelectionArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("internal_annotation_output_port"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetInternalAnnotationOutputPort(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInternalAnnotationOutputPort\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("internal_selection_output_port"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetInternalSelectionOutputPort(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInternalSelectionOutputPort\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("internal_output_port"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDataRepresentation_GetInternalOutputPort(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInternalOutputPort\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDataRepresentation_Doc =
  "vtkDataRepresentation - The superclass for all representations\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkDataRepresentation the superclass for representations of data\n"
  "objects. This class itself may be instantiated and used as a\n"
  "representation that simply holds a connection to a pipeline.\n\n"
  "If there are multiple representations present in a view, you should\n"
  "use a subclass of vtkDataRepresentation.  The representation is\n"
  "responsible for taking the input pipeline connection and converting\n"
  "it to an object usable by a view.  In the most common case, the\n"
  "representation will contain the pipeline necessary to convert a data\n"
  "object into an actor or set of actors.\n\n"
  "The representation has a concept of a selection.  If the user\n"
  "performs a selection operation on the view, the view forwards this on\n"
  "to its representations.  The representation is responsible for\n"
  "displaying that selection in an appropriate way.\n\n"
  "Representation selections may also be linked.  The representation\n"
  "shares the selection by converting it into a view-independent format,\n"
  "then setting the selection on its vtkAnnotationLink.  Other\n"
  "representations sharing the same selection link instance will get the\n"
  "same selection from the selection link when the view is updated.  The\n"
  "application is responsible for linking representations as appropriate\n"
  "by setting the same vtkAnnotationLink on each linked representation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsCore.vtkDataRepresentation", // tp_name
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
  PyvtkDataRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataRepresentation_StaticNew()
{
  return vtkDataRepresentation::New();
}

PyObject *PyvtkDataRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataRepresentation_Type, PyvtkDataRepresentation_Methods,
    "vtkDataRepresentation",
 &PyvtkDataRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDataRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

