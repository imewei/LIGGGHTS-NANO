// python wrapper for vtkMPICommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMPICommunicator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMPICommunicator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMPICommunicator_ClassNew(); }


static PyObject *
PyvtkMPICommunicator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPICommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPICommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPICommunicator *tempr = vtkMPICommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPICommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPICommunicator::NewInstance());

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
PyvtkMPICommunicator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMPICommunicator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMPICommunicator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetWorldCommunicator(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWorldCommunicator");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMPICommunicator *tempr = vtkMPICommunicator::GetWorldCommunicator();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkProcessGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkMPICommunicator::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SplitInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkCommunicator *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCommunicator") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SplitInitialize(temp0, temp1, temp2) :
      op->vtkMPICommunicator::SplitInitialize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkMPICommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkMPICommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkMPICommunicator::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->BroadcastVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkMPICommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkMPICommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkMPICommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMPICommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkMPICommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkMPICommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMPICommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkMPICommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkMPICommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkMPICommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    int tempr = (ap.IsBound() ?
      op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkMPICommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkMPICommunicator_Iprobe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3));

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
PyvtkMPICommunicator_Iprobe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store5(2*size5);
  long long *temp5 = store5.Data();
  long long *save5 = (size5 == 0 ? nullptr : temp5 + size5);
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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store5(2*size5);
  long long *temp5 = store5.Data();
  long long *save5 = (size5 == 0 ? nullptr : temp5 + size5);
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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store5(2*size5);
  long long *temp5 = store5.Data();
  long long *save5 = (size5 == 0 ? nullptr : temp5 + size5);
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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPICommunicator_Iprobe_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store5(2*size5);
  long long *temp5 = store5.Data();
  long long *save5 = (size5 == 0 ? nullptr : temp5 + size5);
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
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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

static PyMethodDef PyvtkMPICommunicator_Iprobe_Methods[] = {
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s2, METH_VARARGS,
   "@iiPPPP *i *i *i *i"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s3, METH_VARARGS,
   "@iiPPPP *i *i *L *i"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s4, METH_VARARGS,
   "@iiPPzP *i *i *i"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s5, METH_VARARGS,
   "@iiPPPP *i *i *d *i"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s6, METH_VARARGS,
   "@iiPPPP *i *i *i *k"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s7, METH_VARARGS,
   "@iiPPPP *i *i *L *k"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s8, METH_VARARGS,
   "@iiPPzP *i *i *k"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe_s9, METH_VARARGS,
   "@iiPPPP *i *i *d *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMPICommunicator_Iprobe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPICommunicator_Iprobe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMPICommunicator_Iprobe_s1(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Iprobe");
  return nullptr;
}


static PyObject *
PyvtkMPICommunicator_CanProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProbe() :
      op->vtkMPICommunicator::CanProbe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Probe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2));

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
PyvtkMPICommunicator_Probe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const char *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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
PyvtkMPICommunicator_Probe_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
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
      op->vtkMPICommunicator::Probe(temp0, temp1, temp2, temp3, temp4));

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

static PyMethodDef PyvtkMPICommunicator_Probe_Methods[] = {
  {"Probe", PyvtkMPICommunicator_Probe_s2, METH_VARARGS,
   "@iiPPP *i *i *i"},
  {"Probe", PyvtkMPICommunicator_Probe_s3, METH_VARARGS,
   "@iiPPP *i *L *i"},
  {"Probe", PyvtkMPICommunicator_Probe_s4, METH_VARARGS,
   "@iiPzP *i *i"},
  {"Probe", PyvtkMPICommunicator_Probe_s5, METH_VARARGS,
   "@iiPPP *i *d *i"},
  {"Probe", PyvtkMPICommunicator_Probe_s6, METH_VARARGS,
   "@iiPPP *i *i *k"},
  {"Probe", PyvtkMPICommunicator_Probe_s7, METH_VARARGS,
   "@iiPPP *i *L *k"},
  {"Probe", PyvtkMPICommunicator_Probe_s8, METH_VARARGS,
   "@iiPzP *i *k"},
  {"Probe", PyvtkMPICommunicator_Probe_s9, METH_VARARGS,
   "@iiPPP *i *d *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMPICommunicator_Probe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPICommunicator_Probe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMPICommunicator_Probe_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Probe");
  return nullptr;
}


