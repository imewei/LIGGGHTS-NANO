// python wrapper for vtkMPIController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMPIController.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMPIController(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMPIController_ClassNew(); }


static PyObject *
PyvtkMPIController_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPIController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPIController *tempr = vtkMPIController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIController::NewInstance());

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
PyvtkMPIController_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMPIController::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMPIController::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkMPIController::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkMPIController::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Finalize(temp0);
    }
    else
    {
      op->vtkMPIController::Finalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMPIController_Finalize_s1(self, args);
    case 1:
      return PyvtkMPIController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}


static PyObject *
PyvtkMPIController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkMPIController::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkMPIController::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputWindow();
    }
    else
    {
      op->vtkMPIController::CreateOutputWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_ErrorString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ErrorString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = vtkMPIController::ErrorString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkMPICommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetCommunicator(temp0);
    }
    else
    {
      op->vtkMPIController::SetCommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkProcessGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
  {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->CreateSubController(temp0) :
      op->vtkMPIController::CreateSubController(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->PartitionController(temp0, temp1) :
      op->vtkMPIController::PartitionController(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_Iprobe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3) :
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Iprobe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Iprobe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned long> store4(2*size4);
  unsigned long *temp4 = store4.Data();
  unsigned long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Iprobe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  const char *temp4 = nullptr;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Iprobe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIController_Iprobe_Methods[] = {
  {"Iprobe", PyvtkMPIController_Iprobe_s2, METH_VARARGS,
   "@iiPPPP *i *i *i *i"},
  {"Iprobe", PyvtkMPIController_Iprobe_s3, METH_VARARGS,
   "@iiPPPP *i *i *L *i"},
  {"Iprobe", PyvtkMPIController_Iprobe_s4, METH_VARARGS,
   "@iiPPzP *i *i *i"},
  {"Iprobe", PyvtkMPIController_Iprobe_s5, METH_VARARGS,
   "@iiPPPP *i *i *d *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMPIController_Iprobe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPIController_Iprobe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMPIController_Iprobe_s1(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Iprobe");
  return nullptr;
}


static PyObject *
PyvtkMPIController_CanProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProbe() :
      op->vtkMPIController::CanProbe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_Probe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2) :
      op->vtkMPIController::Probe(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Probe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPIController::Probe(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Probe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned long> store3(2*size3);
  unsigned long *temp3 = store3.Data();
  unsigned long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPIController::Probe(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Probe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const char *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPIController::Probe(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPIController_Probe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPIController::Probe(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIController_Probe_Methods[] = {
  {"Probe", PyvtkMPIController_Probe_s2, METH_VARARGS,
   "@iiPPP *i *i *i"},
  {"Probe", PyvtkMPIController_Probe_s3, METH_VARARGS,
   "@iiPPP *i *L *i"},
  {"Probe", PyvtkMPIController_Probe_s4, METH_VARARGS,
   "@iiPzP *i *i"},
  {"Probe", PyvtkMPIController_Probe_s5, METH_VARARGS,
   "@iiPPP *i *d *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMPIController_Probe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPIController_Probe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMPIController_Probe_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Probe");
  return nullptr;
}


static PyObject *
PyvtkMPIController_GetProcessorName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessorName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMPIController::GetProcessorName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_SetUseSsendForRMI(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseSsendForRMI");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMPIController::SetUseSsendForRMI(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIController_GetUseSsendForRMI(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseSsendForRMI");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMPIController::GetUseSsendForRMI();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIController_Methods[] = {
  {"IsTypeOf", PyvtkMPIController_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPIController_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPIController_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMPIController\nC++: static vtkMPIController *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPIController_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMPIController\nC++: vtkMPIController *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMPIController_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMPIController_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkMPIController_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nSame as Initialize(0, 0, 1). Mainly for calling from wrapped\nlanguages.\n"},
  {"Finalize", PyvtkMPIController_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\nFinalize(self, finalizedExternally:int) -> None\nC++: void Finalize(int finalizedExternally) override;\n\nThis method is for cleaning up and has to be called before the\nend of the program if MPI was initialized with Initialize()\n"},
  {"SingleMethodExecute", PyvtkMPIController_SingleMethodExecute, METH_VARARGS,
   "SingleMethodExecute(self) -> None\nC++: void SingleMethodExecute() override;\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.\n"},
  {"MultipleMethodExecute", PyvtkMPIController_MultipleMethodExecute, METH_VARARGS,
   "MultipleMethodExecute(self) -> None\nC++: void MultipleMethodExecute() override;\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {"CreateOutputWindow", PyvtkMPIController_CreateOutputWindow, METH_VARARGS,
   "CreateOutputWindow(self) -> None\nC++: void CreateOutputWindow() override;\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {"ErrorString", PyvtkMPIController_ErrorString, METH_VARARGS,
   "ErrorString(err:int) -> str\nC++: static char *ErrorString(int err)\n\nGiven an MPI error code, return a string which contains an error\nmessage. This string has to be freed by the user.\n"},
  {"SetCommunicator", PyvtkMPIController_SetCommunicator, METH_VARARGS,
   "SetCommunicator(self, comm:vtkMPICommunicator) -> None\nC++: void SetCommunicator(vtkMPICommunicator *comm)\n\nMPIController uses this communicator in all sends and receives.\nBy default, MPI_COMM_WORLD is used. THIS SHOULD ONLY BE CALLED ON\nTHE PROCESSES INCLUDED IN THE COMMUNICATOR. FOR EXAMPLE, IF THE\nCOMMUNICATOR CONTAINS PROCESSES 0 AND 1, INVOKING THIS METHOD ON\nANY OTHER PROCESS WILL CAUSE AN MPI ERROR AND POSSIBLY LEAD TO A\nCRASH.\n"},
  {"CreateSubController", PyvtkMPIController_CreateSubController, METH_VARARGS,
   "CreateSubController(self, group:vtkProcessGroup)\n    -> vtkMPIController\nC++: vtkMPIController *CreateSubController(vtkProcessGroup *group)\n     override;\n\nCreates a new controller with the processes specified by the\ngiven group. The new controller will already be initialized for\nyou.  You are responsible for deleting the controller once you\nare done.  It is invalid to pass this method a group with a\ndifferent communicator than is used by this controller.  This\noperation is collective across all processes defined in the\ngroup.  It is undefined what will happen if the group is not the\nsame on all processes.  This method must be called by all\nprocesses in the controller regardless of whether they are in the\ngroup.  nullptr is returned on all process not in the group.\n"},
  {"PartitionController", PyvtkMPIController_PartitionController, METH_VARARGS,
   "PartitionController(self, localColor:int, localKey:int)\n    -> vtkMPIController\nC++: vtkMPIController *PartitionController(int localColor,\n    int localKey) override;\n\nPartitions this controller based on a coloring.  That is, each\nprocess passes in a color.  All processes with the same color are\ngrouped into the same partition.  The processes are ordered by\ntheir self-assigned key. Lower keys have lower process ids.  Ties\nare broken by the current process ids.  (For example, if all the\nkeys are 0, then the resulting processes will be ordered in the\nsame way.)  This method returns a new controller to each process\nthat represents the local partition.  This is basically the same\noperation as MPI_Comm_split.\n"},
  {"Iprobe", PyvtkMPIController_Iprobe, METH_VARARGS,
   "Iprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     int *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     unsigned long *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:str, size:[int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     const char *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[float, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     double *type, int *size)\n\nNonblocking test for a message.  Inputs are: source -- the source\nrank or ANY_SOURCE; tag -- the tag value.  Outputs are: flag --\nTrue if a message matches; actualSource -- the rank sending the\nmessage (useful if ANY_SOURCE is used) if flag is True and\nactualSource isn't nullptr; size -- the length of the message in\nbytes if flag is true (only set if size isn't nullptr). The\nreturn value is 1 for success and 0 otherwise. Note: These\nmethods delegate to the communicator\n"},
  {"CanProbe", PyvtkMPIController_CanProbe, METH_VARARGS,
   "CanProbe(self) -> bool\nC++: bool CanProbe() override;\n\nThis controller does have probing capability\n"},
  {"Probe", PyvtkMPIController_Probe, METH_VARARGS,
   "Probe(self, source:int, tag:int, actualSource:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource) override;\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource, int *type,\n    int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    unsigned long *type, int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:str, size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    const char *type, int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[float, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    double *type, int *size)\n\nBlocking test for a message.  Inputs are: source -- the source\nrank or ANY_SOURCE; tag -- the tag value.  Outputs are:\nactualSource -- the rank sending the message (useful if\nANY_SOURCE is used) if actualSource isn't nullptr; size -- the\nlength of the message in bytes if flag is true (only set if size\nisn't nullptr). The return value is 1 for success and 0\notherwise. Note: These methods delegate to the communicator\n"},
  {"GetProcessorName", PyvtkMPIController_GetProcessorName, METH_VARARGS,
   "GetProcessorName() -> str\nC++: static const char *GetProcessorName()\n\n"},
  {"SetUseSsendForRMI", PyvtkMPIController_SetUseSsendForRMI, METH_VARARGS,
   "SetUseSsendForRMI(use_send:int) -> None\nC++: static void SetUseSsendForRMI(int use_send)\n\nWhen set to 1, TriggerRMI uses Ssend() instead of Send() calls.\nOff (0) by default.\n"},
  {"GetUseSsendForRMI", PyvtkMPIController_GetUseSsendForRMI, METH_VARARGS,
   "GetUseSsendForRMI() -> int\nC++: static int GetUseSsendForRMI()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMPIController_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("communicator"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMPIController_SetCommunicator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMPIController_SetCommunicator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCommunicator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_ssend_for_rmi"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPIController_GetUseSsendForRMI(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMPIController_SetUseSsendForRMI(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMPIController_SetUseSsendForRMI(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseSsendForRMI/SetUseSsendForRMI\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("processor_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPIController_GetProcessorName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetProcessorName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMPIController_Doc =
  "vtkMPIController - Process communication using MPI\n\n"
  "Superclass: vtkMultiProcessController\n\n"
  "vtkMPIController is a concrete class which implements the abstract\n"
  "multi-process control methods defined in vtkMultiProcessController\n"
  "using MPI (Message Passing Interface) cf. Using MPI / Portable\n"
  "Parallel Programming with the Message-Passing Interface, Gropp et al,\n"
  "MIT Press. It also provide functionality specific to MPI and not\n"
  "present in vtkMultiProcessController. Before any MPI communication\n"
  "can occur Initialize() must be called by all processes. It is\n"
  "required to be called once, controllers created after this need not\n"
  "call Initialize(). At the end of the program Finalize() must be\n"
  "called by all processes.\n\n"
  "The use of user-defined communicators are supported with the\n"
  "CreateSubController method.  Note that a duplicate of the user\n"
  "defined communicator is used for internal communications (RMIs). \n"
  "This communicator has the same properties as the user one except that\n"
  "it has a new context which prevents the two communicators from\n"
  "interfering with each other.\n\n"
  "@sa\n"
  "vtkOutputPort vtkInputPort  vtkMultiProcessController\n"
  "vtkMPICommunicator vtkProcessGroup\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMPIController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelMPI.vtkMPIController", // tp_name
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
  PyvtkMPIController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPIController_StaticNew()
{
  return vtkMPIController::New();
}

PyObject *PyvtkMPIController_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMPIController_Type, PyvtkMPIController_Methods,
    "vtkMPIController",
 &PyvtkMPIController_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiProcessController");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMPIController_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPIController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPIController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPIController", o) != 0)
  {
    Py_DECREF(o);
  }

}

