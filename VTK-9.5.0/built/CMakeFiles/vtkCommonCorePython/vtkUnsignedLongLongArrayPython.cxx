// python wrapper for vtkUnsignedLongLongArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnsignedLongLongArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkUnsignedLongLongArray(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkUnsignedLongLongArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static PyObject *
PyvtkUnsignedLongLongArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnsignedLongLongArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnsignedLongLongArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnsignedLongLongArray *tempr = vtkUnsignedLongLongArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedLongLongArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnsignedLongLongArray::NewInstance());

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
PyvtkUnsignedLongLongArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnsignedLongLongArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnsignedLongLongArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkUnsignedLongLongArray *tempr = vtkUnsignedLongLongArray::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkUnsignedLongLongArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long long> store1(2*size1);
  unsigned long long *temp1 = store1.Data();
  unsigned long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkUnsignedLongLongArray::GetTypedTuple(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkUnsignedLongLongArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkUnsignedLongLongArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkUnsignedLongLongArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkUnsignedLongLongArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkUnsignedLongLongArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnsignedLongLongArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkUnsignedLongLongArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}


static PyObject *
PyvtkUnsignedLongLongArray_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long long> store1(size1);
  unsigned long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkUnsignedLongLongArray::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_InsertTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long long> store1(size1);
  unsigned long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i"))
  {
    if (ap.IsBound())
    {
      op->InsertTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkUnsignedLongLongArray::InsertTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_InsertNextTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned long long> store0(size0);
  unsigned long long *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextTypedTuple(temp0) :
      op->vtkUnsignedLongLongArray::InsertNextTypedTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkUnsignedLongLongArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetNumberOfValues(temp0) :
      op->vtkUnsignedLongLongArray::SetNumberOfValues(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= id"))
  {
    if (ap.IsBound())
    {
      op->InsertValue(temp0, temp1);
    }
    else
    {
      op->vtkUnsignedLongLongArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkUnsignedLongLongArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkUnsignedLongLongArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkUnsignedLongLongArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_SetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  unsigned long long *temp0;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnsignedLongLongArray::SetArray(temp0, temp1, temp2);
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
PyvtkUnsignedLongLongArray_SetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongLongArray *op = static_cast<vtkUnsignedLongLongArray *>(vp);

  unsigned long long *temp0;
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
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnsignedLongLongArray::SetArray(temp0, temp1, temp2, temp3);
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
PyvtkUnsignedLongLongArray_SetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnsignedLongLongArray_SetArray_s1(self, args);
    case 4:
      return PyvtkUnsignedLongLongArray_SetArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArray");
  return nullptr;
}


static PyObject *
PyvtkUnsignedLongLongArray_FastDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkUnsignedLongLongArray *tempr = vtkUnsignedLongLongArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetDataTypeValueMin(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned long long tempr = vtkUnsignedLongLongArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedLongLongArray_GetDataTypeValueMax(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned long long tempr = vtkUnsignedLongLongArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnsignedLongLongArray_Methods[] = {
  {"IsTypeOf", PyvtkUnsignedLongLongArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnsignedLongLongArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnsignedLongLongArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUnsignedLongLongArray\nC++: static vtkUnsignedLongLongArray *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnsignedLongLongArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnsignedLongLongArray\nC++: vtkUnsignedLongLongArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnsignedLongLongArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnsignedLongLongArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ExtendedNew", PyvtkUnsignedLongLongArray_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkUnsignedLongLongArray\nC++: static vtkUnsignedLongLongArray *ExtendedNew()\n\n"},
  {"GetDataType", PyvtkUnsignedLongLongArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkUnsignedLongLongArray_GetTypedTuple, METH_VARARGS,
   "GetTypedTuple(self, i:int, tuple:[int, ...]) -> None\nC++: void GetTypedTuple(vtkIdType i, unsigned long long *tuple)\n\n"},
  {"GetValue", PyvtkUnsignedLongLongArray_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> int\nC++: unsigned long long GetValue(vtkIdType id)\n\n"},
  {"GetValueRange", PyvtkUnsignedLongLongArray_GetValueRange, METH_VARARGS,
   "GetValueRange(self, comp:int) -> (int, int)\nC++: unsigned long long *GetValueRange(int comp)\nGetValueRange(self) -> (int, int)\nC++: unsigned long long *GetValueRange()\n\n"},
  {"SetTypedTuple", PyvtkUnsignedLongLongArray_SetTypedTuple, METH_VARARGS,
   "SetTypedTuple(self, i:int, tuple:(int, ...)) -> None\nC++: void SetTypedTuple(vtkIdType i,\n    const unsigned long long *tuple)\n\n"},
  {"InsertTypedTuple", PyvtkUnsignedLongLongArray_InsertTypedTuple, METH_VARARGS,
   "InsertTypedTuple(self, i:int, tuple:(int, ...)) -> None\nC++: void InsertTypedTuple(vtkIdType i,\n    const unsigned long long *tuple)\n\n"},
  {"InsertNextTypedTuple", PyvtkUnsignedLongLongArray_InsertNextTypedTuple, METH_VARARGS,
   "InsertNextTypedTuple(self, tuple:(int, ...)) -> int\nC++: vtkIdType InsertNextTypedTuple(\n    const unsigned long long *tuple)\n\n"},
  {"SetValue", PyvtkUnsignedLongLongArray_SetValue, METH_VARARGS,
   "SetValue(self, id:int, value:int) -> None\nC++: void SetValue(vtkIdType id, unsigned long long value)\n\n"},
  {"SetNumberOfValues", PyvtkUnsignedLongLongArray_SetNumberOfValues, METH_VARARGS,
   "SetNumberOfValues(self, number:int) -> bool\nC++: bool SetNumberOfValues(vtkIdType number) override;\n\nSpecify the number of values (tuples * components) for this\nobject to hold. Does an allocation as well as setting the MaxId\nivar. Used in conjunction with SetValue() method for fast\ninsertion. Preserves existing data and returns true if allocation\nsucceeds, or false otherwise.\n"},
  {"InsertValue", PyvtkUnsignedLongLongArray_InsertValue, METH_VARARGS,
   "InsertValue(self, id:int, f:int) -> None\nC++: void InsertValue(vtkIdType id, unsigned long long f)\n\n"},
  {"InsertNextValue", PyvtkUnsignedLongLongArray_InsertNextValue, METH_VARARGS,
   "InsertNextValue(self, f:int) -> int\nC++: vtkIdType InsertNextValue(unsigned long long f)\n\n"},
  {"WritePointer", PyvtkUnsignedLongLongArray_WritePointer, METH_VARARGS,
   "WritePointer(self, id:int, number:int) -> Pointer\nC++: unsigned long long *WritePointer(vtkIdType id,\n    vtkIdType number)\n\n"},
  {"GetPointer", PyvtkUnsignedLongLongArray_GetPointer, METH_VARARGS,
   "GetPointer(self, id:int) -> Pointer\nC++: unsigned long long *GetPointer(vtkIdType id)\n\n"},
  {"SetArray", PyvtkUnsignedLongLongArray_SetArray, METH_VARARGS,
   "SetArray(self, array:Buffer, size:int, save:int) -> None\nC++: void SetArray(unsigned long long *array, vtkIdType size,\n    int save)\nSetArray(self, array:Buffer, size:int, save:int, deleteMethod:int)\n     -> None\nC++: void SetArray(unsigned long long *array, vtkIdType size,\n    int save, int deleteMethod)\n\n"},
  {"FastDownCast", PyvtkUnsignedLongLongArray_FastDownCast, METH_VARARGS,
   "FastDownCast(source:vtkAbstractArray) -> vtkUnsignedLongLongArray\nC++: static vtkUnsignedLongLongArray *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"GetDataTypeValueMin", PyvtkUnsignedLongLongArray_GetDataTypeValueMin, METH_VARARGS,
   "GetDataTypeValueMin() -> int\nC++: static unsigned long long GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {"GetDataTypeValueMax", PyvtkUnsignedLongLongArray_GetDataTypeValueMax, METH_VARARGS,
   "GetDataTypeValueMax() -> int\nC++: static unsigned long long GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkUnsignedLongLongArray_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("data_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkUnsignedLongLongArray_GetDataType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("value_range"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkUnsignedLongLongArray_GetValueRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValueRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_type_value_min"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkUnsignedLongLongArray_GetDataTypeValueMin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataTypeValueMin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_type_value_max"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkUnsignedLongLongArray_GetDataTypeValueMax(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataTypeValueMax\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkUnsignedLongLongArray_Doc =
  "vtkUnsignedLongLongArray - dynamic, self-adjusting array of unsigned\nlong long\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkUnsignedLongLongArray is an array of values of type unsigned long\n"
  "long. It provides methods for insertion and retrieval of values and\n"
  "will automatically resize itself to hold new data.\n\n"
  "This class should not be used directly, as it only exists on systems\n"
  "where the unsigned long long type is defined.  If you need an\n"
  "unsigned 64 bit integer data array, use vtkTypeUInt64Array instead.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnsignedLongLongArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkUnsignedLongLongArray", // tp_name
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
  PyvtkUnsignedLongLongArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnsignedLongLongArray_StaticNew()
{
  return vtkUnsignedLongLongArray::New();
}

PyObject *PyvtkUnsignedLongLongArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnsignedLongLongArray_Type, PyvtkUnsignedLongLongArray_Methods,
    "vtkUnsignedLongLongArray",
 &PyvtkUnsignedLongLongArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkUnsignedLongLongArray_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnsignedLongLongArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnsignedLongLongArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnsignedLongLongArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

