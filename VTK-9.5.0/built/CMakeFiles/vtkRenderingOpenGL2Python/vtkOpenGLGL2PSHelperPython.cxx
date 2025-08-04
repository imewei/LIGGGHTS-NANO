// python wrapper for vtkOpenGLGL2PSHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLGL2PSHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOpenGLGL2PSHelper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOpenGLGL2PSHelper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGL2PSHelper_State_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLGL2PSHelper.State", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkOpenGLGL2PSHelper_State_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLGL2PSHelper_State_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLGL2PSHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGL2PSHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGL2PSHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGL2PSHelper *tempr = vtkOpenGLGL2PSHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGL2PSHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGL2PSHelper::NewInstance());

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
PyvtkOpenGLGL2PSHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLGL2PSHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLGL2PSHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLGL2PSHelper *tempr = vtkOpenGLGL2PSHelper::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_SetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkOpenGLGL2PSHelper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLGL2PSHelper"))
  {
    vtkOpenGLGL2PSHelper::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkOpenGLGL2PSHelper::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetActiveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLGL2PSHelper::State tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetActiveState() :
      op->vtkOpenGLGL2PSHelper::GetActiveState());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLGL2PSHelper_State_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkOpenGLGL2PSHelper::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkOpenGLGL2PSHelper::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkOpenGLGL2PSHelper::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkOpenGLGL2PSHelper::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_SetLineStipple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStipple(temp0);
    }
    else
    {
      op->vtkOpenGLGL2PSHelper::SetLineStipple(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_GetLineStipple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetLineStipple() :
      op->vtkOpenGLGL2PSHelper::GetLineStipple());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    op->ProcessTransformFeedback(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  unsigned char temp2[4];
  unsigned char save2[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->ProcessTransformFeedback(temp0, temp1, temp2);

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
PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  float temp2[4];
  float save2[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->ProcessTransformFeedback(temp0, temp1, temp2);

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

static PyMethodDef PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_Methods[] = {
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s1, METH_VARARGS,
   "@VVV *vtkTransformFeedback *vtkRenderer *vtkActor"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s2, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *B"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_s3, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessTransformFeedback");
  return nullptr;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_DrawString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  std::string temp0;
  vtkTextProperty *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  double temp3;
  vtkRenderer *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->DrawString(temp0, temp1, temp2, temp3, temp4);

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
PyvtkOpenGLGL2PSHelper_DrawPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkPath *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  size_t size4 = 0;
  double store4[2*2];
  double *temp4 = nullptr;
  double *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  double temp5 = 0.0;
  float temp6 = -1;
  const char *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 8) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    op->DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_Draw3DPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Draw3DPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkPath *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  vtkRenderer *temp4 = nullptr;
  const char *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkRenderer") &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    op->Draw3DPath(temp0, temp1, temp2, temp3, temp4, temp5);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelper_DrawImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelper *op = static_cast<vtkOpenGLGL2PSHelper *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->DrawImage(temp0, temp1);

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

static PyMethodDef PyvtkOpenGLGL2PSHelper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGL2PSHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGL2PSHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGL2PSHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLGL2PSHelper\nC++: static vtkOpenGLGL2PSHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGL2PSHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLGL2PSHelper\nC++: vtkOpenGLGL2PSHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLGL2PSHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLGL2PSHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkOpenGLGL2PSHelper_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkOpenGLGL2PSHelper\nC++: static vtkOpenGLGL2PSHelper *GetInstance()\n\nThe global instance. Only set during export.\n"},
  {"SetInstance", PyvtkOpenGLGL2PSHelper_SetInstance, METH_VARARGS,
   "SetInstance(__a:vtkOpenGLGL2PSHelper) -> None\nC++: static void SetInstance(vtkOpenGLGL2PSHelper *)\n\n"},
  {"GetRenderWindow", PyvtkOpenGLGL2PSHelper_GetRenderWindow, METH_VARARGS,
   "GetRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nGet the renderwindow that's being exported.\n"},
  {"GetActiveState", PyvtkOpenGLGL2PSHelper_GetActiveState, METH_VARARGS,
   "GetActiveState(self) -> State\nC++: virtual State GetActiveState()\n\nGet the current export state. Vector images are rendered in two\npasses: First, all non-vectorizable props are rendered, and the\nresulting image is inserted as a raster image into the background\nof the exported file (ActiveState == Background). Next, all\nvectorizable props are drawn and captured into GL2PS, where they\nare drawn over the background image. Vectorizable props should\nnot draw themselves during the background pass, and use the\nvtkOpenGLGL2PSHelper API to draw themselves during the capture\npass.\n"},
  {"SetPointSize", PyvtkOpenGLGL2PSHelper_SetPointSize, METH_VARARGS,
   "SetPointSize(self, _arg:float) -> None\nC++: virtual void SetPointSize(float _arg)\n\nSet/Get the current point size.\n"},
  {"GetPointSize", PyvtkOpenGLGL2PSHelper_GetPointSize, METH_VARARGS,
   "GetPointSize(self) -> float\nC++: virtual float GetPointSize()\n\n"},
  {"SetLineWidth", PyvtkOpenGLGL2PSHelper_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(float _arg)\n\nSet/Get the current line width.\n"},
  {"GetLineWidth", PyvtkOpenGLGL2PSHelper_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual float GetLineWidth()\n\n"},
  {"SetLineStipple", PyvtkOpenGLGL2PSHelper_SetLineStipple, METH_VARARGS,
   "SetLineStipple(self, _arg:int) -> None\nC++: virtual void SetLineStipple(unsigned short _arg)\n\nSet/Get the current line stipple pattern per OpenGL convention.\nDefault is 0xffff.\n"},
  {"GetLineStipple", PyvtkOpenGLGL2PSHelper_GetLineStipple, METH_VARARGS,
   "GetLineStipple(self) -> int\nC++: virtual unsigned short GetLineStipple()\n\n"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelper_ProcessTransformFeedback, METH_VARARGS,
   "ProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, act:vtkActor) -> None\nC++: virtual void ProcessTransformFeedback(\n    vtkTransformFeedback *tfc, vtkRenderer *ren, vtkActor *act)\nProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, col:[int, int, int, int]) -> None\nC++: virtual void ProcessTransformFeedback(\n    vtkTransformFeedback *tfc, vtkRenderer *ren,\n    unsigned char col[4])\nProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, col:[float, float, float, float]) -> None\nC++: virtual void ProcessTransformFeedback(\n    vtkTransformFeedback *tfc, vtkRenderer *ren, float col[4])\n\nParse the vertex information in tfc and inject primitives into\nGL2PS. ren is used to obtain viewport information to complete the\nvertex transformation into pixel coordinates, and act/col are\nused to color the vertices when tfc does not contain color\ninformation.\n"},
  {"DrawString", PyvtkOpenGLGL2PSHelper_DrawString, METH_VARARGS,
   "DrawString(self, str:str, tprop:vtkTextProperty, pos:[float,\n    float, float], backgroundDepth:float, ren:vtkRenderer) -> None\nC++: virtual void DrawString(const std::string &str,\n    vtkTextProperty *tprop, double pos[3], double backgroundDepth,\n     vtkRenderer *ren)\n\nFormat the text in str according to tprop and instruct GL2PS to\ndraw it at pixel coordinate pos. Background depth is the z value\nfor the background quad, and should be in NDC space. The drawing\nis always done in the overlay plane.\n@sa TextAsPath\n"},
  {"DrawPath", PyvtkOpenGLGL2PSHelper_DrawPath, METH_VARARGS,
   "DrawPath(self, path:vtkPath, rasterPos:[float, float, float],\n    windowPos:[float, float], rgba:[int, int, int, int],\n    scale:[float, float]=..., rotateAngle:float=0.0,\n    strokeWidth:float=-1, label:str=...) -> None\nC++: virtual void DrawPath(vtkPath *path, double rasterPos[3],\n    double windowPos[2], unsigned char rgba[4],\n    double scale[2]=nullptr, double rotateAngle=0.0,\n    float strokeWidth=-1, const char *label=nullptr)\n\nGenerate PS, EPS, or SVG markup from a vtkPath object, and then\ninject it into the output using the gl2psSpecial command. The\npath is translated uniformly in the scene by windowPos. It is\nscaled by scale and rotated counter-clockwise by rotateAngle. The\nrasterPos is in world coordinates and determines clipping and\ndepth. If scale is NULL, no scaling is done. If strokeWidth is\npositive, the path will be stroked with the indicated width. If\nzero or negative, the path will be filled (default). The label\nstring is inserted into the GL2PS output at the beginning of the\npath specification as a comment on supported backends.\n"},
  {"Draw3DPath", PyvtkOpenGLGL2PSHelper_Draw3DPath, METH_VARARGS,
   "Draw3DPath(self, path:vtkPath, actorMatrix:vtkMatrix4x4,\n    rasterPos:[float, float, float], actorColor:[int, int, int,\n    int], ren:vtkRenderer, label:str=...) -> None\nC++: virtual void Draw3DPath(vtkPath *path,\n    vtkMatrix4x4 *actorMatrix, double rasterPos[3],\n    unsigned char actorColor[4], vtkRenderer *ren,\n    const char *label=nullptr)\n\nTransform the path using the actor's matrix and current GL state,\nthen draw it to GL2PS. The label string is inserted into the\nGL2PS output at the beginning of the path specification as a\ncomment on supported backends.\n"},
  {"DrawImage", PyvtkOpenGLGL2PSHelper_DrawImage, METH_VARARGS,
   "DrawImage(self, image:vtkImageData, pos:[float, float, float])\n    -> None\nC++: virtual void DrawImage(vtkImageData *image, double pos[3])\n\nDraw the image at pos. Image must be RGB or RGBA with float\nscalars.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOpenGLGL2PSHelper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("instance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetInstance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLGL2PSHelper_SetInstance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLGL2PSHelper_SetInstance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInstance/SetInstance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetPointSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLGL2PSHelper_SetPointSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLGL2PSHelper_SetPointSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPointSize/SetPointSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("line_width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetLineWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLGL2PSHelper_SetLineWidth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLGL2PSHelper_SetLineWidth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLineWidth/SetLineWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("line_stipple"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetLineStipple(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOpenGLGL2PSHelper_SetLineStipple(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOpenGLGL2PSHelper_SetLineStipple(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLineStipple/SetLineStipple\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("active_state"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetActiveState(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetActiveState\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("render_window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOpenGLGL2PSHelper_GetRenderWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRenderWindow\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOpenGLGL2PSHelper_Doc =
  "vtkOpenGLGL2PSHelper - Access GL2PS functionality.\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides convenience functions that can be used to draw\n"
  "into a GL2PS context. Link to vtkRenderingGL2PSOpenGL2 to bring in\n"
  "the vtkOpenGLGL2PSHelperImpl class, the object factory override that\n"
  "implements this interface.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGL2PSHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLGL2PSHelper", // tp_name
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
  PyvtkOpenGLGL2PSHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGL2PSHelper_StaticNew()
{
  return vtkOpenGLGL2PSHelper::New();
}

PyObject *PyvtkOpenGLGL2PSHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLGL2PSHelper_Type, PyvtkOpenGLGL2PSHelper_Methods,
    "vtkOpenGLGL2PSHelper",
 &PyvtkOpenGLGL2PSHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLGL2PSHelper_State_Type);
  PyVTKEnum_Add(&PyvtkOpenGLGL2PSHelper_State_Type, "vtkOpenGLGL2PSHelper.State");

  o = (PyObject *)&PyvtkOpenGLGL2PSHelper_State_Type;
  if (PyDict_SetItemString(d, "State", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOpenGLGL2PSHelper::State cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Inactive", vtkOpenGLGL2PSHelper::Inactive },
        { "Background", vtkOpenGLGL2PSHelper::Background },
        { "Capture", vtkOpenGLGL2PSHelper::Capture },
      };

    o = PyvtkOpenGLGL2PSHelper_State_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOpenGLGL2PSHelper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGL2PSHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGL2PSHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGL2PSHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

