// python wrapper for vtkStringToNumeric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToNumeric.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkStringToNumeric(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkStringToNumeric_ClassNew(); }


static PyObject *
PyvtkStringToNumeric_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringToNumeric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToNumeric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringToNumeric *tempr = vtkStringToNumeric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToNumeric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToNumeric::NewInstance());

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
PyvtkStringToNumeric_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStringToNumeric::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStringToNumeric::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceDouble(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetForceDouble(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceDouble() :
      op->vtkStringToNumeric::GetForceDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ForceDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOn();
    }
    else
    {
      op->vtkStringToNumeric::ForceDoubleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ForceDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOff();
    }
    else
    {
      op->vtkStringToNumeric::ForceDoubleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultIntegerValue(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetDefaultIntegerValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIntegerValue() :
      op->vtkStringToNumeric::GetDefaultIntegerValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultDoubleValue(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetDefaultDoubleValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultDoubleValue() :
      op->vtkStringToNumeric::GetDefaultDoubleValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetTrimWhitespacePriorToNumericConversion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTrimWhitespacePriorToNumericConversion() :
      op->vtkStringToNumeric::GetTrimWhitespacePriorToNumericConversion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOn();
    }
    else
    {
      op->vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOff();
    }
    else
    {
      op->vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertFieldData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertFieldData() :
      op->vtkStringToNumeric::GetConvertFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertFieldDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertFieldDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertPointData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertPointData() :
      op->vtkStringToNumeric::GetConvertPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPointDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPointDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertCellData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertCellData() :
      op->vtkStringToNumeric::GetConvertCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertCellDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertCellDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertVertexData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertVertexData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertVertexData() :
      op->vtkStringToNumeric::GetConvertVertexData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertVertexDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertVertexDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertVertexDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertVertexDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertEdgeData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertEdgeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertEdgeData() :
      op->vtkStringToNumeric::GetConvertEdgeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertEdgeDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertEdgeDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertEdgeDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertEdgeDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertRowData(temp0);
    }
    else
    {
      op->vtkStringToNumeric::SetConvertRowData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertRowData() :
      op->vtkStringToNumeric::GetConvertRowData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertRowDataOn();
    }
    else
    {
      op->vtkStringToNumeric::ConvertRowDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertRowDataOff();
    }
    else
    {
      op->vtkStringToNumeric::ConvertRowDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStringToNumeric_Methods[] = {
  {"IsTypeOf", PyvtkStringToNumeric_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringToNumeric_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringToNumeric_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStringToNumeric\nC++: static vtkStringToNumeric *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringToNumeric_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStringToNumeric\nC++: vtkStringToNumeric *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStringToNumeric_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStringToNumeric_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetForceDouble", PyvtkStringToNumeric_SetForceDouble, METH_VARARGS,
   "SetForceDouble(self, _arg:bool) -> None\nC++: virtual void SetForceDouble(bool _arg)\n\nConvert all numeric columns to vtkDoubleArray, even if they\ncontain only integer values. Default is off.\n"},
  {"GetForceDouble", PyvtkStringToNumeric_GetForceDouble, METH_VARARGS,
   "GetForceDouble(self) -> bool\nC++: virtual bool GetForceDouble()\n\n"},
  {"ForceDoubleOn", PyvtkStringToNumeric_ForceDoubleOn, METH_VARARGS,
   "ForceDoubleOn(self) -> None\nC++: virtual void ForceDoubleOn()\n\n"},
  {"ForceDoubleOff", PyvtkStringToNumeric_ForceDoubleOff, METH_VARARGS,
   "ForceDoubleOff(self) -> None\nC++: virtual void ForceDoubleOff()\n\n"},
  {"SetDefaultIntegerValue", PyvtkStringToNumeric_SetDefaultIntegerValue, METH_VARARGS,
   "SetDefaultIntegerValue(self, _arg:int) -> None\nC++: virtual void SetDefaultIntegerValue(int _arg)\n\nSet the default integer value assigned to arrays.  Default is 0.\n"},
  {"GetDefaultIntegerValue", PyvtkStringToNumeric_GetDefaultIntegerValue, METH_VARARGS,
   "GetDefaultIntegerValue(self) -> int\nC++: virtual int GetDefaultIntegerValue()\n\n"},
  {"SetDefaultDoubleValue", PyvtkStringToNumeric_SetDefaultDoubleValue, METH_VARARGS,
   "SetDefaultDoubleValue(self, _arg:float) -> None\nC++: virtual void SetDefaultDoubleValue(double _arg)\n\nSet the default double value assigned to arrays.  Default is 0.0\n"},
  {"GetDefaultDoubleValue", PyvtkStringToNumeric_GetDefaultDoubleValue, METH_VARARGS,
   "GetDefaultDoubleValue(self) -> float\nC++: virtual double GetDefaultDoubleValue()\n\n"},
  {"SetTrimWhitespacePriorToNumericConversion", PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "SetTrimWhitespacePriorToNumericConversion(self, _arg:bool) -> None\nC++: virtual void SetTrimWhitespacePriorToNumericConversion(\n    bool _arg)\n\nWhether to trim whitespace from strings prior to conversion to a\nnumeric. Default is false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"GetTrimWhitespacePriorToNumericConversion", PyvtkStringToNumeric_GetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "GetTrimWhitespacePriorToNumericConversion(self) -> bool\nC++: virtual bool GetTrimWhitespacePriorToNumericConversion()\n\n"},
  {"TrimWhitespacePriorToNumericConversionOn", PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOn, METH_VARARGS,
   "TrimWhitespacePriorToNumericConversionOn(self) -> None\nC++: virtual void TrimWhitespacePriorToNumericConversionOn()\n\n"},
  {"TrimWhitespacePriorToNumericConversionOff", PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOff, METH_VARARGS,
   "TrimWhitespacePriorToNumericConversionOff(self) -> None\nC++: virtual void TrimWhitespacePriorToNumericConversionOff()\n\n"},
  {"SetConvertFieldData", PyvtkStringToNumeric_SetConvertFieldData, METH_VARARGS,
   "SetConvertFieldData(self, _arg:bool) -> None\nC++: virtual void SetConvertFieldData(bool _arg)\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {"GetConvertFieldData", PyvtkStringToNumeric_GetConvertFieldData, METH_VARARGS,
   "GetConvertFieldData(self) -> bool\nC++: virtual bool GetConvertFieldData()\n\n"},
  {"ConvertFieldDataOn", PyvtkStringToNumeric_ConvertFieldDataOn, METH_VARARGS,
   "ConvertFieldDataOn(self) -> None\nC++: virtual void ConvertFieldDataOn()\n\n"},
  {"ConvertFieldDataOff", PyvtkStringToNumeric_ConvertFieldDataOff, METH_VARARGS,
   "ConvertFieldDataOff(self) -> None\nC++: virtual void ConvertFieldDataOff()\n\n"},
  {"SetConvertPointData", PyvtkStringToNumeric_SetConvertPointData, METH_VARARGS,
   "SetConvertPointData(self, _arg:bool) -> None\nC++: virtual void SetConvertPointData(bool _arg)\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {"GetConvertPointData", PyvtkStringToNumeric_GetConvertPointData, METH_VARARGS,
   "GetConvertPointData(self) -> bool\nC++: virtual bool GetConvertPointData()\n\n"},
  {"ConvertPointDataOn", PyvtkStringToNumeric_ConvertPointDataOn, METH_VARARGS,
   "ConvertPointDataOn(self) -> None\nC++: virtual void ConvertPointDataOn()\n\n"},
  {"ConvertPointDataOff", PyvtkStringToNumeric_ConvertPointDataOff, METH_VARARGS,
   "ConvertPointDataOff(self) -> None\nC++: virtual void ConvertPointDataOff()\n\n"},
  {"SetConvertCellData", PyvtkStringToNumeric_SetConvertCellData, METH_VARARGS,
   "SetConvertCellData(self, _arg:bool) -> None\nC++: virtual void SetConvertCellData(bool _arg)\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {"GetConvertCellData", PyvtkStringToNumeric_GetConvertCellData, METH_VARARGS,
   "GetConvertCellData(self) -> bool\nC++: virtual bool GetConvertCellData()\n\n"},
  {"ConvertCellDataOn", PyvtkStringToNumeric_ConvertCellDataOn, METH_VARARGS,
   "ConvertCellDataOn(self) -> None\nC++: virtual void ConvertCellDataOn()\n\n"},
  {"ConvertCellDataOff", PyvtkStringToNumeric_ConvertCellDataOff, METH_VARARGS,
   "ConvertCellDataOff(self) -> None\nC++: virtual void ConvertCellDataOff()\n\n"},
  {"SetConvertVertexData", PyvtkStringToNumeric_SetConvertVertexData, METH_VARARGS,
   "SetConvertVertexData(self, b:bool) -> None\nC++: virtual void SetConvertVertexData(bool b)\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {"GetConvertVertexData", PyvtkStringToNumeric_GetConvertVertexData, METH_VARARGS,
   "GetConvertVertexData(self) -> bool\nC++: virtual bool GetConvertVertexData()\n\n"},
  {"ConvertVertexDataOn", PyvtkStringToNumeric_ConvertVertexDataOn, METH_VARARGS,
   "ConvertVertexDataOn(self) -> None\nC++: virtual void ConvertVertexDataOn()\n\n"},
  {"ConvertVertexDataOff", PyvtkStringToNumeric_ConvertVertexDataOff, METH_VARARGS,
   "ConvertVertexDataOff(self) -> None\nC++: virtual void ConvertVertexDataOff()\n\n"},
  {"SetConvertEdgeData", PyvtkStringToNumeric_SetConvertEdgeData, METH_VARARGS,
   "SetConvertEdgeData(self, b:bool) -> None\nC++: virtual void SetConvertEdgeData(bool b)\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {"GetConvertEdgeData", PyvtkStringToNumeric_GetConvertEdgeData, METH_VARARGS,
   "GetConvertEdgeData(self) -> bool\nC++: virtual bool GetConvertEdgeData()\n\n"},
  {"ConvertEdgeDataOn", PyvtkStringToNumeric_ConvertEdgeDataOn, METH_VARARGS,
   "ConvertEdgeDataOn(self) -> None\nC++: virtual void ConvertEdgeDataOn()\n\n"},
  {"ConvertEdgeDataOff", PyvtkStringToNumeric_ConvertEdgeDataOff, METH_VARARGS,
   "ConvertEdgeDataOff(self) -> None\nC++: virtual void ConvertEdgeDataOff()\n\n"},
  {"SetConvertRowData", PyvtkStringToNumeric_SetConvertRowData, METH_VARARGS,
   "SetConvertRowData(self, b:bool) -> None\nC++: virtual void SetConvertRowData(bool b)\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {"GetConvertRowData", PyvtkStringToNumeric_GetConvertRowData, METH_VARARGS,
   "GetConvertRowData(self) -> bool\nC++: virtual bool GetConvertRowData()\n\n"},
  {"ConvertRowDataOn", PyvtkStringToNumeric_ConvertRowDataOn, METH_VARARGS,
   "ConvertRowDataOn(self) -> None\nC++: virtual void ConvertRowDataOn()\n\n"},
  {"ConvertRowDataOff", PyvtkStringToNumeric_ConvertRowDataOff, METH_VARARGS,
   "ConvertRowDataOff(self) -> None\nC++: virtual void ConvertRowDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkStringToNumeric_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("force_double"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetForceDouble(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetForceDouble(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetForceDouble(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetForceDouble/SetForceDouble\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("default_integer_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetDefaultIntegerValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetDefaultIntegerValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetDefaultIntegerValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDefaultIntegerValue/SetDefaultIntegerValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("default_double_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetDefaultDoubleValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetDefaultDoubleValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetDefaultDoubleValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDefaultDoubleValue/SetDefaultDoubleValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("trim_whitespace_prior_to_numeric_conversion"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetTrimWhitespacePriorToNumericConversion(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTrimWhitespacePriorToNumericConversion/SetTrimWhitespacePriorToNumericConversion\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_field_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertFieldData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertFieldData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertFieldData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertFieldData/SetConvertFieldData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_point_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertPointData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertPointData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertPointData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertPointData/SetConvertPointData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_cell_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertCellData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertCellData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertCellData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertCellData/SetConvertCellData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_vertex_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertVertexData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertVertexData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertVertexData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertVertexData/SetConvertVertexData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_edge_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertEdgeData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertEdgeData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertEdgeData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertEdgeData/SetConvertEdgeData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_row_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToNumeric_GetConvertRowData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStringToNumeric_SetConvertRowData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStringToNumeric_SetConvertRowData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertRowData/SetConvertRowData\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkStringToNumeric_Doc =
  "vtkStringToNumeric - Converts string arrays to numeric arrays\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkStringToNumeric is a filter for converting a string array into a\n"
  "numeric arrays.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStringToNumeric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkStringToNumeric", // tp_name
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
  PyvtkStringToNumeric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStringToNumeric_StaticNew()
{
  return vtkStringToNumeric::New();
}

PyObject *PyvtkStringToNumeric_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStringToNumeric_Type, PyvtkStringToNumeric_Methods,
    "vtkStringToNumeric",
 &PyvtkStringToNumeric_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkStringToNumeric_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringToNumeric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringToNumeric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringToNumeric", o) != 0)
  {
    Py_DECREF(o);
  }

}

