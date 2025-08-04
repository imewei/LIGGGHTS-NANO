// python wrapper for vtkPNetCDFPOPReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPNetCDFPOPReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPNetCDFPOPReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPNetCDFPOPReader_ClassNew(); }


static PyObject *
PyvtkPNetCDFPOPReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPNetCDFPOPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPNetCDFPOPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPNetCDFPOPReader *tempr = vtkPNetCDFPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPNetCDFPOPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPNetCDFPOPReader::NewInstance());

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
PyvtkPNetCDFPOPReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPNetCDFPOPReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPNetCDFPOPReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPNetCDFPOPReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPNetCDFPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPNetCDFPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPNetCDFPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkPNetCDFPOPReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkPNetCDFPOPReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkPNetCDFPOPReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkPNetCDFPOPReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkPNetCDFPOPReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SetReaderRanks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReaderRanks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->SetReaderRanks(temp0);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetReaderRanks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPNetCDFPOPReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNetCDFPOPReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNetCDFPOPReader *op = static_cast<vtkPNetCDFPOPReader *>(vp);

  vtkMPIController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPNetCDFPOPReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPNetCDFPOPReader_Methods[] = {
  {"IsTypeOf", PyvtkPNetCDFPOPReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPNetCDFPOPReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPNetCDFPOPReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPNetCDFPOPReader\nC++: static vtkPNetCDFPOPReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPNetCDFPOPReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPNetCDFPOPReader\nC++: vtkPNetCDFPOPReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPNetCDFPOPReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPNetCDFPOPReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkPNetCDFPOPReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nThe file to open\n"},
  {"GetFileName", PyvtkPNetCDFPOPReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetStride", PyvtkPNetCDFPOPReader_SetStride, METH_VARARGS,
   "SetStride(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetStride(int _arg1, int _arg2, int _arg3)\nSetStride(self, _arg:(int, int, int)) -> None\nC++: virtual void SetStride(const int _arg[3])\n\nEnable subsampling in i,j and k dimensions in the\nvtkRectilinearGrid\n"},
  {"GetStride", PyvtkPNetCDFPOPReader_GetStride, METH_VARARGS,
   "GetStride(self) -> (int, int, int)\nC++: virtual int *GetStride()\n\n"},
  {"GetNumberOfVariableArrays", PyvtkPNetCDFPOPReader_GetNumberOfVariableArrays, METH_VARARGS,
   "GetNumberOfVariableArrays(self) -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkPNetCDFPOPReader_GetVariableArrayName, METH_VARARGS,
   "GetVariableArrayName(self, idx:int) -> str\nC++: virtual const char *GetVariableArrayName(int idx)\n\n"},
  {"GetVariableArrayStatus", PyvtkPNetCDFPOPReader_GetVariableArrayStatus, METH_VARARGS,
   "GetVariableArrayStatus(self, name:str) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\n"},
  {"SetVariableArrayStatus", PyvtkPNetCDFPOPReader_SetVariableArrayStatus, METH_VARARGS,
   "SetVariableArrayStatus(self, name:str, status:int) -> None\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\n"},
  {"SetReaderRanks", PyvtkPNetCDFPOPReader_SetReaderRanks, METH_VARARGS,
   "SetReaderRanks(self, __a:vtkIdList) -> None\nC++: void SetReaderRanks(vtkIdList *)\n\nSet ranks that will actually open and read the netCDF files. \nPass in null to chose reasonable defaults)\n"},
  {"GetController", PyvtkPNetCDFPOPReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMPIController\nC++: virtual vtkMPIController *GetController()\n\n"},
  {"SetController", PyvtkPNetCDFPOPReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMPIController) -> None\nC++: void SetController(vtkMPIController *controller)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPNetCDFPOPReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPNetCDFPOPReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPNetCDFPOPReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPNetCDFPOPReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stride"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPNetCDFPOPReader_GetStride(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPNetCDFPOPReader_SetStride(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPNetCDFPOPReader_SetStride(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStride/SetStride\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("reader_ranks"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPNetCDFPOPReader_SetReaderRanks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPNetCDFPOPReader_SetReaderRanks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetReaderRanks\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPNetCDFPOPReader_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPNetCDFPOPReader_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPNetCDFPOPReader_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_variable_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPNetCDFPOPReader_GetNumberOfVariableArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfVariableArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPNetCDFPOPReader_Doc =
  "vtkPNetCDFPOPReader - read NetCDF files in parallel with MPI .Author\nRoss Miller 03.14.2011\n\n"
  "Superclass: vtkRectilinearGridAlgorithm\n\n"
  "vtkNetCDFPOPReader is a source object that reads NetCDF files. It\n"
  "should be able to read most any NetCDF file that wants to output a\n"
  "rectilinear grid.  The ordering of the variables is changed such that\n"
  "the NetCDF x, y, z directions correspond to the vtkRectilinearGrid z,\n"
  "y, x directions, respectively.  The striding is done with respect to\n"
  "the vtkRectilinearGrid ordering.  Additionally, the z coordinates of\n"
  "the vtkRectilinearGrid are negated so that the first slice/plane has\n"
  "the highest z-value and the last slice/plane has the lowest z-value.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPNetCDFPOPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallelNetCDF.vtkPNetCDFPOPReader", // tp_name
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
  PyvtkPNetCDFPOPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPNetCDFPOPReader_StaticNew()
{
  return vtkPNetCDFPOPReader::New();
}

PyObject *PyvtkPNetCDFPOPReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPNetCDFPOPReader_Type, PyvtkPNetCDFPOPReader_Methods,
    "vtkPNetCDFPOPReader",
 &PyvtkPNetCDFPOPReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRectilinearGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPNetCDFPOPReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPNetCDFPOPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPNetCDFPOPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPNetCDFPOPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

