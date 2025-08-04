// python wrapper for vtkXArrayAccessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXArrayAccessor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXArrayAccessor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXArrayAccessor_ClassNew(); }

#ifndef DECLARED_PyvtkNetCDFAccessor_ClassNew
extern "C" { PyObject *PyvtkNetCDFAccessor_ClassNew(); }
#define DECLARED_PyvtkNetCDFAccessor_ClassNew
#endif

static PyObject *
PyvtkXArrayAccessor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXArrayAccessor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXArrayAccessor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXArrayAccessor *tempr = vtkXArrayAccessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXArrayAccessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXArrayAccessor::NewInstance());

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
PyvtkXArrayAccessor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXArrayAccessor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXArrayAccessor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->close(temp0) :
      op->vtkXArrayAccessor::close(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  const char *temp0 = nullptr;
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
      op->open(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::open(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_strerror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "strerror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->strerror(temp0) :
      op->vtkXArrayAccessor::strerror(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_inq_attlen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_attlen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<size_t> store3(2*size3);
  size_t *temp3 = store3.Data();
  size_t *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->inq_attlen(temp0, temp1, temp2, temp3) :
      op->vtkXArrayAccessor::inq_attlen(temp0, temp1, temp2, temp3));

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
PyvtkXArrayAccessor_inq_dimlen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_dimlen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<size_t> store2(2*size2);
  size_t *temp2 = store2.Data();
  size_t *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->inq_dimlen(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_dimlen(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_dimname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_dimname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetStringSize(2);
  vtkPythonArgs::Array<char> store2(2*size2 + 1);
  char *temp2 = store2.Data();
  char *save2 = temp2 + size2 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->inq_dimname(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_dimname(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_nvars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_nvars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->inq_nvars(temp0, temp1) :
      op->vtkXArrayAccessor::inq_nvars(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_inq_ndims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_ndims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->inq_ndims(temp0, temp1) :
      op->vtkXArrayAccessor::inq_ndims(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_inq_vardimid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_vardimid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

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
      op->inq_vardimid(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_vardimid(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_varid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_varid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
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
      op->inq_varid(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_varid(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_varname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_varname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetStringSize(2);
  vtkPythonArgs::Array<char> store2(2*size2 + 1);
  char *temp2 = store2.Data();
  char *save2 = temp2 + size2 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->inq_varname(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_varname(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_varndims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_varndims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

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
      op->inq_varndims(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_varndims(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_inq_vartype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "inq_vartype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

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
      op->inq_vartype(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::inq_vartype(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_get_att_text(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "get_att_text");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  size_t size3 = ap.GetStringSize(3);
  vtkPythonArgs::Array<char> store3(2*size3 + 1);
  char *temp3 = store3.Data();
  char *save3 = temp3 + size3 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->get_att_text(temp0, temp1, temp2, temp3) :
      op->vtkXArrayAccessor::get_att_text(temp0, temp1, temp2, temp3));

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
PyvtkXArrayAccessor_get_att_double(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "get_att_double");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->get_att_double(temp0, temp1, temp2, temp3) :
      op->vtkXArrayAccessor::get_att_double(temp0, temp1, temp2, temp3));

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
PyvtkXArrayAccessor_get_att_float(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "get_att_float");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->get_att_float(temp0, temp1, temp2, temp3) :
      op->vtkXArrayAccessor::get_att_float(temp0, temp1, temp2, temp3));

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
PyvtkXArrayAccessor_GetCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  std::vector<std::string> temp2(ap.GetArgSize(2));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2.data(), temp2.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCoordinates(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::GetCoordinates(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp2.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp2.data(), temp2.size()));
      ap.SetContents(2, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_NeedsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedsFileName() :
      op->vtkXArrayAccessor::NeedsFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_get_var_double(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "get_var_double");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->get_var_double(temp0, temp1, temp2) :
      op->vtkXArrayAccessor::get_var_double(temp0, temp1, temp2));

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
PyvtkXArrayAccessor_SetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetDim(temp0);
    }
    else
    {
      op->vtkXArrayAccessor::SetDim(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetDimLen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimLen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  std::vector<size_t> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetDimLen(temp0);
    }
    else
    {
      op->vtkXArrayAccessor::SetDimLen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetVar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->SetVar(temp0, temp1);
    }
    else
    {
      op->vtkXArrayAccessor::SetVar(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetVarValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVarValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  size_t temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->SetVarValue(temp0, temp1);
    }
    else
    {
      op->vtkXArrayAccessor::SetVarValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetAtt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  size_t temp0;
  std::string temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetAtt(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkXArrayAccessor::SetAtt(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetVarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  size_t temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVarType(temp0, temp1);
    }
    else
    {
      op->vtkXArrayAccessor::SetVarType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_IsCOARDSCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCOARDSCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCOARDSCoordinate(temp0) :
      op->vtkXArrayAccessor::IsCOARDSCoordinate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetVarDims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVarDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  size_t temp0;
  std::vector<size_t> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->SetVarDims(temp0, temp1);
    }
    else
    {
      op->vtkXArrayAccessor::SetVarDims(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXArrayAccessor_SetVarCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVarCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXArrayAccessor *op = static_cast<vtkXArrayAccessor *>(vp);

  size_t temp0;
  std::vector<size_t> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->SetVarCoords(temp0, temp1);
    }
    else
    {
      op->vtkXArrayAccessor::SetVarCoords(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXArrayAccessor_Methods[] = {
  {"IsTypeOf", PyvtkXArrayAccessor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXArrayAccessor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXArrayAccessor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXArrayAccessor\nC++: static vtkXArrayAccessor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXArrayAccessor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXArrayAccessor\nC++: vtkXArrayAccessor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXArrayAccessor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXArrayAccessor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"close", PyvtkXArrayAccessor_close, METH_VARARGS,
   "close(self, ncid:int) -> int\nC++: int close(int ncid) override;\n\n"},
  {"open", PyvtkXArrayAccessor_open, METH_VARARGS,
   "open(self, path:str, omode:int, ncidp:[int, ...]) -> int\nC++: int open(const char *path, int omode, int *ncidp) override;\n\n"},
  {"strerror", PyvtkXArrayAccessor_strerror, METH_VARARGS,
   "strerror(self, ncerr1:int) -> str\nC++: const char *strerror(int ncerr1) override;\n\n"},
  {"inq_attlen", PyvtkXArrayAccessor_inq_attlen, METH_VARARGS,
   "inq_attlen(self, ncid:int, varid:int, name:str, lenp:[int, ...])\n    -> int\nC++: int inq_attlen(int ncid, int varid, const char *name,\n    size_t *lenp) override;\n\n"},
  {"inq_dimlen", PyvtkXArrayAccessor_inq_dimlen, METH_VARARGS,
   "inq_dimlen(self, ncid:int, dimid:int, lenp:[int, ...]) -> int\nC++: int inq_dimlen(int ncid, int dimid, size_t *lenp) override;\n\n"},
  {"inq_dimname", PyvtkXArrayAccessor_inq_dimname, METH_VARARGS,
   "inq_dimname(self, ncid:int, dimid:int, name:str) -> int\nC++: int inq_dimname(int ncid, int dimid, char *name) override;\n\n"},
  {"inq_nvars", PyvtkXArrayAccessor_inq_nvars, METH_VARARGS,
   "inq_nvars(self, ncid:int, nvarsp:[int, ...]) -> int\nC++: int inq_nvars(int ncid, int *nvarsp) override;\n\n"},
  {"inq_ndims", PyvtkXArrayAccessor_inq_ndims, METH_VARARGS,
   "inq_ndims(self, ncid:int, ndimsp:[int, ...]) -> int\nC++: int inq_ndims(int ncid, int *ndimsp) override;\n\n"},
  {"inq_vardimid", PyvtkXArrayAccessor_inq_vardimid, METH_VARARGS,
   "inq_vardimid(self, ncid:int, varid:int, dimidsp:[int, ...]) -> int\nC++: int inq_vardimid(int ncid, int varid, int *dimidsp) override;\n\n"},
  {"inq_varid", PyvtkXArrayAccessor_inq_varid, METH_VARARGS,
   "inq_varid(self, ncid:int, name:str, varidp:[int, ...]) -> int\nC++: int inq_varid(int ncid, const char *name, int *varidp)\n    override;\n\n"},
  {"inq_varname", PyvtkXArrayAccessor_inq_varname, METH_VARARGS,
   "inq_varname(self, ncid:int, varid:int, name:str) -> int\nC++: int inq_varname(int ncid, int varid, char *name) override;\n\n"},
  {"inq_varndims", PyvtkXArrayAccessor_inq_varndims, METH_VARARGS,
   "inq_varndims(self, ncid:int, varid:int, ndimsp:[int, ...]) -> int\nC++: int inq_varndims(int ncid, int varid, int *ndimsp) override;\n\n"},
  {"inq_vartype", PyvtkXArrayAccessor_inq_vartype, METH_VARARGS,
   "inq_vartype(self, ncid:int, varid:int, typep:[int, ...]) -> int\nC++: int inq_vartype(int ncid, int varid, int *typep) override;\n\n"},
  {"get_att_text", PyvtkXArrayAccessor_get_att_text, METH_VARARGS,
   "get_att_text(self, ncid:int, varid:int, name:str, value:str)\n    -> int\nC++: int get_att_text(int ncid, int varid, const char *name,\n    char *value) override;\n\n"},
  {"get_att_double", PyvtkXArrayAccessor_get_att_double, METH_VARARGS,
   "get_att_double(self, ncid:int, varid:int, name:str, value:[float,\n    ...]) -> int\nC++: int get_att_double(int ncid, int varid, const char *name,\n    double *value) override;\n\n"},
  {"get_att_float", PyvtkXArrayAccessor_get_att_float, METH_VARARGS,
   "get_att_float(self, ncid:int, varid:int, name:str, value:[float,\n    ...]) -> int\nC++: int get_att_float(int ncid, int varid, const char *name,\n    float *value) override;\n\n"},
  {"GetCoordinates", PyvtkXArrayAccessor_GetCoordinates, METH_VARARGS,
   "GetCoordinates(self, ncFD:int, varId:int, coordName:[str, ...])\n    -> bool\nC++: bool GetCoordinates(int ncFD, int varId,\n    std::vector<std::string> &coordName) override;\n\n"},
  {"NeedsFileName", PyvtkXArrayAccessor_NeedsFileName, METH_VARARGS,
   "NeedsFileName(self) -> bool\nC++: bool NeedsFileName() override;\n\n"},
  {"get_var_double", PyvtkXArrayAccessor_get_var_double, METH_VARARGS,
   "get_var_double(self, ncid:int, varid:int, ip:[float, ...]) -> int\nC++: int get_var_double(int ncid, int varid, double *ip) override;\n\n"},
  {"SetDim", PyvtkXArrayAccessor_SetDim, METH_VARARGS,
   "SetDim(self, v:(str, ...)) -> None\nC++: void SetDim(const std::vector<std::string> &v)\n\nSet dimensions and their length\n"},
  {"SetDimLen", PyvtkXArrayAccessor_SetDimLen, METH_VARARGS,
   "SetDimLen(self, v:(int, ...)) -> None\nC++: void SetDimLen(const std::vector<size_t> &v)\n\n"},
  {"SetVar", PyvtkXArrayAccessor_SetVar, METH_VARARGS,
   "SetVar(self, v:(str, ...), is_coord:(int, ...)) -> None\nC++: void SetVar(const std::vector<std::string> &v,\n    const std::vector<int> &is_coord)\n\nSet variables, variable attributes and types for the variable\narrays.\n"},
  {"SetVarValue", PyvtkXArrayAccessor_SetVarValue, METH_VARARGS,
   "SetVarValue(self, varIndex:int, value:Pointer) -> None\nC++: void SetVarValue(size_t varIndex, void *value)\n\n"},
  {"SetAtt", PyvtkXArrayAccessor_SetAtt, METH_VARARGS,
   "SetAtt(self, varIndex:int, attributeName:str, var:vtkVariant)\n    -> None\nC++: void SetAtt(size_t varIndex, std::string attributeName,\n    const vtkVariant &var)\n\n"},
  {"SetVarType", PyvtkXArrayAccessor_SetVarType, METH_VARARGS,
   "SetVarType(self, varIndex:int, nctype:int) -> None\nC++: void SetVarType(size_t varIndex, int nctype)\n\n"},
  {"IsCOARDSCoordinate", PyvtkXArrayAccessor_IsCOARDSCoordinate, METH_VARARGS,
   "IsCOARDSCoordinate(self, __a:str) -> bool\nC++: bool IsCOARDSCoordinate(std::string)\n\nCheck if this coordinate has one dim with the same name as the\ncoordinate.\n"},
  {"SetVarDims", PyvtkXArrayAccessor_SetVarDims, METH_VARARGS,
   "SetVarDims(self, varIndex:int, dims:(int, ...)) -> None\nC++: void SetVarDims(size_t varIndex,\n    const std::vector<size_t> &dims)\n\nSet dimensions for a variable\n"},
  {"SetVarCoords", PyvtkXArrayAccessor_SetVarCoords, METH_VARARGS,
   "SetVarCoords(self, varIndex:int, coords:(int, ...)) -> None\nC++: void SetVarCoords(size_t varIndex,\n    const std::vector<size_t> &coords)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXArrayAccessor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("dim"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkXArrayAccessor_SetDim(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkXArrayAccessor_SetDim(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDim\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dim_len"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkXArrayAccessor_SetDimLen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkXArrayAccessor_SetDimLen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDimLen\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXArrayAccessor_Doc =
  "vtkXArrayAccessor - no description provided.\n\n"
  "Superclass: vtkNetCDFAccessor\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXArrayAccessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIONetCDF.vtkXArrayAccessor", // tp_name
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
  PyvtkXArrayAccessor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXArrayAccessor_StaticNew()
{
  return vtkXArrayAccessor::New();
}

PyObject *PyvtkXArrayAccessor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXArrayAccessor_Type, PyvtkXArrayAccessor_Methods,
    "vtkXArrayAccessor",
 &PyvtkXArrayAccessor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkNetCDFAccessor_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXArrayAccessor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXArrayAccessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXArrayAccessor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXArrayAccessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

