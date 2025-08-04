// python wrapper for vtkMedicalImageReader2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMedicalImageReader2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMedicalImageReader2(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMedicalImageReader2_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static PyObject *
PyvtkMedicalImageReader2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMedicalImageReader2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMedicalImageReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMedicalImageReader2 *tempr = vtkMedicalImageReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMedicalImageReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMedicalImageReader2::NewInstance());

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
PyvtkMedicalImageReader2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMedicalImageReader2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMedicalImageReader2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetMedicalImageProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedicalImageProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMedicalImageProperties *tempr = (ap.IsBound() ?
      op->GetMedicalImageProperties() :
      op->vtkMedicalImageReader2::GetMedicalImageProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientName(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetPatientName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatientName() :
      op->vtkMedicalImageReader2::GetPatientName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientID(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetPatientID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatientID() :
      op->vtkMedicalImageReader2::GetPatientID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDate(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDate() :
      op->vtkMedicalImageReader2::GetDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeries(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetSeries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSeries() :
      op->vtkMedicalImageReader2::GetSeries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudy(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetStudy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStudy() :
      op->vtkMedicalImageReader2::GetStudy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageNumber(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetImageNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetImageNumber() :
      op->vtkMedicalImageReader2::GetImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModality(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetModality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModality() :
      op->vtkMedicalImageReader2::GetModality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMedicalImageReader2_Methods[] = {
  {"IsTypeOf", PyvtkMedicalImageReader2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMedicalImageReader2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMedicalImageReader2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMedicalImageReader2\nC++: static vtkMedicalImageReader2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMedicalImageReader2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMedicalImageReader2\nC++: vtkMedicalImageReader2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMedicalImageReader2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMedicalImageReader2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMedicalImageProperties", PyvtkMedicalImageReader2_GetMedicalImageProperties, METH_VARARGS,
   "GetMedicalImageProperties(self) -> vtkMedicalImageProperties\nC++: virtual vtkMedicalImageProperties *GetMedicalImageProperties(\n    )\n\nGet the medical image properties object\n"},
  {"SetPatientName", PyvtkMedicalImageReader2_SetPatientName, METH_VARARGS,
   "SetPatientName(self, __a:str) -> None\nC++: virtual void SetPatientName(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetPatientName", PyvtkMedicalImageReader2_GetPatientName, METH_VARARGS,
   "GetPatientName(self) -> str\nC++: virtual const char *GetPatientName()\n\n"},
  {"SetPatientID", PyvtkMedicalImageReader2_SetPatientID, METH_VARARGS,
   "SetPatientID(self, __a:str) -> None\nC++: virtual void SetPatientID(const char *)\n\n"},
  {"GetPatientID", PyvtkMedicalImageReader2_GetPatientID, METH_VARARGS,
   "GetPatientID(self) -> str\nC++: virtual const char *GetPatientID()\n\n"},
  {"SetDate", PyvtkMedicalImageReader2_SetDate, METH_VARARGS,
   "SetDate(self, __a:str) -> None\nC++: virtual void SetDate(const char *)\n\n"},
  {"GetDate", PyvtkMedicalImageReader2_GetDate, METH_VARARGS,
   "GetDate(self) -> str\nC++: virtual const char *GetDate()\n\n"},
  {"SetSeries", PyvtkMedicalImageReader2_SetSeries, METH_VARARGS,
   "SetSeries(self, __a:str) -> None\nC++: virtual void SetSeries(const char *)\n\n"},
  {"GetSeries", PyvtkMedicalImageReader2_GetSeries, METH_VARARGS,
   "GetSeries(self) -> str\nC++: virtual const char *GetSeries()\n\n"},
  {"SetStudy", PyvtkMedicalImageReader2_SetStudy, METH_VARARGS,
   "SetStudy(self, __a:str) -> None\nC++: virtual void SetStudy(const char *)\n\n"},
  {"GetStudy", PyvtkMedicalImageReader2_GetStudy, METH_VARARGS,
   "GetStudy(self) -> str\nC++: virtual const char *GetStudy()\n\n"},
  {"SetImageNumber", PyvtkMedicalImageReader2_SetImageNumber, METH_VARARGS,
   "SetImageNumber(self, __a:str) -> None\nC++: virtual void SetImageNumber(const char *)\n\n"},
  {"GetImageNumber", PyvtkMedicalImageReader2_GetImageNumber, METH_VARARGS,
   "GetImageNumber(self) -> str\nC++: virtual const char *GetImageNumber()\n\n"},
  {"SetModality", PyvtkMedicalImageReader2_SetModality, METH_VARARGS,
   "SetModality(self, __a:str) -> None\nC++: virtual void SetModality(const char *)\n\n"},
  {"GetModality", PyvtkMedicalImageReader2_GetModality, METH_VARARGS,
   "GetModality(self) -> str\nC++: virtual const char *GetModality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMedicalImageReader2_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("patient_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetPatientName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetPatientName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetPatientName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPatientName/SetPatientName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("patient_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetPatientID(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetPatientID(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetPatientID(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPatientID/SetPatientID\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("date"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetDate(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetDate(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetDate(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDate/SetDate\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("series"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetSeries(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetSeries(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetSeries(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSeries/SetSeries\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("study"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetStudy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetStudy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetStudy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStudy/SetStudy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("image_number"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetImageNumber(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetImageNumber(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetImageNumber(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetImageNumber/SetImageNumber\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("modality"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetModality(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMedicalImageReader2_SetModality(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMedicalImageReader2_SetModality(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetModality/SetModality\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("medical_image_properties"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMedicalImageReader2_GetMedicalImageProperties(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMedicalImageProperties\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMedicalImageReader2_Doc =
  "vtkMedicalImageReader2 - vtkImageReader2 with medical meta data.\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkMedicalImageReader2 is a parent class for medical image readers.\n"
  "It provides a place to store patient information that may be stored\n"
  "in the image header.\n"
  "@sa\n"
  "vtkImageReader2 vtkGESignaReader vtkMedicalImageProperties\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMedicalImageReader2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkMedicalImageReader2", // tp_name
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
  PyvtkMedicalImageReader2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMedicalImageReader2_StaticNew()
{
  return vtkMedicalImageReader2::New();
}

PyObject *PyvtkMedicalImageReader2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMedicalImageReader2_Type, PyvtkMedicalImageReader2_Methods,
    "vtkMedicalImageReader2",
 &PyvtkMedicalImageReader2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMedicalImageReader2_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMedicalImageReader2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMedicalImageReader2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMedicalImageReader2", o) != 0)
  {
    Py_DECREF(o);
  }

}

