// python wrapper for vtkContext2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkContext2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkContext2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkContext2D_ClassNew(); }


static PyObject *
PyvtkContext2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContext2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContext2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContext2D *tempr = vtkContext2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContext2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContext2D::NewInstance());

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
PyvtkContext2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContext2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContext2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkContextDevice2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextDevice2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Begin(temp0) :
      op->vtkContext2D::Begin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextDevice2D *tempr = (ap.IsBound() ?
      op->GetDevice() :
      op->vtkContext2D::GetDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->End() :
      op->vtkContext2D::End());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetBufferIdMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferIdMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBufferIdMode() :
      op->vtkContext2D::GetBufferIdMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkAbstractContextBufferId *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextBufferId"))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeBegin(temp0);
    }
    else
    {
      op->vtkContext2D::BufferIdModeBegin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferIdModeEnd();
    }
    else
    {
      op->vtkContext2D::BufferIdModeEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawLine(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  float save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawLine(temp0);
    }
    else
    {
      op->vtkContext2D::DrawLine(temp0);
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
PyvtkContext2D_DrawLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawLine(temp0);
    }
    else
    {
      op->vtkContext2D::DrawLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawLine_Methods[] = {
  {"DrawLine", PyvtkContext2D_DrawLine_s2, METH_VARARGS,
   "@P *f"},
  {"DrawLine", PyvtkContext2D_DrawLine_s3, METH_VARARGS,
   "@V *vtkPoints2D"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawLine(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawLine_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkContext2D_DrawLine_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawLine");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawPoly_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPoly(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkContext2D_DrawPoly_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawPoly(temp0);
    }
    else
    {
      op->vtkContext2D::DrawPoly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoly_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawPoly(temp0, temp1);
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
PyvtkContext2D_DrawPoly_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawPoly(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoly(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContext2D_DrawPoly_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawPoly_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPoly_s3(self, args);
    case 4:
      return PyvtkContext2D_DrawPoly_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPoly");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawLines(temp0);
    }
    else
    {
      op->vtkContext2D::DrawLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawLines(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawLines(temp0, temp1);
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
PyvtkContext2D_DrawLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContext2D_DrawLines_s1(self, args);
    case 2:
      return PyvtkContext2D_DrawLines_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawLines");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawPoint(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPoints(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkContext2D_DrawPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawPoints(temp0);
    }
    else
    {
      op->vtkContext2D::DrawPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoints_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawPoints(temp0, temp1);
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
PyvtkContext2D_DrawPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContext2D_DrawPoints_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawPoints_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPoints_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPoints");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawPointSprites_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawPointSprites(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  vtkUnsignedCharArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPoints2D") &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2);
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

static PyMethodDef PyvtkContext2D_DrawPointSprites_Methods[] = {
  {"DrawPointSprites", PyvtkContext2D_DrawPointSprites_s2, METH_VARARGS,
   "@VVV *vtkImageData *vtkPoints2D *vtkUnsignedCharArray"},
  {"DrawPointSprites", PyvtkContext2D_DrawPointSprites_s4, METH_VARARGS,
   "@VPi *vtkImageData *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawPointSprites_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContext2D_DrawPointSprites_s1(self, args);
    case 5:
      return PyvtkContext2D_DrawPointSprites_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPointSprites");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawMarkers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMarkers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMarkers_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  vtkPoints2D *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMarkers_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  vtkPoints2D *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints2D") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawMarkers_Methods[] = {
  {"DrawMarkers", PyvtkContext2D_DrawMarkers_s2, METH_VARARGS,
   "@iqPi *f"},
  {"DrawMarkers", PyvtkContext2D_DrawMarkers_s4, METH_VARARGS,
   "@iqVV *vtkPoints2D *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawMarkers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawMarkers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkContext2D_DrawMarkers_s1(self, args);
    case 3:
      return PyvtkContext2D_DrawMarkers_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawMarkers");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawRect(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawRect(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawQuad_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->DrawQuad(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkContext2D::DrawQuad(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawQuad_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuad(temp0);
    }
    else
    {
      op->vtkContext2D::DrawQuad(temp0);
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
PyvtkContext2D_DrawQuad(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkContext2D_DrawQuad_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawQuad_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawQuad");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawQuadStrip_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawQuadStrip(temp0);
    }
    else
    {
      op->vtkContext2D::DrawQuadStrip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawQuadStrip_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuadStrip(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawQuadStrip(temp0, temp1);
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
PyvtkContext2D_DrawQuadStrip(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContext2D_DrawQuadStrip_s1(self, args);
    case 2:
      return PyvtkContext2D_DrawQuadStrip_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawQuadStrip");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawPolygon_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkContext2D_DrawPolygon_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DrawPolygon(temp0);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPolygon_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0, temp1);
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
PyvtkContext2D_DrawPolygon_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPolygon_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0, temp1, temp2);
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
PyvtkContext2D_DrawPolygon_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawPolygon(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawPolygon_Methods[] = {
  {"DrawPolygon", PyvtkContext2D_DrawPolygon_s1, METH_VARARGS,
   "@PPi *f *f"},
  {"DrawPolygon", PyvtkContext2D_DrawPolygon_s5, METH_VARARGS,
   "@VPi *vtkPoints2D *B"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawPolygon(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawPolygon_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContext2D_DrawPolygon_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPolygon_s3(self, args);
    case 5:
      return PyvtkContext2D_DrawPolygon_s4(self, args);
    case 4:
      return PyvtkContext2D_DrawPolygon_s6(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPolygon");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawEllipse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawEllipse(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawEllipse(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->DrawWedge(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkContext2D::DrawWedge(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkContext2D::DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->DrawArc(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkContext2D::DrawArc(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkContext2D::DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawImage(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  vtkImageData *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawImage(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(*temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawImage(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContext2D_DrawImage_s1(self, args);
    case 4:
      return PyvtkContext2D_DrawImage_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawImage_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkPolyData *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->DrawPolyData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkContext2D::DrawPolyData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawStringRect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawStringRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawStringRect(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawStringRect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawStringRect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawStringRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawStringRect(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawStringRect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawStringRect_Methods[] = {
  {"DrawStringRect", PyvtkContext2D_DrawStringRect_s1, METH_VARARGS,
   "@Vs *vtkPoints2D"},
  {"DrawStringRect", PyvtkContext2D_DrawStringRect_s2, METH_VARARGS,
   "@Ps *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawStringRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawStringRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawStringRect");
  return nullptr;
}


static PyObject *
PyvtkContext2D_DrawString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawString(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContext2D_DrawString_s1(self, args);
    case 3:
      return PyvtkContext2D_DrawString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawString");
  return nullptr;
}


static PyObject *
PyvtkContext2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->ComputeStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
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

static PyMethodDef PyvtkContext2D_ComputeStringBounds_Methods[] = {
  {"ComputeStringBounds", PyvtkContext2D_ComputeStringBounds_s1, METH_VARARGS,
   "@sV *vtkPoints2D"},
  {"ComputeStringBounds", PyvtkContext2D_ComputeStringBounds_s2, METH_VARARGS,
   "@sP *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_ComputeStringBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeStringBounds");
  return nullptr;
}


static PyObject *
PyvtkContext2D_ComputeJustifiedStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeJustifiedStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeJustifiedStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::ComputeJustifiedStringBounds(temp0, temp1);
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
PyvtkContext2D_ComputeFontSizeForBoundedString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFontSizeForBoundedString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeFontSizeForBoundedString(temp0, temp1, temp2) :
      op->vtkContext2D::ComputeFontSizeForBoundedString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_DrawMathTextString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1);
    }
    else
    {
      op->vtkContext2D::DrawMathTextString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawMathTextString_Methods[] = {
  {"DrawMathTextString", PyvtkContext2D_DrawMathTextString_s2, METH_VARARGS,
   "@ffs"},
  {"DrawMathTextString", PyvtkContext2D_DrawMathTextString_s3, METH_VARARGS,
   "@Vss *vtkPoints2D"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContext2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawMathTextString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContext2D_DrawMathTextString_s1(self, args);
    case 4:
      return PyvtkContext2D_DrawMathTextString_s4(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawMathTextString");
  return nullptr;
}


static PyObject *
PyvtkContext2D_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkContext2D::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->ApplyPen(temp0);
    }
    else
    {
      op->vtkContext2D::ApplyPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkContext2D::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->ApplyBrush(temp0);
    }
    else
    {
      op->vtkContext2D::ApplyBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkContext2D::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->ApplyTextProp(temp0);
    }
    else
    {
      op->vtkContext2D::ApplyTextProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProp() :
      op->vtkContext2D::GetTextProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTransform2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkContext2D::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContext2D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_AppendTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTransform2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
  {
    if (ap.IsBound())
    {
      op->AppendTransform(temp0);
    }
    else
    {
      op->vtkContext2D::AppendTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkContext2D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkContext2D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ApplyId(temp0);
    }
    else
    {
      op->vtkContext2D::ApplyId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_FloatToInt(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FloatToInt");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContext2D::FloatToInt(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_GetContext3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContext3D *tempr = (ap.IsBound() ?
      op->GetContext3D() :
      op->vtkContext2D::GetContext3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2D_SetContext3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkContext3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext3D"))
  {
    if (ap.IsBound())
    {
      op->SetContext3D(temp0);
    }
    else
    {
      op->vtkContext2D::SetContext3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2D_Methods[] = {
  {"IsTypeOf", PyvtkContext2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContext2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContext2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContext2D\nC++: static vtkContext2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContext2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContext2D\nC++: vtkContext2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContext2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContext2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Begin", PyvtkContext2D_Begin, METH_VARARGS,
   "Begin(self, device:vtkContextDevice2D) -> bool\nC++: bool Begin(vtkContextDevice2D *device)\n\nBegin painting on a vtkContextDevice2D, no painting can occur\nbefore this call has been made. Only one painter is allowed at a\ntime on any given paint device. Returns true if successful,\notherwise false.\n"},
  {"GetDevice", PyvtkContext2D_GetDevice, METH_VARARGS,
   "GetDevice(self) -> vtkContextDevice2D\nC++: virtual vtkContextDevice2D *GetDevice()\n\n"},
  {"End", PyvtkContext2D_End, METH_VARARGS,
   "End(self) -> bool\nC++: bool End()\n\nEnds painting on the device, you would not usually need to call\nthis as it should be called by the destructor. Returns true if\nthe painter is no longer active, otherwise false.\n"},
  {"GetBufferIdMode", PyvtkContext2D_GetBufferIdMode, METH_VARARGS,
   "GetBufferIdMode(self) -> bool\nC++: bool GetBufferIdMode()\n\nTell if the context is in BufferId creation mode. Initial value\nis false.\n"},
  {"BufferIdModeBegin", PyvtkContext2D_BufferIdModeBegin, METH_VARARGS,
   "BufferIdModeBegin(self, bufferId:vtkAbstractContextBufferId)\n    -> None\nC++: void BufferIdModeBegin(vtkAbstractContextBufferId *bufferId)\n\nStart BufferId creation Mode.\n\\pre not_yet: !GetBufferIdMode()\n\\pre bufferId_exists: bufferId!=0\n\\post started: GetBufferIdMode()\n"},
  {"BufferIdModeEnd", PyvtkContext2D_BufferIdModeEnd, METH_VARARGS,
   "BufferIdModeEnd(self) -> None\nC++: void BufferIdModeEnd()\n\nFinalize BufferId creation Mode. It makes sure that the content\nof the bufferId passed in argument of BufferIdModeBegin() is\ncorrectly set.\n\\pre started: GetBufferIdMode()\n\\post done: !GetBufferIdMode()\n"},
  {"DrawLine", PyvtkContext2D_DrawLine, METH_VARARGS,
   "DrawLine(self, x1:float, y1:float, x2:float, y2:float) -> None\nC++: void DrawLine(float x1, float y1, float x2, float y2)\nDrawLine(self, p:[float, float, float, float]) -> None\nC++: void DrawLine(float p[4])\nDrawLine(self, points:vtkPoints2D) -> None\nC++: void DrawLine(vtkPoints2D *points)\n\nDraw a line between the specified points.\n"},
  {"DrawPoly", PyvtkContext2D_DrawPoly, METH_VARARGS,
   "DrawPoly(self, x:[float, ...], y:[float, ...], n:int) -> None\nC++: void DrawPoly(float *x, float *y, int n)\nDrawPoly(self, points:vtkPoints2D) -> None\nC++: void DrawPoly(vtkPoints2D *points)\nDrawPoly(self, points:[float, ...], n:int) -> None\nC++: void DrawPoly(float *points, int n)\nDrawPoly(self, points:[float, ...], n:int, colors:[int, ...],\n    nc_comps:int) -> None\nC++: void DrawPoly(float *points, int n, unsigned char *colors,\n    int nc_comps)\n\nDraw a poly line between the specified points.\n"},
  {"DrawLines", PyvtkContext2D_DrawLines, METH_VARARGS,
   "DrawLines(self, points:vtkPoints2D) -> None\nC++: void DrawLines(vtkPoints2D *points)\nDrawLines(self, points:[float, ...], n:int) -> None\nC++: void DrawLines(float *points, int n)\n\nDraw multiple lines between the specified pairs of points.\n\\sa DrawPoly()\n"},
  {"DrawPoint", PyvtkContext2D_DrawPoint, METH_VARARGS,
   "DrawPoint(self, x:float, y:float) -> None\nC++: void DrawPoint(float x, float y)\n\nDraw a point at the supplied x and y coordinate\n"},
  {"DrawPoints", PyvtkContext2D_DrawPoints, METH_VARARGS,
   "DrawPoints(self, x:[float, ...], y:[float, ...], n:int) -> None\nC++: void DrawPoints(float *x, float *y, int n)\nDrawPoints(self, points:vtkPoints2D) -> None\nC++: void DrawPoints(vtkPoints2D *points)\nDrawPoints(self, points:[float, ...], n:int) -> None\nC++: void DrawPoints(float *points, int n)\n\nDraw the specified number of points using the x and y arrays\nsupplied\n"},
  {"DrawPointSprites", PyvtkContext2D_DrawPointSprites, METH_VARARGS,
   "DrawPointSprites(self, sprite:vtkImageData, points:vtkPoints2D)\n    -> None\nC++: void DrawPointSprites(vtkImageData *sprite,\n    vtkPoints2D *points)\nDrawPointSprites(self, sprite:vtkImageData, points:vtkPoints2D,\n    colors:vtkUnsignedCharArray) -> None\nC++: void DrawPointSprites(vtkImageData *sprite,\n    vtkPoints2D *points, vtkUnsignedCharArray *colors)\nDrawPointSprites(self, sprite:vtkImageData, points:[float, ...],\n    n:int, colors:[int, ...], nc_comps:int) -> None\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n, unsigned char *colors, int nc_comps)\nDrawPointSprites(self, sprite:vtkImageData, points:[float, ...],\n    n:int) -> None\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n)\n\nDraw a series of point sprites, images centred at the points\nsupplied. The supplied vtkImageData is the sprite to be drawn,\nonly squares will be drawn and the size is set using\nSetPointSize.\n"},
  {"DrawMarkers", PyvtkContext2D_DrawMarkers, METH_VARARGS,
   "DrawMarkers(self, shape:int, highlight:bool, points:[float, ...],\n    n:int, colors:[int, ...], nc_comps:int) -> None\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    float *points, int n, unsigned char *colors, int nc_comps)\nDrawMarkers(self, shape:int, highlight:bool, points:[float, ...],\n    n:int) -> None\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    float *points, int n)\nDrawMarkers(self, shape:int, highlight:bool, points:vtkPoints2D)\n    -> None\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    vtkPoints2D *points)\nDrawMarkers(self, shape:int, highlight:bool, points:vtkPoints2D,\n    colors:vtkUnsignedCharArray) -> None\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    vtkPoints2D *points, vtkUnsignedCharArray *colors)\n\nDraw a series of markers centered at the points supplied. The\nshape argument controls the marker shape, and can be one of\n- VTK_MARKER_CROSS\n- VTK_MARKER_PLUS\n- VTK_MARKER_SQUARE\n- VTK_MARKER_CIRCLE\n- VTK_MARKER_DIAMOND Marker size is determined by the current pen\nwidth.\n\\param shape the shape of the marker\n\\param highlight whether to highlight the marker or not\n\\param points where to draw the markers\n\\param n number of points\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"DrawRect", PyvtkContext2D_DrawRect, METH_VARARGS,
   "DrawRect(self, x:float, y:float, w:float, h:float) -> None\nC++: void DrawRect(float x, float y, float w, float h)\n\nDraw a rectangle with origin at x, y and width w, height h\n"},
  {"DrawQuad", PyvtkContext2D_DrawQuad, METH_VARARGS,
   "DrawQuad(self, x1:float, y1:float, x2:float, y2:float, x3:float,\n    y3:float, x4:float, y4:float) -> None\nC++: void DrawQuad(float x1, float y1, float x2, float y2,\n    float x3, float y3, float x4, float y4)\nDrawQuad(self, p:[float, ...]) -> None\nC++: void DrawQuad(float *p)\n\nDraw a quadrilateral at the specified points (4 points, 8 floats\nin x, y).\n"},
  {"DrawQuadStrip", PyvtkContext2D_DrawQuadStrip, METH_VARARGS,
   "DrawQuadStrip(self, points:vtkPoints2D) -> None\nC++: void DrawQuadStrip(vtkPoints2D *points)\nDrawQuadStrip(self, p:[float, ...], n:int) -> None\nC++: void DrawQuadStrip(float *p, int n)\n\nDraw a strip of quads\n"},
  {"DrawPolygon", PyvtkContext2D_DrawPolygon, METH_VARARGS,
   "DrawPolygon(self, x:[float, ...], y:[float, ...], n:int) -> None\nC++: void DrawPolygon(float *x, float *y, int n)\nDrawPolygon(self, points:vtkPoints2D) -> None\nC++: void DrawPolygon(vtkPoints2D *points)\nDrawPolygon(self, points:[float, ...], n:int) -> None\nC++: void DrawPolygon(float *points, int n)\nDrawPolygon(self, x:[float, ...], y:[float, ...], n:int,\n    color:[int, ...], nc_comps:int) -> None\nC++: void DrawPolygon(float *x, float *y, int n,\n    unsigned char *color, int nc_comps)\nDrawPolygon(self, points:vtkPoints2D, color:[int, ...],\n    nc_comps:int) -> None\nC++: void DrawPolygon(vtkPoints2D *points, unsigned char *color,\n    int nc_comps)\nDrawPolygon(self, points:[float, ...], n:int, color:[int, ...],\n    nc_comps:int) -> None\nC++: void DrawPolygon(float *points, int n, unsigned char *color,\n    int nc_comps)\n\nDraw a polygon specified specified by the points using the x and\ny arrays supplied\n"},
  {"DrawEllipse", PyvtkContext2D_DrawEllipse, METH_VARARGS,
   "DrawEllipse(self, x:float, y:float, rx:float, ry:float) -> None\nC++: void DrawEllipse(float x, float y, float rx, float ry)\n\nDraw an ellipse with center at x, y and radii rx, ry.\n\\pre positive_rx: rx>=0\n\\pre positive_ry: ry>=0\n"},
  {"DrawWedge", PyvtkContext2D_DrawWedge, METH_VARARGS,
   "DrawWedge(self, x:float, y:float, outRadius:float, inRadius:float,\n     startAngle:float, stopAngle:float) -> None\nC++: void DrawWedge(float x, float y, float outRadius,\n    float inRadius, float startAngle, float stopAngle)\n\nDraw a circular wedge with center at x, y, outer radius\noutRadius, inner radius inRadius between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRadius: outRadius>=0\n\\pre positive_inRadius: inRadius>=0\n\\pre ordered_radii: inRadius<=outRadius\n"},
  {"DrawEllipseWedge", PyvtkContext2D_DrawEllipseWedge, METH_VARARGS,
   "DrawEllipseWedge(self, x:float, y:float, outRx:float, outRy:float,\n     inRx:float, inRy:float, startAngle:float, stopAngle:float)\n    -> None\nC++: void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle)\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {"DrawArc", PyvtkContext2D_DrawArc, METH_VARARGS,
   "DrawArc(self, x:float, y:float, r:float, startAngle:float,\n    stopAngle:float) -> None\nC++: void DrawArc(float x, float y, float r, float startAngle,\n    float stopAngle)\n\nDraw a circular arc with center at x,y with radius r between\nangles startAngle and stopAngle (expressed in degrees).\n\\pre positive_radius: r>=0\n"},
  {"DrawEllipticArc", PyvtkContext2D_DrawEllipticArc, METH_VARARGS,
   "DrawEllipticArc(self, x:float, y:float, rX:float, rY:float,\n    startAngle:float, stopAngle:float) -> None\nC++: void DrawEllipticArc(float x, float y, float rX, float rY,\n    float startAngle, float stopAngle)\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {"DrawImage", PyvtkContext2D_DrawImage, METH_VARARGS,
   "DrawImage(self, x:float, y:float, image:vtkImageData) -> None\nC++: void DrawImage(float x, float y, vtkImageData *image)\nDrawImage(self, x:float, y:float, scale:float, image:vtkImageData)\n     -> None\nC++: void DrawImage(float x, float y, float scale,\n    vtkImageData *image)\nDrawImage(self, pos:vtkRectf, image:vtkImageData) -> None\nC++: void DrawImage(const vtkRectf &pos, vtkImageData *image)\n\nDraw the supplied image at the given x, y location (bottom\ncorner).\n"},
  {"DrawPolyData", PyvtkContext2D_DrawPolyData, METH_VARARGS,
   "DrawPolyData(self, x:float, y:float, polyData:vtkPolyData,\n    colors:vtkUnsignedCharArray, scalarMode:int) -> None\nC++: void DrawPolyData(float x, float y, vtkPolyData *polyData,\n    vtkUnsignedCharArray *colors, int scalarMode)\n\nDraw the supplied polyData at the given x, y position (bottom\ncorner).\n\note Supports only 2D meshes.\n"},
  {"DrawStringRect", PyvtkContext2D_DrawStringRect, METH_VARARGS,
   "DrawStringRect(self, rect:vtkPoints2D, string:str) -> None\nC++: void DrawStringRect(vtkPoints2D *rect,\n    const vtkStdString &string)\nDrawStringRect(self, rect:(float, float, float, float),\n    string:str) -> None\nC++: void DrawStringRect(const float rect[4],\n    const vtkStdString &string)\n\nDraw some text to the screen in a bounding rectangle with the\nalignment of the text properties respecting the rectangle. The\npoints should be supplied as bottom corner (x, y), width, height.\n"},
  {"DrawString", PyvtkContext2D_DrawString, METH_VARARGS,
   "DrawString(self, point:vtkPoints2D, string:str) -> None\nC++: void DrawString(vtkPoints2D *point,\n    const vtkStdString &string)\nDrawString(self, x:float, y:float, string:str) -> None\nC++: void DrawString(float x, float y, const vtkStdString &string)\n\nDraw some text to the screen.\n"},
  {"ComputeStringBounds", PyvtkContext2D_ComputeStringBounds, METH_VARARGS,
   "ComputeStringBounds(self, string:str, bounds:vtkPoints2D) -> None\nC++: void ComputeStringBounds(const vtkStdString &string,\n    vtkPoints2D *bounds)\nComputeStringBounds(self, string:str, bounds:[float, float, float,\n     float]) -> None\nC++: void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4])\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box.\n\n* NOTE:the text justification from the current text property is\n* NOT considered when computing these bounds.\n"},
  {"ComputeJustifiedStringBounds", PyvtkContext2D_ComputeJustifiedStringBounds, METH_VARARGS,
   "ComputeJustifiedStringBounds(self, string:str, bounds:[float,\n    float, float, float]) -> None\nC++: void ComputeJustifiedStringBounds(const char *string,\n    float bounds[4])\n\nCompute the bounds of the supplied string while taking into\naccount the justification and rotation of the currently applied\ntext property.\n"},
  {"ComputeFontSizeForBoundedString", PyvtkContext2D_ComputeFontSizeForBoundedString, METH_VARARGS,
   "ComputeFontSizeForBoundedString(self, string:str, width:float,\n    height:float) -> int\nC++: int ComputeFontSizeForBoundedString(\n    const vtkStdString &string, float width, float height)\n\nCalculate the largest possible font size where the supplied\nstring will fit within the specified bounds.  In addition to\nbeing returned, this font size is also used to update the\nvtkTextProperty used by this object. NOTE: text rotation is\nignored for the purposes of this function.\n"},
  {"DrawMathTextString", PyvtkContext2D_DrawMathTextString, METH_VARARGS,
   "DrawMathTextString(self, point:vtkPoints2D, string:str) -> None\nC++: void DrawMathTextString(vtkPoints2D *point,\n    const vtkStdString &string)\nDrawMathTextString(self, x:float, y:float, string:str) -> None\nC++: void DrawMathTextString(float x, float y,\n    const vtkStdString &string)\nDrawMathTextString(self, point:vtkPoints2D, string:str,\n    fallback:str) -> None\nC++: void DrawMathTextString(vtkPoints2D *point,\n    const vtkStdString &string, const vtkStdString &fallback)\nDrawMathTextString(self, x:float, y:float, string:str,\n    fallback:str) -> None\nC++: void DrawMathTextString(float x, float y,\n    const vtkStdString &string, const vtkStdString &fallback)\n\nDraw a MathText formatted equation to the screen. See\nhttp://matplotlib.sourceforge.net/users/mathtext.html for more\ninformation. MathText requires matplotlib and python, and the\nvtkMatplotlib module must be enabled manually during build\nconfiguration. This method will do nothing but print a warning if\nvtkMathTextUtilities::GetInstance() returns NULL.\n"},
  {"MathTextIsSupported", PyvtkContext2D_MathTextIsSupported, METH_VARARGS,
   "MathTextIsSupported(self) -> bool\nC++: bool MathTextIsSupported()\n\nReturn true if MathText rendering available on the current\ndevice.\n"},
  {"ApplyPen", PyvtkContext2D_ApplyPen, METH_VARARGS,
   "ApplyPen(self, pen:vtkPen) -> None\nC++: void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {"GetPen", PyvtkContext2D_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen which controls the outlines of shapes, as well as\nlines, points and related primitives. This object can be modified\nand the changes will be reflected in subsequent drawing\noperations.\n"},
  {"ApplyBrush", PyvtkContext2D_ApplyBrush, METH_VARARGS,
   "ApplyBrush(self, brush:vtkBrush) -> None\nC++: void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {"GetBrush", PyvtkContext2D_GetBrush, METH_VARARGS,
   "GetBrush(self) -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the pen which controls the outlines of shapes as well as\nlines, points and related primitives.\n"},
  {"ApplyTextProp", PyvtkContext2D_ApplyTextProp, METH_VARARGS,
   "ApplyTextProp(self, prop:vtkTextProperty) -> None\nC++: void ApplyTextProp(vtkTextProperty *prop)\n\nApply the supplied text property which controls how text is\nrendered. This makes a deep copy of the vtkTextProperty object in\nthe vtkContext2D, it does not hold a pointer to the supplied\nobject.\n"},
  {"GetTextProp", PyvtkContext2D_GetTextProp, METH_VARARGS,
   "GetTextProp(self) -> vtkTextProperty\nC++: vtkTextProperty *GetTextProp()\n\nGet the text properties object for the vtkContext2D.\n"},
  {"SetTransform", PyvtkContext2D_SetTransform, METH_VARARGS,
   "SetTransform(self, transform:vtkTransform2D) -> None\nC++: void SetTransform(vtkTransform2D *transform)\n\nSet the transform for the context, the underlying device will use\nthe matrix of the transform. Note, this is set immediately, later\nchanges to the matrix will have no effect until it is set again.\n"},
  {"GetTransform", PyvtkContext2D_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform2D\nC++: vtkTransform2D *GetTransform()\n\nCompute the current transform applied to the context.\n"},
  {"AppendTransform", PyvtkContext2D_AppendTransform, METH_VARARGS,
   "AppendTransform(self, transform:vtkTransform2D) -> None\nC++: void AppendTransform(vtkTransform2D *transform)\n\nAppend the transform for the context, the underlying device will\nuse the matrix of the transform. Note, this is set immediately,\nlater changes to the matrix will have no effect until it is set\nagain. The matrix of the transform will multiply the current\ncontext transform.\n"},
  {"PushMatrix", PyvtkContext2D_PushMatrix, METH_VARARGS,
   "PushMatrix(self) -> None\nC++: void PushMatrix()\n\nPush/pop the transformation matrix for the painter (sets the\nunderlying matrix for the device when available).\n"},
  {"PopMatrix", PyvtkContext2D_PopMatrix, METH_VARARGS,
   "PopMatrix(self) -> None\nC++: void PopMatrix()\n\n"},
  {"ApplyId", PyvtkContext2D_ApplyId, METH_VARARGS,
   "ApplyId(self, id:int) -> None\nC++: void ApplyId(vtkIdType id)\n\nApply id as a color.\n"},
  {"FloatToInt", PyvtkContext2D_FloatToInt, METH_VARARGS,
   "FloatToInt(x:float) -> int\nC++: static int FloatToInt(float x)\n\nFloat to int conversion, performs truncation but with a rounding\ntolerance for float values that are within 1/256 of their closest\ninteger.\n"},
  {"GetContext3D", PyvtkContext2D_GetContext3D, METH_VARARGS,
   "GetContext3D(self) -> vtkContext3D\nC++: virtual vtkContext3D *GetContext3D()\n\nGet the vtkContext3D device, in order to do some 3D rendering.\nThis API is very experimental, and may be moved around.\n"},
  {"SetContext3D", PyvtkContext2D_SetContext3D, METH_VARARGS,
   "SetContext3D(self, context:vtkContext3D) -> None\nC++: virtual void SetContext3D(vtkContext3D *context)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkContext2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("transform"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetTransform(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkContext2D_SetTransform(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkContext2D_SetTransform(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTransform/SetTransform\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("context3d"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetContext3D(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkContext2D_SetContext3D(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkContext2D_SetContext3D(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContext3D/SetContext3D\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("device"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetDevice(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDevice\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("buffer_id_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetBufferIdMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBufferIdMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("brush"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetBrush(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBrush\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("text_prop"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkContext2D_GetTextProp(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTextProp\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkContext2D_Doc =
  "vtkContext2D - Class for drawing 2D primitives to a graphical context.\n\n"
  "Superclass: vtkObject\n\n"
  "This defines the interface for drawing onto a 2D context. The context\n"
  "must be set up with a vtkContextDevice2D derived class that provides\n"
  "the functions to facilitate the low level calls to the context.\n"
  "Currently only an OpenGL based device is provided, but this could be\n"
  "extended in the future.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContext2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkContext2D", // tp_name
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
  PyvtkContext2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContext2D_StaticNew()
{
  return vtkContext2D::New();
}

PyObject *PyvtkContext2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContext2D_Type, PyvtkContext2D_Methods,
    "vtkContext2D",
 &PyvtkContext2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkContext2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContext2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContext2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContext2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