static PyObject *
PyvtkMPICommunicator_GetMPIComm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIComm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPICommunicatorOpaqueComm *tempr = (ap.IsBound() ?
      op->GetMPIComm() :
      op->vtkMPICommunicator::GetMPIComm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_InitializeExternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeExternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicatorOpaqueComm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicatorOpaqueComm"))
  {
    int tempr = (ap.IsBound() ?
      op->InitializeExternal(temp0) :
      op->vtkMPICommunicator::InitializeExternal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Allocate(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Allocate");

  size_t temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = vtkMPICommunicator::Allocate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Free(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Free");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMPICommunicator::Free(temp0);

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
PyvtkMPICommunicator_SetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSsend(temp0);
    }
    else
    {
      op->vtkMPICommunicator::SetUseSsend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseSsendMinValue() :
      op->vtkMPICommunicator::GetUseSsendMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseSsendMaxValue() :
      op->vtkMPICommunicator::GetUseSsendMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseSsend() :
      op->vtkMPICommunicator::GetUseSsend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSsendOn();
    }
    else
    {
      op->vtkMPICommunicator::UseSsendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSsendOff();
    }
    else
    {
      op->vtkMPICommunicator::UseSsendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPICommunicator_CopyFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
  {
    if (ap.IsBound())
    {
      op->CopyFrom(temp0);
    }
    else
    {
      op->vtkMPICommunicator::CopyFrom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMPICommunicator_Methods[] = {
  {"IsTypeOf", PyvtkMPICommunicator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPICommunicator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPICommunicator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMPICommunicator\nC++: static vtkMPICommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPICommunicator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMPICommunicator\nC++: vtkMPICommunicator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMPICommunicator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMPICommunicator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetWorldCommunicator", PyvtkMPICommunicator_GetWorldCommunicator, METH_VARARGS,
   "GetWorldCommunicator() -> vtkMPICommunicator\nC++: static vtkMPICommunicator *GetWorldCommunicator()\n\nReturns the singleton which behaves as the global communicator\n(MPI_COMM_WORLD)\n"},
  {"Initialize", PyvtkMPICommunicator_Initialize, METH_VARARGS,
   "Initialize(self, group:vtkProcessGroup) -> int\nC++: int Initialize(vtkProcessGroup *group)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm). The group must be associated with a valid\nvtkMPICommunicator.\n"},
  {"SplitInitialize", PyvtkMPICommunicator_SplitInitialize, METH_VARARGS,
   "SplitInitialize(self, oldcomm:vtkCommunicator, color:int, key:int)\n     -> int\nC++: int SplitInitialize(vtkCommunicator *oldcomm, int color,\n    int key)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm) using MPI_Comm_split on the given communicator. Return\nvalues are 1 for success and 0 otherwise.\n"},
  {"SendVoidArray", PyvtkMPICommunicator_SendVoidArray, METH_VARARGS,
   "SendVoidArray(self, data:Pointer, length:int, type:int,\n    remoteProcessId:int, tag:int) -> int\nC++: int SendVoidArray(const void *data, vtkIdType length,\n    int type, int remoteProcessId, int tag) override;\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass. Return\nvalues are 1 for success and 0 otherwise.\n"},
  {"ReceiveVoidArray", PyvtkMPICommunicator_ReceiveVoidArray, METH_VARARGS,
   "ReceiveVoidArray(self, data:Pointer, length:int, type:int,\n    remoteProcessId:int, tag:int) -> int\nC++: int ReceiveVoidArray(void *data, vtkIdType length, int type,\n    int remoteProcessId, int tag) override;\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {"Barrier", PyvtkMPICommunicator_Barrier, METH_VARARGS,
   "Barrier(self) -> None\nC++: void Barrier() override;\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {"BroadcastVoidArray", PyvtkMPICommunicator_BroadcastVoidArray, METH_VARARGS,
   "BroadcastVoidArray(self, data:Pointer, length:int, type:int,\n    srcProcessId:int) -> int\nC++: int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId) override;\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"GatherVoidArray", PyvtkMPICommunicator_GatherVoidArray, METH_VARARGS,
   "GatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, destProcessId:int) -> int\nC++: int GatherVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int destProcessId) override;\n\n"},
  {"GatherVVoidArray", PyvtkMPICommunicator_GatherVVoidArray, METH_VARARGS,
   "GatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int, destProcessId:int) -> int\nC++: int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId) override;\n\n"},
  {"ScatterVoidArray", PyvtkMPICommunicator_ScatterVoidArray, METH_VARARGS,
   "ScatterVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, srcProcessId:int) -> int\nC++: int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId) override;\n\n"},
  {"ScatterVVoidArray", PyvtkMPICommunicator_ScatterVVoidArray, METH_VARARGS,
   "ScatterVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    type:int, srcProcessId:int) -> int\nC++: int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId) override;\n\n"},
  {"AllGatherVoidArray", PyvtkMPICommunicator_AllGatherVoidArray, METH_VARARGS,
   "AllGatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int) -> int\nC++: int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type) override;\n\n"},
  {"AllGatherVVoidArray", PyvtkMPICommunicator_AllGatherVVoidArray, METH_VARARGS,
   "AllGatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int) -> int\nC++: int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n    override;\n\n"},
  {"ReduceVoidArray", PyvtkMPICommunicator_ReduceVoidArray, METH_VARARGS,
   "ReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int, destProcessId:int) -> int\nC++: int ReduceVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int operation, int destProcessId)\n     override;\n\n"},
  {"AllReduceVoidArray", PyvtkMPICommunicator_AllReduceVoidArray, METH_VARARGS,
   "AllReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int) -> int\nC++: int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n    override;\n\n"},
  {"Iprobe", PyvtkMPICommunicator_Iprobe, METH_VARARGS,
   "Iprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     int *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     unsigned long *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:str, size:[int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     const char *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[float, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     double *type, int *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     int *type, vtkTypeInt64 *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[int, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     unsigned long *type, vtkTypeInt64 *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:str, size:[int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     const char *type, vtkTypeInt64 *size)\nIprobe(self, source:int, tag:int, flag:[int, ...],\n    actualSource:[int, ...], type:[float, ...], size:[int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     double *type, vtkTypeInt64 *size)\n\nNonblocking test ...\n [Truncated]\n"},
  {"CanProbe", PyvtkMPICommunicator_CanProbe, METH_VARARGS,
   "CanProbe(self) -> bool\nC++: bool CanProbe() override;\n\nCheck if this communicator implements a probe operation (always\ntrue for MPI communicator)\n"},
  {"Probe", PyvtkMPICommunicator_Probe, METH_VARARGS,
   "Probe(self, source:int, tag:int, actualSource:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource) override;\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource, int *type,\n    int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    unsigned long *type, int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:str, size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    const char *type, int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[float, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    double *type, int *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource, int *type,\n    vtkTypeInt64 *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[int, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    unsigned long *type, vtkTypeInt64 *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:str, size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    const char *type, vtkTypeInt64 *size)\nProbe(self, source:int, tag:int, actualSource:[int, ...],\n    type:[float, ...], size:[int, ...]) -> int\nC++: int Probe(int source, int tag, int *actualSource,\n    double *type, vtkTypeInt64 *size)\n\nBlocking test for a message.  Inputs are: source -- the source\nrank or ANY_SOURCE; tag -- the tag value.  Outputs are:\nactualSource -- the rank sending the message (useful if\nANY_SOURCE is used) if actualSource isn't nullptr; size -- the\nlength of the message in bytes if flag is true (only set if size\nisn't nullp ...\n [Truncated]\n"},
  {"GetMPIComm", PyvtkMPICommunicator_GetMPIComm, METH_VARARGS,
   "GetMPIComm(self) -> vtkMPICommunicatorOpaqueComm\nC++: vtkMPICommunicatorOpaqueComm *GetMPIComm()\n\n"},
  {"InitializeExternal", PyvtkMPICommunicator_InitializeExternal, METH_VARARGS,
   "InitializeExternal(self, comm:vtkMPICommunicatorOpaqueComm) -> int\nC++: int InitializeExternal(vtkMPICommunicatorOpaqueComm *comm)\n\n"},
  {"Allocate", PyvtkMPICommunicator_Allocate, METH_VARARGS,
   "Allocate(size:int) -> str\nC++: static char *Allocate(size_t size)\n\n"},
  {"Free", PyvtkMPICommunicator_Free, METH_VARARGS,
   "Free(ptr:str) -> None\nC++: static void Free(char *ptr)\n\n"},
  {"SetUseSsend", PyvtkMPICommunicator_SetUseSsend, METH_VARARGS,
   "SetUseSsend(self, _arg:int) -> None\nC++: virtual void SetUseSsend(int _arg)\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {"GetUseSsendMinValue", PyvtkMPICommunicator_GetUseSsendMinValue, METH_VARARGS,
   "GetUseSsendMinValue(self) -> int\nC++: virtual int GetUseSsendMinValue()\n\n"},
  {"GetUseSsendMaxValue", PyvtkMPICommunicator_GetUseSsendMaxValue, METH_VARARGS,
   "GetUseSsendMaxValue(self) -> int\nC++: virtual int GetUseSsendMaxValue()\n\n"},
  {"GetUseSsend", PyvtkMPICommunicator_GetUseSsend, METH_VARARGS,
   "GetUseSsend(self) -> int\nC++: virtual int GetUseSsend()\n\n"},
  {"UseSsendOn", PyvtkMPICommunicator_UseSsendOn, METH_VARARGS,
   "UseSsendOn(self) -> None\nC++: virtual void UseSsendOn()\n\n"},
  {"UseSsendOff", PyvtkMPICommunicator_UseSsendOff, METH_VARARGS,
   "UseSsendOff(self) -> None\nC++: virtual void UseSsendOff()\n\n"},
  {"CopyFrom", PyvtkMPICommunicator_CopyFrom, METH_VARARGS,
   "CopyFrom(self, source:vtkMPICommunicator) -> None\nC++: void CopyFrom(vtkMPICommunicator *source)\n\nCopies all the attributes of source, deleting previously stored\ndata. The MPI communicator handle is also copied. Normally, this\nshould not be needed. It is used during the construction of a new\ncommunicator for copying the world communicator, keeping the same\ncontext.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMPICommunicator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("use_ssend"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPICommunicator_GetUseSsend(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMPICommunicator_SetUseSsend(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMPICommunicator_SetUseSsend(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseSsend/SetUseSsend\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("world_communicator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPICommunicator_GetWorldCommunicator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWorldCommunicator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("mpi_comm"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMPICommunicator_GetMPIComm(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMPIComm\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMPICommunicator_Doc =
  "vtkMPICommunicator - Class for creating user defined MPI\ncommunicators.\n\n"
  "Superclass: vtkCommunicator\n\n"
  "This class can be used to create user defined MPI communicators. The\n"
  "actual creation (with MPI_Comm_create) occurs in Initialize which\n"
  "takes as arguments a super-communicator and a group of process ids.\n"
  "The new communicator is created by including the processes contained\n"
  "in the group. The global communicator (equivalent to MPI_COMM_WORLD)\n"
  "can be obtained using the class method GetWorldCommunicator. It is\n"
  "important to note that this communicator should not be used on the\n"
  "processes not contained in the group. For example, if the group\n"
  "contains processes 0 and 1, controller->SetCommunicator(communicator)\n"
  "would cause an MPI error on any other process.\n\n"
  "@sa\n"
  "vtkMPIController vtkProcessGroup\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMPICommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelMPI.vtkMPICommunicator", // tp_name
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
  PyvtkMPICommunicator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPICommunicator_StaticNew()
{
  return vtkMPICommunicator::New();
}

PyObject *PyvtkMPICommunicator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMPICommunicator_Type, PyvtkMPICommunicator_Methods,
    "vtkMPICommunicator",
 &PyvtkMPICommunicator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCommunicator");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMPICommunicator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPICommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPICommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPICommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

