// python wrapper for vtkLSDynaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLSDynaReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLSDynaReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLSDynaReader_ClassNew(); }


static PyObject *
PyvtkLSDynaReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLSDynaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLSDynaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLSDynaReader *tempr = vtkLSDynaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLSDynaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLSDynaReader::NewInstance());

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
PyvtkLSDynaReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLSDynaReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLSDynaReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DebugDump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugDump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugDump();
    }
    else
    {
      op->vtkLSDynaReader::DebugDump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkLSDynaReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetDatabaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDatabaseDirectory(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetDatabaseDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDatabaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDatabaseDirectory() :
      op->vtkLSDynaReader::GetDatabaseDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_IsDatabaseValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDatabaseValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDatabaseValid() :
      op->vtkLSDynaReader::IsDatabaseValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  std::string temp0;
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
      op->vtkLSDynaReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkLSDynaReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkLSDynaReader::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkLSDynaReader::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkLSDynaReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkLSDynaReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfContinuumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContinuumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContinuumCells() :
      op->vtkLSDynaReader::GetNumberOfContinuumCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfSolidCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSolidCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfSolidCells() :
      op->vtkLSDynaReader::GetNumberOfSolidCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfThickShellCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThickShellCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfThickShellCells() :
      op->vtkLSDynaReader::GetNumberOfThickShellCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfShellCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShellCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfShellCells() :
      op->vtkLSDynaReader::GetNumberOfShellCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRigidBodyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRigidBodyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfRigidBodyCells() :
      op->vtkLSDynaReader::GetNumberOfRigidBodyCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRoadSurfaceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRoadSurfaceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfRoadSurfaceCells() :
      op->vtkLSDynaReader::GetNumberOfRoadSurfaceCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfBeamCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBeamCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfBeamCells() :
      op->vtkLSDynaReader::GetNumberOfBeamCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfParticleCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfParticleCells() :
      op->vtkLSDynaReader::GetNumberOfParticleCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkLSDynaReader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkLSDynaReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue(temp0) :
      op->vtkLSDynaReader::GetTimeValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkLSDynaReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetTimeStepRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetTimeStepRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLSDynaReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkLSDynaReader_SetTimeStepRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkLSDynaReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkLSDynaReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetPointArrayStatus_Methods[] = {
  {"SetPointArrayStatus", PyvtkLSDynaReader_SetPointArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetPointArrayStatus", PyvtkLSDynaReader_SetPointArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkLSDynaReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkLSDynaReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetPointArrayStatus_Methods[] = {
  {"GetPointArrayStatus", PyvtkLSDynaReader_GetPointArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetPointArrayStatus", PyvtkLSDynaReader_GetPointArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInPointArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInPointArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInPointArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInPointArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_Methods[] = {
  {"GetNumberOfComponentsInPointArray", PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInPointArray", PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInPointArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays(temp0) :
      op->vtkLSDynaReader::GetNumberOfCellArrays(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0, temp1) :
      op->vtkLSDynaReader::GetCellArrayName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

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
      op->SetCellArrayStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLSDynaReader::SetCellArrayStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLSDynaReader::SetCellArrayStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetCellArrayStatus_Methods[] = {
  {"SetCellArrayStatus", PyvtkLSDynaReader_SetCellArrayStatus_s1, METH_VARARGS,
   "@iii"},
  {"SetCellArrayStatus", PyvtkLSDynaReader_SetCellArrayStatus_s2, METH_VARARGS,
   "@izi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0, temp1) :
      op->vtkLSDynaReader::GetCellArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0, temp1) :
      op->vtkLSDynaReader::GetCellArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetCellArrayStatus_Methods[] = {
  {"GetCellArrayStatus", PyvtkLSDynaReader_GetCellArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"GetCellArrayStatus", PyvtkLSDynaReader_GetCellArrayStatus_s2, METH_VARARGS,
   "@iz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInCellArray(temp0, temp1) :
      op->vtkLSDynaReader::GetNumberOfComponentsInCellArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInCellArray(temp0, temp1) :
      op->vtkLSDynaReader::GetNumberOfComponentsInCellArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_Methods[] = {
  {"GetNumberOfComponentsInCellArray", PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s1, METH_VARARGS,
   "@ii"},
  {"GetNumberOfComponentsInCellArray", PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s2, METH_VARARGS,
   "@iz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInCellArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfSolidArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSolidArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSolidArrays() :
      op->vtkLSDynaReader::GetNumberOfSolidArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetSolidArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSolidArrayName(temp0) :
      op->vtkLSDynaReader::GetSolidArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSolidArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetSolidArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSolidArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetSolidArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetSolidArrayStatus_Methods[] = {
  {"SetSolidArrayStatus", PyvtkLSDynaReader_SetSolidArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetSolidArrayStatus", PyvtkLSDynaReader_SetSolidArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetSolidArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSolidArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidArrayStatus(temp0) :
      op->vtkLSDynaReader::GetSolidArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidArrayStatus(temp0) :
      op->vtkLSDynaReader::GetSolidArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetSolidArrayStatus_Methods[] = {
  {"GetSolidArrayStatus", PyvtkLSDynaReader_GetSolidArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetSolidArrayStatus", PyvtkLSDynaReader_GetSolidArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetSolidArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSolidArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInSolidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInSolidArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInSolidArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInSolidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInSolidArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInSolidArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_Methods[] = {
  {"GetNumberOfComponentsInSolidArray", PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInSolidArray", PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInSolidArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfThickShellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThickShellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThickShellArrays() :
      op->vtkLSDynaReader::GetNumberOfThickShellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetThickShellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetThickShellArrayName(temp0) :
      op->vtkLSDynaReader::GetThickShellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetThickShellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetThickShellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetThickShellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetThickShellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetThickShellArrayStatus_Methods[] = {
  {"SetThickShellArrayStatus", PyvtkLSDynaReader_SetThickShellArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetThickShellArrayStatus", PyvtkLSDynaReader_SetThickShellArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetThickShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetThickShellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickShellArrayStatus(temp0) :
      op->vtkLSDynaReader::GetThickShellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickShellArrayStatus(temp0) :
      op->vtkLSDynaReader::GetThickShellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetThickShellArrayStatus_Methods[] = {
  {"GetThickShellArrayStatus", PyvtkLSDynaReader_GetThickShellArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetThickShellArrayStatus", PyvtkLSDynaReader_GetThickShellArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetThickShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetThickShellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInThickShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInThickShellArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInThickShellArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInThickShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInThickShellArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInThickShellArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_Methods[] = {
  {"GetNumberOfComponentsInThickShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInThickShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInThickShellArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfShellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfShellArrays() :
      op->vtkLSDynaReader::GetNumberOfShellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetShellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShellArrayName(temp0) :
      op->vtkLSDynaReader::GetShellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetShellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetShellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetShellArrayStatus_Methods[] = {
  {"SetShellArrayStatus", PyvtkLSDynaReader_SetShellArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetShellArrayStatus", PyvtkLSDynaReader_SetShellArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShellArrayStatus(temp0) :
      op->vtkLSDynaReader::GetShellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShellArrayStatus(temp0) :
      op->vtkLSDynaReader::GetShellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetShellArrayStatus_Methods[] = {
  {"GetShellArrayStatus", PyvtkLSDynaReader_GetShellArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetShellArrayStatus", PyvtkLSDynaReader_GetShellArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetShellArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInShellArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInShellArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInShellArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInShellArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_Methods[] = {
  {"GetNumberOfComponentsInShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInShellArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRigidBodyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRigidBodyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRigidBodyArrays() :
      op->vtkLSDynaReader::GetNumberOfRigidBodyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRigidBodyArrayName(temp0) :
      op->vtkLSDynaReader::GetRigidBodyArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRigidBodyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetRigidBodyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRigidBodyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetRigidBodyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetRigidBodyArrayStatus_Methods[] = {
  {"SetRigidBodyArrayStatus", PyvtkLSDynaReader_SetRigidBodyArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetRigidBodyArrayStatus", PyvtkLSDynaReader_SetRigidBodyArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetRigidBodyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRigidBodyArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRigidBodyArrayStatus(temp0) :
      op->vtkLSDynaReader::GetRigidBodyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRigidBodyArrayStatus(temp0) :
      op->vtkLSDynaReader::GetRigidBodyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetRigidBodyArrayStatus_Methods[] = {
  {"GetRigidBodyArrayStatus", PyvtkLSDynaReader_GetRigidBodyArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetRigidBodyArrayStatus", PyvtkLSDynaReader_GetRigidBodyArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetRigidBodyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRigidBodyArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRigidBodyArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInRigidBodyArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInRigidBodyArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRigidBodyArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInRigidBodyArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInRigidBodyArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_Methods[] = {
  {"GetNumberOfComponentsInRigidBodyArray", PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInRigidBodyArray", PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInRigidBodyArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRoadSurfaceArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRoadSurfaceArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRoadSurfaceArrays() :
      op->vtkLSDynaReader::GetNumberOfRoadSurfaceArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRoadSurfaceArrayName(temp0) :
      op->vtkLSDynaReader::GetRoadSurfaceArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRoadSurfaceArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetRoadSurfaceArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRoadSurfaceArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetRoadSurfaceArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_Methods[] = {
  {"SetRoadSurfaceArrayStatus", PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetRoadSurfaceArrayStatus", PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRoadSurfaceArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRoadSurfaceArrayStatus(temp0) :
      op->vtkLSDynaReader::GetRoadSurfaceArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRoadSurfaceArrayStatus(temp0) :
      op->vtkLSDynaReader::GetRoadSurfaceArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_Methods[] = {
  {"GetRoadSurfaceArrayStatus", PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetRoadSurfaceArrayStatus", PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRoadSurfaceArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRoadSurfaceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInRoadSurfaceArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInRoadSurfaceArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRoadSurfaceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInRoadSurfaceArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInRoadSurfaceArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_Methods[] = {
  {"GetNumberOfComponentsInRoadSurfaceArray", PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInRoadSurfaceArray", PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInRoadSurfaceArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfBeamArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBeamArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBeamArrays() :
      op->vtkLSDynaReader::GetNumberOfBeamArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetBeamArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBeamArrayName(temp0) :
      op->vtkLSDynaReader::GetBeamArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBeamArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetBeamArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBeamArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetBeamArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetBeamArrayStatus_Methods[] = {
  {"SetBeamArrayStatus", PyvtkLSDynaReader_SetBeamArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetBeamArrayStatus", PyvtkLSDynaReader_SetBeamArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetBeamArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBeamArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBeamArrayStatus(temp0) :
      op->vtkLSDynaReader::GetBeamArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBeamArrayStatus(temp0) :
      op->vtkLSDynaReader::GetBeamArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetBeamArrayStatus_Methods[] = {
  {"GetBeamArrayStatus", PyvtkLSDynaReader_GetBeamArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetBeamArrayStatus", PyvtkLSDynaReader_GetBeamArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetBeamArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBeamArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInBeamArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInBeamArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInBeamArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInBeamArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInBeamArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInBeamArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_Methods[] = {
  {"GetNumberOfComponentsInBeamArray", PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInBeamArray", PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInBeamArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfParticleArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParticleArrays() :
      op->vtkLSDynaReader::GetNumberOfParticleArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetParticleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetParticleArrayName(temp0) :
      op->vtkLSDynaReader::GetParticleArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParticleArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetParticleArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParticleArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetParticleArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetParticleArrayStatus_Methods[] = {
  {"SetParticleArrayStatus", PyvtkLSDynaReader_SetParticleArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetParticleArrayStatus", PyvtkLSDynaReader_SetParticleArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetParticleArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetParticleArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParticleArrayStatus(temp0) :
      op->vtkLSDynaReader::GetParticleArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParticleArrayStatus(temp0) :
      op->vtkLSDynaReader::GetParticleArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetParticleArrayStatus_Methods[] = {
  {"GetParticleArrayStatus", PyvtkLSDynaReader_GetParticleArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetParticleArrayStatus", PyvtkLSDynaReader_GetParticleArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetParticleArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetParticleArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInParticleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInParticleArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInParticleArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInParticleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsInParticleArray(temp0) :
      op->vtkLSDynaReader::GetNumberOfComponentsInParticleArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_Methods[] = {
  {"GetNumberOfComponentsInParticleArray", PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s1, METH_VARARGS,
   "@i"},
  {"GetNumberOfComponentsInParticleArray", PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInParticleArray");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_SetDeformedMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeformedMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeformedMesh(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetDeformedMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDeformedMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeformedMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeformedMesh() :
      op->vtkLSDynaReader::GetDeformedMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeformedMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeformedMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeformedMeshOn();
    }
    else
    {
      op->vtkLSDynaReader::DeformedMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeformedMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeformedMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeformedMeshOff();
    }
    else
    {
      op->vtkLSDynaReader::DeformedMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveDeletedCells(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetRemoveDeletedCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRemoveDeletedCells() :
      op->vtkLSDynaReader::GetRemoveDeletedCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_RemoveDeletedCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDeletedCellsOn();
    }
    else
    {
      op->vtkLSDynaReader::RemoveDeletedCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_RemoveDeletedCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDeletedCellsOff();
    }
    else
    {
      op->vtkLSDynaReader::RemoveDeletedCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetDeletedCellsAsGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeletedCellsAsGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeletedCellsAsGhostArray(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetDeletedCellsAsGhostArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDeletedCellsAsGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeletedCellsAsGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeletedCellsAsGhostArray() :
      op->vtkLSDynaReader::GetDeletedCellsAsGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeletedCellsAsGhostArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletedCellsAsGhostArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeletedCellsAsGhostArrayOn();
    }
    else
    {
      op->vtkLSDynaReader::DeletedCellsAsGhostArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeletedCellsAsGhostArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletedCellsAsGhostArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeletedCellsAsGhostArrayOff();
    }
    else
    {
      op->vtkLSDynaReader::DeletedCellsAsGhostArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetInputDeck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDeck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputDeck(temp0);
    }
    else
    {
      op->vtkLSDynaReader::SetInputDeck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetInputDeck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDeck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputDeck() :
      op->vtkLSDynaReader::GetInputDeck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfPartArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartArrays() :
      op->vtkLSDynaReader::GetNumberOfPartArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetPartArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPartArrayName(temp0) :
      op->vtkLSDynaReader::GetPartArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPartArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetPartArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPartArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkLSDynaReader::SetPartArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetPartArrayStatus_Methods[] = {
  {"SetPartArrayStatus", PyvtkLSDynaReader_SetPartArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {"SetPartArrayStatus", PyvtkLSDynaReader_SetPartArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPartArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartArrayStatus(temp0) :
      op->vtkLSDynaReader::GetPartArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartArrayStatus(temp0) :
      op->vtkLSDynaReader::GetPartArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetPartArrayStatus_Methods[] = {
  {"GetPartArrayStatus", PyvtkLSDynaReader_GetPartArrayStatus_s1, METH_VARARGS,
   "@i"},
  {"GetPartArrayStatus", PyvtkLSDynaReader_GetPartArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPartArrayStatus");
  return nullptr;
}

static PyMethodDef PyvtkLSDynaReader_Methods[] = {
  {"IsTypeOf", PyvtkLSDynaReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLSDynaReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLSDynaReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLSDynaReader\nC++: static vtkLSDynaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLSDynaReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLSDynaReader\nC++: vtkLSDynaReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLSDynaReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLSDynaReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DebugDump", PyvtkLSDynaReader_DebugDump, METH_VARARGS,
   "DebugDump(self) -> None\nC++: void DebugDump()\n\nA routine to call Dump() from within a lame debugger that won't\nproperly pass a C++ iostream object like cout.\n"},
  {"CanReadFile", PyvtkLSDynaReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nDetermine if the file can be read with this reader.\n"},
  {"SetDatabaseDirectory", PyvtkLSDynaReader_SetDatabaseDirectory, METH_VARARGS,
   "SetDatabaseDirectory(self, __a:str) -> None\nC++: virtual void SetDatabaseDirectory(const std::string &)\n\nGet/Set the directory containing the LS-Dyna database and\ndetermine whether it is valid.\n"},
  {"GetDatabaseDirectory", PyvtkLSDynaReader_GetDatabaseDirectory, METH_VARARGS,
   "GetDatabaseDirectory(self) -> str\nC++: std::string GetDatabaseDirectory()\n\n"},
  {"IsDatabaseValid", PyvtkLSDynaReader_IsDatabaseValid, METH_VARARGS,
   "IsDatabaseValid(self) -> int\nC++: int IsDatabaseValid()\n\n"},
  {"SetFileName", PyvtkLSDynaReader_SetFileName, METH_VARARGS,
   "SetFileName(self, __a:str) -> None\nC++: virtual void SetFileName(const std::string &)\n\nGet/Set the filename. The Set/GetFileName() routines are actually\nwrappers around the Set/GetDatabaseDirectory() members; the\nactual filename you choose is irrelevant -- only the directory\nname is used. This is done in order to accommodate ParaView.\n"},
  {"GetFileName", PyvtkLSDynaReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: std::string GetFileName()\n\n"},
  {"GetTitle", PyvtkLSDynaReader_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: char *GetTitle()\n\nThe title of the database is a 40 or 80 character text\ndescription stored at the front of a d3plot file.  Do not call\nthis function before setting the database directory and calling\nUpdateInformation().\n"},
  {"GetDimensionality", PyvtkLSDynaReader_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: int GetDimensionality()\n\nRetrieve the dimension of points in the database. This should\nreturn 2 or 3.  Do not call this function before setting the\ndatabase directory and calling UpdateInformation().\n"},
  {"GetNumberOfNodes", PyvtkLSDynaReader_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: vtkIdType GetNumberOfNodes()\n\nRetrieve the number of points in the database.  Do not call this\nfunction before setting the database directory and calling\nUpdateInformation().\n"},
  {"GetNumberOfCells", PyvtkLSDynaReader_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n\n* Note that GetNumberOfCells() returns the sum of\n* GetNumberOfContinuumCells() and GetNumberOfParticleCells().\n"},
  {"GetNumberOfContinuumCells", PyvtkLSDynaReader_GetNumberOfContinuumCells, METH_VARARGS,
   "GetNumberOfContinuumCells(self) -> int\nC++: vtkIdType GetNumberOfContinuumCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n\n* Note that GetNumberOfContinuumCells() returns the sum of\n* GetNumberOfSolidCells(), GetNumberOfThickShellCells(),\n* GetNumberOfShellCells(), GetNumberOfRigidBodyCells(),\n* GetNumberOfRoadSurfaceCells(), and GetNumberOfBeamCells().\n"},
  {"GetNumberOfSolidCells", PyvtkLSDynaReader_GetNumberOfSolidCells, METH_VARARGS,
   "GetNumberOfSolidCells(self) -> int\nC++: vtkIdType GetNumberOfSolidCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfThickShellCells", PyvtkLSDynaReader_GetNumberOfThickShellCells, METH_VARARGS,
   "GetNumberOfThickShellCells(self) -> int\nC++: vtkIdType GetNumberOfThickShellCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfShellCells", PyvtkLSDynaReader_GetNumberOfShellCells, METH_VARARGS,
   "GetNumberOfShellCells(self) -> int\nC++: vtkIdType GetNumberOfShellCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfRigidBodyCells", PyvtkLSDynaReader_GetNumberOfRigidBodyCells, METH_VARARGS,
   "GetNumberOfRigidBodyCells(self) -> int\nC++: vtkIdType GetNumberOfRigidBodyCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfRoadSurfaceCells", PyvtkLSDynaReader_GetNumberOfRoadSurfaceCells, METH_VARARGS,
   "GetNumberOfRoadSurfaceCells(self) -> int\nC++: vtkIdType GetNumberOfRoadSurfaceCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfBeamCells", PyvtkLSDynaReader_GetNumberOfBeamCells, METH_VARARGS,
   "GetNumberOfBeamCells(self) -> int\nC++: vtkIdType GetNumberOfBeamCells()\n\nRetrieve the number of cells of a given type in the database. Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfParticleCells", PyvtkLSDynaReader_GetNumberOfParticleCells, METH_VARARGS,
   "GetNumberOfParticleCells(self) -> int\nC++: vtkIdType GetNumberOfParticleCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {"GetNumberOfTimeSteps", PyvtkLSDynaReader_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: vtkIdType GetNumberOfTimeSteps()\n\nRetrieve information about the time extents of the LS-Dyna\ndatabase. Do not call these functions before setting the database\ndirectory and calling UpdateInformation().\n"},
  {"SetTimeStep", PyvtkLSDynaReader_SetTimeStep, METH_VARARGS,
   "SetTimeStep(self, __a:int) -> None\nC++: virtual void SetTimeStep(vtkIdType)\n\n"},
  {"GetTimeStep", PyvtkLSDynaReader_GetTimeStep, METH_VARARGS,
   "GetTimeStep(self) -> int\nC++: vtkIdType GetTimeStep()\n\n"},
  {"GetTimeValue", PyvtkLSDynaReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self, __a:int) -> float\nC++: double GetTimeValue(vtkIdType)\n\n"},
  {"GetTimeStepRange", PyvtkLSDynaReader_GetTimeStepRange, METH_VARARGS,
   "GetTimeStepRange(self) -> (int, int)\nC++: virtual int *GetTimeStepRange()\n\n"},
  {"SetTimeStepRange", PyvtkLSDynaReader_SetTimeStepRange, METH_VARARGS,
   "SetTimeStepRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTimeStepRange(int _arg1, int _arg2)\nSetTimeStepRange(self, _arg:(int, int)) -> None\nC++: void SetTimeStepRange(const int _arg[2])\n\n"},
  {"GetNumberOfPointArrays", PyvtkLSDynaReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {"GetPointArrayName", PyvtkLSDynaReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, __a:int) -> str\nC++: const char *GetPointArrayName(int)\n\n"},
  {"SetPointArrayStatus", PyvtkLSDynaReader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetPointArrayStatus(int arr, int status)\nSetPointArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetPointArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetPointArrayStatus", PyvtkLSDynaReader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, arr:int) -> int\nC++: int GetPointArrayStatus(int arr)\nGetPointArrayStatus(self, arrName:str) -> int\nC++: int GetPointArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInPointArray", PyvtkLSDynaReader_GetNumberOfComponentsInPointArray, METH_VARARGS,
   "GetNumberOfComponentsInPointArray(self, arr:int) -> int\nC++: int GetNumberOfComponentsInPointArray(int arr)\nGetNumberOfComponentsInPointArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInPointArray(const char *arrName)\n\n"},
  {"GetNumberOfCellArrays", PyvtkLSDynaReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self, cellType:int) -> int\nC++: int GetNumberOfCellArrays(int cellType)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {"GetCellArrayName", PyvtkLSDynaReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, cellType:int, arr:int) -> str\nC++: const char *GetCellArrayName(int cellType, int arr)\n\n"},
  {"SetCellArrayStatus", PyvtkLSDynaReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, cellType:int, arr:int, status:int)\n    -> None\nC++: virtual void SetCellArrayStatus(int cellType, int arr,\n    int status)\nSetCellArrayStatus(self, cellType:int, arrName:str, status:int)\n    -> None\nC++: virtual void SetCellArrayStatus(int cellType,\n    const char *arrName, int status)\n\n"},
  {"GetCellArrayStatus", PyvtkLSDynaReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, cellType:int, arr:int) -> int\nC++: int GetCellArrayStatus(int cellType, int arr)\nGetCellArrayStatus(self, cellType:int, arrName:str) -> int\nC++: int GetCellArrayStatus(int cellType, const char *arrName)\n\n"},
  {"GetNumberOfComponentsInCellArray", PyvtkLSDynaReader_GetNumberOfComponentsInCellArray, METH_VARARGS,
   "GetNumberOfComponentsInCellArray(self, cellType:int, arr:int)\n    -> int\nC++: int GetNumberOfComponentsInCellArray(int cellType, int arr)\nGetNumberOfComponentsInCellArray(self, cellType:int, arrName:str)\n    -> int\nC++: int GetNumberOfComponentsInCellArray(int cellType,\n    const char *arrName)\n\n"},
  {"GetNumberOfSolidArrays", PyvtkLSDynaReader_GetNumberOfSolidArrays, METH_VARARGS,
   "GetNumberOfSolidArrays(self) -> int\nC++: int GetNumberOfSolidArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetSolidArrayName", PyvtkLSDynaReader_GetSolidArrayName, METH_VARARGS,
   "GetSolidArrayName(self, __a:int) -> str\nC++: const char *GetSolidArrayName(int)\n\n"},
  {"SetSolidArrayStatus", PyvtkLSDynaReader_SetSolidArrayStatus, METH_VARARGS,
   "SetSolidArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetSolidArrayStatus(int arr, int status)\nSetSolidArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetSolidArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetSolidArrayStatus", PyvtkLSDynaReader_GetSolidArrayStatus, METH_VARARGS,
   "GetSolidArrayStatus(self, arr:int) -> int\nC++: int GetSolidArrayStatus(int arr)\nGetSolidArrayStatus(self, arrName:str) -> int\nC++: int GetSolidArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInSolidArray", PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray, METH_VARARGS,
   "GetNumberOfComponentsInSolidArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInSolidArray(int a)\nGetNumberOfComponentsInSolidArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInSolidArray(const char *arrName)\n\n"},
  {"GetNumberOfThickShellArrays", PyvtkLSDynaReader_GetNumberOfThickShellArrays, METH_VARARGS,
   "GetNumberOfThickShellArrays(self) -> int\nC++: int GetNumberOfThickShellArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetThickShellArrayName", PyvtkLSDynaReader_GetThickShellArrayName, METH_VARARGS,
   "GetThickShellArrayName(self, __a:int) -> str\nC++: const char *GetThickShellArrayName(int)\n\n"},
  {"SetThickShellArrayStatus", PyvtkLSDynaReader_SetThickShellArrayStatus, METH_VARARGS,
   "SetThickShellArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetThickShellArrayStatus(int arr, int status)\nSetThickShellArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetThickShellArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetThickShellArrayStatus", PyvtkLSDynaReader_GetThickShellArrayStatus, METH_VARARGS,
   "GetThickShellArrayStatus(self, arr:int) -> int\nC++: int GetThickShellArrayStatus(int arr)\nGetThickShellArrayStatus(self, arrName:str) -> int\nC++: int GetThickShellArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInThickShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray, METH_VARARGS,
   "GetNumberOfComponentsInThickShellArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInThickShellArray(int a)\nGetNumberOfComponentsInThickShellArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInThickShellArray(\n    const char *arrName)\n\n"},
  {"GetNumberOfShellArrays", PyvtkLSDynaReader_GetNumberOfShellArrays, METH_VARARGS,
   "GetNumberOfShellArrays(self) -> int\nC++: int GetNumberOfShellArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetShellArrayName", PyvtkLSDynaReader_GetShellArrayName, METH_VARARGS,
   "GetShellArrayName(self, __a:int) -> str\nC++: const char *GetShellArrayName(int)\n\n"},
  {"SetShellArrayStatus", PyvtkLSDynaReader_SetShellArrayStatus, METH_VARARGS,
   "SetShellArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetShellArrayStatus(int arr, int status)\nSetShellArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetShellArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetShellArrayStatus", PyvtkLSDynaReader_GetShellArrayStatus, METH_VARARGS,
   "GetShellArrayStatus(self, arr:int) -> int\nC++: int GetShellArrayStatus(int arr)\nGetShellArrayStatus(self, arrName:str) -> int\nC++: int GetShellArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInShellArray, METH_VARARGS,
   "GetNumberOfComponentsInShellArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInShellArray(int a)\nGetNumberOfComponentsInShellArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInShellArray(const char *arrName)\n\n"},
  {"GetNumberOfRigidBodyArrays", PyvtkLSDynaReader_GetNumberOfRigidBodyArrays, METH_VARARGS,
   "GetNumberOfRigidBodyArrays(self) -> int\nC++: int GetNumberOfRigidBodyArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetRigidBodyArrayName", PyvtkLSDynaReader_GetRigidBodyArrayName, METH_VARARGS,
   "GetRigidBodyArrayName(self, __a:int) -> str\nC++: const char *GetRigidBodyArrayName(int)\n\n"},
  {"SetRigidBodyArrayStatus", PyvtkLSDynaReader_SetRigidBodyArrayStatus, METH_VARARGS,
   "SetRigidBodyArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetRigidBodyArrayStatus(int arr, int status)\nSetRigidBodyArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetRigidBodyArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetRigidBodyArrayStatus", PyvtkLSDynaReader_GetRigidBodyArrayStatus, METH_VARARGS,
   "GetRigidBodyArrayStatus(self, arr:int) -> int\nC++: int GetRigidBodyArrayStatus(int arr)\nGetRigidBodyArrayStatus(self, arrName:str) -> int\nC++: int GetRigidBodyArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInRigidBodyArray", PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray, METH_VARARGS,
   "GetNumberOfComponentsInRigidBodyArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInRigidBodyArray(int a)\nGetNumberOfComponentsInRigidBodyArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInRigidBodyArray(\n    const char *arrName)\n\n"},
  {"GetNumberOfRoadSurfaceArrays", PyvtkLSDynaReader_GetNumberOfRoadSurfaceArrays, METH_VARARGS,
   "GetNumberOfRoadSurfaceArrays(self) -> int\nC++: int GetNumberOfRoadSurfaceArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetRoadSurfaceArrayName", PyvtkLSDynaReader_GetRoadSurfaceArrayName, METH_VARARGS,
   "GetRoadSurfaceArrayName(self, __a:int) -> str\nC++: const char *GetRoadSurfaceArrayName(int)\n\n"},
  {"SetRoadSurfaceArrayStatus", PyvtkLSDynaReader_SetRoadSurfaceArrayStatus, METH_VARARGS,
   "SetRoadSurfaceArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetRoadSurfaceArrayStatus(int arr, int status)\nSetRoadSurfaceArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetRoadSurfaceArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetRoadSurfaceArrayStatus", PyvtkLSDynaReader_GetRoadSurfaceArrayStatus, METH_VARARGS,
   "GetRoadSurfaceArrayStatus(self, arr:int) -> int\nC++: int GetRoadSurfaceArrayStatus(int arr)\nGetRoadSurfaceArrayStatus(self, arrName:str) -> int\nC++: int GetRoadSurfaceArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInRoadSurfaceArray", PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray, METH_VARARGS,
   "GetNumberOfComponentsInRoadSurfaceArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInRoadSurfaceArray(int a)\nGetNumberOfComponentsInRoadSurfaceArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInRoadSurfaceArray(\n    const char *arrName)\n\n"},
  {"GetNumberOfBeamArrays", PyvtkLSDynaReader_GetNumberOfBeamArrays, METH_VARARGS,
   "GetNumberOfBeamArrays(self) -> int\nC++: int GetNumberOfBeamArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetBeamArrayName", PyvtkLSDynaReader_GetBeamArrayName, METH_VARARGS,
   "GetBeamArrayName(self, __a:int) -> str\nC++: const char *GetBeamArrayName(int)\n\n"},
  {"SetBeamArrayStatus", PyvtkLSDynaReader_SetBeamArrayStatus, METH_VARARGS,
   "SetBeamArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetBeamArrayStatus(int arr, int status)\nSetBeamArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetBeamArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetBeamArrayStatus", PyvtkLSDynaReader_GetBeamArrayStatus, METH_VARARGS,
   "GetBeamArrayStatus(self, arr:int) -> int\nC++: int GetBeamArrayStatus(int arr)\nGetBeamArrayStatus(self, arrName:str) -> int\nC++: int GetBeamArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInBeamArray", PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray, METH_VARARGS,
   "GetNumberOfComponentsInBeamArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInBeamArray(int a)\nGetNumberOfComponentsInBeamArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInBeamArray(const char *arrName)\n\n"},
  {"GetNumberOfParticleArrays", PyvtkLSDynaReader_GetNumberOfParticleArrays, METH_VARARGS,
   "GetNumberOfParticleArrays(self) -> int\nC++: int GetNumberOfParticleArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {"GetParticleArrayName", PyvtkLSDynaReader_GetParticleArrayName, METH_VARARGS,
   "GetParticleArrayName(self, __a:int) -> str\nC++: const char *GetParticleArrayName(int)\n\n"},
  {"SetParticleArrayStatus", PyvtkLSDynaReader_SetParticleArrayStatus, METH_VARARGS,
   "SetParticleArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetParticleArrayStatus(int arr, int status)\nSetParticleArrayStatus(self, arrName:str, status:int) -> None\nC++: virtual void SetParticleArrayStatus(const char *arrName,\n    int status)\n\n"},
  {"GetParticleArrayStatus", PyvtkLSDynaReader_GetParticleArrayStatus, METH_VARARGS,
   "GetParticleArrayStatus(self, arr:int) -> int\nC++: int GetParticleArrayStatus(int arr)\nGetParticleArrayStatus(self, arrName:str) -> int\nC++: int GetParticleArrayStatus(const char *arrName)\n\n"},
  {"GetNumberOfComponentsInParticleArray", PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray, METH_VARARGS,
   "GetNumberOfComponentsInParticleArray(self, a:int) -> int\nC++: int GetNumberOfComponentsInParticleArray(int a)\nGetNumberOfComponentsInParticleArray(self, arrName:str) -> int\nC++: int GetNumberOfComponentsInParticleArray(const char *arrName)\n\n"},
  {"SetDeformedMesh", PyvtkLSDynaReader_SetDeformedMesh, METH_VARARGS,
   "SetDeformedMesh(self, __a:int) -> None\nC++: void SetDeformedMesh(vtkTypeBool)\n\nShould deflected coordinates be used, or should the mesh remain\nundeflected?  By default, this is true but its value is ignored\nif the nodal \"Deflected Coordinates\" array is not set to be\nloaded.\n"},
  {"GetDeformedMesh", PyvtkLSDynaReader_GetDeformedMesh, METH_VARARGS,
   "GetDeformedMesh(self) -> int\nC++: virtual vtkTypeBool GetDeformedMesh()\n\n"},
  {"DeformedMeshOn", PyvtkLSDynaReader_DeformedMeshOn, METH_VARARGS,
   "DeformedMeshOn(self) -> None\nC++: virtual void DeformedMeshOn()\n\n"},
  {"DeformedMeshOff", PyvtkLSDynaReader_DeformedMeshOff, METH_VARARGS,
   "DeformedMeshOff(self) -> None\nC++: virtual void DeformedMeshOff()\n\n"},
  {"SetRemoveDeletedCells", PyvtkLSDynaReader_SetRemoveDeletedCells, METH_VARARGS,
   "SetRemoveDeletedCells(self, _arg:int) -> None\nC++: virtual void SetRemoveDeletedCells(vtkTypeBool _arg)\n\nShould dead cells be removed from the mesh?  Cells are marked\ndead by setting the corresponding entry in the cellarray \"Death\"\nto 0. Cells that are not dead have the corresponding entry in the\ncell array \"Death\" set to their material ID.  By default, this is\ntrue but its value is ignored if the cell \"Death\" array is not\nset to be loaded. It is also ignored if the database's element\ndeletion option is set to denote points(not cells) as deleted; in\nthat case, \"Death\" will appear to be a point array.\n"},
  {"GetRemoveDeletedCells", PyvtkLSDynaReader_GetRemoveDeletedCells, METH_VARARGS,
   "GetRemoveDeletedCells(self) -> int\nC++: virtual vtkTypeBool GetRemoveDeletedCells()\n\n"},
  {"RemoveDeletedCellsOn", PyvtkLSDynaReader_RemoveDeletedCellsOn, METH_VARARGS,
   "RemoveDeletedCellsOn(self) -> None\nC++: virtual void RemoveDeletedCellsOn()\n\n"},
  {"RemoveDeletedCellsOff", PyvtkLSDynaReader_RemoveDeletedCellsOff, METH_VARARGS,
   "RemoveDeletedCellsOff(self) -> None\nC++: virtual void RemoveDeletedCellsOff()\n\n"},
  {"SetDeletedCellsAsGhostArray", PyvtkLSDynaReader_SetDeletedCellsAsGhostArray, METH_VARARGS,
   "SetDeletedCellsAsGhostArray(self, _arg:int) -> None\nC++: virtual void SetDeletedCellsAsGhostArray(vtkTypeBool _arg)\n\nInstead of removing the cells that are dead, hide them by setting\nthe array as the ghost levels arrays\n"},
  {"GetDeletedCellsAsGhostArray", PyvtkLSDynaReader_GetDeletedCellsAsGhostArray, METH_VARARGS,
   "GetDeletedCellsAsGhostArray(self) -> int\nC++: virtual vtkTypeBool GetDeletedCellsAsGhostArray()\n\n"},
  {"DeletedCellsAsGhostArrayOn", PyvtkLSDynaReader_DeletedCellsAsGhostArrayOn, METH_VARARGS,
   "DeletedCellsAsGhostArrayOn(self) -> None\nC++: virtual void DeletedCellsAsGhostArrayOn()\n\n"},
  {"DeletedCellsAsGhostArrayOff", PyvtkLSDynaReader_DeletedCellsAsGhostArrayOff, METH_VARARGS,
   "DeletedCellsAsGhostArrayOff(self) -> None\nC++: virtual void DeletedCellsAsGhostArrayOff()\n\n"},
  {"SetInputDeck", PyvtkLSDynaReader_SetInputDeck, METH_VARARGS,
   "SetInputDeck(self, _arg:str) -> None\nC++: virtual void SetInputDeck(const char *_arg)\n\nThe name of the input deck corresponding to the current database.\nThis is used to determine the part names associated with each\nmaterial ID. This file may be in two formats: a valid LSDyna\ninput deck or a short XML summary. If the file begins with\n\"<?xml\" then the summary format is used. Otherwise, the keyword\nformat is used and a summary file will be created if write\npermissions exist in the directory containing the keyword file.\nThe newly created summary will have \".k\" or \".key\" stripped from\nthe end of the keyword filename and \".lsdyna\" appended.\n"},
  {"GetInputDeck", PyvtkLSDynaReader_GetInputDeck, METH_VARARGS,
   "GetInputDeck(self) -> str\nC++: virtual char *GetInputDeck()\n\n"},
  {"GetNumberOfPartArrays", PyvtkLSDynaReader_GetNumberOfPartArrays, METH_VARARGS,
   "GetNumberOfPartArrays(self) -> int\nC++: int GetNumberOfPartArrays()\n\nThese methods allow you to load only selected parts of the input.\nIf InputDeck points to a valid keyword file (or summary), then\npart names will be taken from that file. Otherwise, when\narbitrary material numbering is used, parts will be named \"PartXXX\n(MatlYYY)\" where XXX is an increasing sequential number and YYY\nis the respective material ID. If no input deck is specified and\narbitrary arbitrary material numbering is not used, parts will be\nnamed \"PartXXX\" where XXX is a sequential material ID.\n"},
  {"GetPartArrayName", PyvtkLSDynaReader_GetPartArrayName, METH_VARARGS,
   "GetPartArrayName(self, __a:int) -> str\nC++: const char *GetPartArrayName(int)\n\n"},
  {"SetPartArrayStatus", PyvtkLSDynaReader_SetPartArrayStatus, METH_VARARGS,
   "SetPartArrayStatus(self, arr:int, status:int) -> None\nC++: virtual void SetPartArrayStatus(int arr, int status)\nSetPartArrayStatus(self, partName:str, status:int) -> None\nC++: virtual void SetPartArrayStatus(const char *partName,\n    int status)\n\n"},
  {"GetPartArrayStatus", PyvtkLSDynaReader_GetPartArrayStatus, METH_VARARGS,
   "GetPartArrayStatus(self, arr:int) -> int\nC++: int GetPartArrayStatus(int arr)\nGetPartArrayStatus(self, partName:str) -> int\nC++: int GetPartArrayStatus(const char *partName)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLSDynaReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("database_directory"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetDatabaseDirectory(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetDatabaseDirectory(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetDatabaseDirectory(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDatabaseDirectory/SetDatabaseDirectory\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("database_directory"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetDatabaseDirectory(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetDatabaseDirectory(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDatabaseDirectory\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("time_step"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetTimeStep(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetTimeStep(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetTimeStep(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimeStep/SetTimeStep\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("time_step_range"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetTimeStepRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetTimeStepRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetTimeStepRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimeStepRange/SetTimeStepRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetPointArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetPointArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPointArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetCellArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetCellArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCellArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("solid_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetSolidArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetSolidArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSolidArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("thick_shell_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetThickShellArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetThickShellArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetThickShellArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shell_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetShellArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetShellArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetShellArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rigid_body_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetRigidBodyArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetRigidBodyArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRigidBodyArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("road_surface_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetRoadSurfaceArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetRoadSurfaceArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRoadSurfaceArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("beam_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetBeamArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetBeamArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetBeamArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("particle_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetParticleArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetParticleArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetParticleArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("deformed_mesh"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetDeformedMesh(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetDeformedMesh(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetDeformedMesh(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDeformedMesh/SetDeformedMesh\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("remove_deleted_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetRemoveDeletedCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetRemoveDeletedCells(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetRemoveDeletedCells(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRemoveDeletedCells/SetRemoveDeletedCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("deleted_cells_as_ghost_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetDeletedCellsAsGhostArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetDeletedCellsAsGhostArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetDeletedCellsAsGhostArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDeletedCellsAsGhostArray/SetDeletedCellsAsGhostArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_deck"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetInputDeck(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetInputDeck(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetInputDeck(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInputDeck/SetInputDeck\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("part_array_status"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLSDynaReader_SetPartArrayStatus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLSDynaReader_SetPartArrayStatus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPartArrayStatus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("title"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetTitle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTitle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dimensionality"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetDimensionality(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDimensionality\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_nodes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfNodes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfNodes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_continuum_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfContinuumCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfContinuumCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_solid_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfSolidCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfSolidCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_thick_shell_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfThickShellCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfThickShellCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_shell_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfShellCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfShellCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_rigid_body_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfRigidBodyCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfRigidBodyCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_road_surface_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfRoadSurfaceCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfRoadSurfaceCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_beam_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfBeamCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfBeamCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_particle_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfParticleCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfParticleCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_point_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfPointArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfPointArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_solid_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfSolidArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfSolidArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_thick_shell_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfThickShellArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfThickShellArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_shell_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfShellArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfShellArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_rigid_body_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfRigidBodyArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfRigidBodyArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_road_surface_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfRoadSurfaceArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfRoadSurfaceArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_beam_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfBeamArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfBeamArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_particle_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfParticleArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfParticleArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_part_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLSDynaReader_GetNumberOfPartArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfPartArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLSDynaReader_Doc =
  "vtkLSDynaReader - Read LS-Dyna databases (d3plot)\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This filter reads LS-Dyna databases.\n\n"
  "The Set/GetFileName() routines are actually wrappers around the\n"
  "Set/GetDatabaseDirectory() members; the actual filename you choose is\n"
  "irrelevant -- only the directory name is used.  This is done in order\n"
  "to accommodate ParaView.\n\n"
  "Note that this reader produces 7 output meshes. These meshes are\n"
  "required as several attributes are defined on subsets of the mesh. \n"
  "Below is a list of meshes in the order they are output and an\n"
  "explanation of which attributes are unique to each mesh:\n"
  "- solid (3D) elements: number of integration points are different\n"
  "  than 2D\n"
  "- thick shell elements: number of integration points are different\n"
  "  than planar 2D\n"
  "- shell (2D) elements: number of integration points are different\n"
  "  than 3D\n"
  "- rigid surfaces: can't have deflection, only velocity, accel, etc.\n"
  "- road surfaces: have only a \"segment ID\" (serves as material ID) and\n"
  "a velocity.\n"
  "- beam elements: have Frenet (TNB) frame and cross-section attributes\n"
  "  (shape and size)\n"
  "- spherical particle hydrodynamics (SPH) elements: have a radius of\n"
  "  influence, internal energy, etc. Because each mesh has its own cell\n"
  "attributes, the vtkLSDynaReader has a rather large API.  Instead of a\n"
  "single set of routines to query and set cell array names and status,\n"
  "  one exists for each possible output mesh. Also, GetNumberOfCells()\n"
  "  will return the sum of all the cells in all 7 meshes.  If you want\n"
  "  the number of cells in a specific mesh, there are separate routines\n"
  "for each mesh type.\n\n"
  "@attention LSDyna files contain 3 different types of sections:\n"
  "control, data, and state.  Control sections contain constants that\n"
  "describe the type of simulation data in a file or group of files. \n"
  "Data sections contain simulation information that is invariant across\n"
  "individual time steps (but can vary when a mesh adaptation occurs). \n"
  "This information includes material, connectivity, and undeformed\n"
  "geometry.  Finally, state data is information that varies with each\n"
  "time step.  Unless a mesh adaptation occurs, there will be a single\n"
  "control and data section, and they will be located at the start of\n"
  "the database (the first file).\n\n"
  "@attention In their infinite wisdom, LSDyna developers decided to\n"
  "split simulation data into multiple files, each no larger than some\n"
  "predetermined limit. Each file can contain one section, a partial\n"
  "section (if it would not fit into a single file), or multiple\n"
  "sections. Files are padded with zeros so that their lengths will be\n"
  "multiples of 512*512.  The size of each section is determined by\n"
  "constants in the control and data sections, which means that these\n"
  "must be parsed carefully in order to correctly locate desired\n"
  "information.  Unfortunately, the constants are not terribly\n"
  "well-documented and in some cases the documentation is in error.\n\n"
  "@par \"Open Issues\": The LS-Dyna file format document leaves a good\n"
  "bit open to interpretation.  In addition to the \"documentation vs.\n"
  "files in the wild\" issues there are also implementation problems.\n\n"
  "@par \"Open Issues\":\n"
  "- Where exactly may breaks to a new file occur in the pre-state\n"
  "  information? At each section?\n"
  "- Will state data sections (node/cell data, element deletion, sph\n"
  "  data, rigid body motion) be moved to the beginning of a new file if\n"
  "their data will be too large for a given file, or are all the\n"
  "  sections counted together as a single state (makes more sense for\n"
  "  keeping time word at start of every file). The questions above\n"
  "  arise because the docs (p. 3) state \"There are 3 sections in this\n"
  "  database.\" but then call many smaller pieces of data \"sections\".\n"
  "  Should they be subsections? The docs are quiet about whether the\n"
  "  second section (of 3) is ever split across multiple files and, if\n"
  "  so, whether it is done at (sub)section boundaries when possible or\n"
  "  just wherever it needs to occur.\n"
  "- How many components does Eddy Viscosity have? It's shown as 7 bits\n"
  "  in NCFDV1 which makes no sense at all.\n"
  "- Why is NARBS larger than 10+NUMNP+NEL8+NEL2+NEL4+NELT (which is the\n"
  "  value specified by the documentation)? Obviously, NARBS is\n"
  "  definitive, but what are the extra numbers at the end?\n"
  "- Is there a difference between rigid body elements NUMRBE and rigid\n"
  "  road surfaces? It appears that the nodes and connectivity of the\n"
  "  road surface are given separately (p.13) while on p.7 the Material\n"
  "  Type Data subsection says that shells in a rigid body will just\n"
  "  have a certain material ID but be interspersed among deformable\n"
  "  shell elements.\n"
  "- Word 37 of the control section serves two possible purposes... it\n"
  "  can mean NMSPH or EDLOPT. I assume that different versions of the\n"
  "  code use that word differently. How do we know the difference?\n"
  "- It's unclear how much state isn't stored when a shell element is\n"
  "  marked as rigid. Specifically, is element deletion data stored for\n"
  "  rigid shells? Page 21 of the spec is mute on this.\n"
  "- The loop to read cell User IDs won't work if Rigid Body and Shell\n"
  "  elements are interleaved (which I now believe they are).\n\n"
  "@par \"Open Issues\": On the VTK side of things:\n"
  "- Berk has nudged me towards multiblock outputs but hasn't committed\n"
  "  to exactly how things can be made efficient for a parallel version\n"
  "  of the reader.\n"
  "- This reader will eventually need to respond to a second output port\n"
  "for \"small spatial, large temporal\" queries.\n"
  "- The reader doesn't handle crack files (d3crck)\n"
  "- The reader doesn't handle interface force files (no default name)\n"
  "- The reader doesn't handle time history (abbreviated output) files\n"
  "  (d3thdt)\n"
  "- The reader doesn't handle dynamic relaxation files (d3drfl)\n"
  "- The reader doesn't handle reduced parts (state for a subset of\n"
  "  parts) files (d3part)\n"
  "- The reader doesn't handle mode shape files (d3eigv)\n"
  "- The reader doesn't handle equilibrium iteration files (d3iter)\n"
  "- The reader doesn't handle extra time data files (d3xtf)\n"
  "- The reader doesn't handle printer files (d3hsp)\n"
  "- The reader doesn't handle modal neutral files (d3mnf)\n"
  "- The reader doesn't handle packed connectivity.\n"
  "- The reader doesn't handle adapted element parent lists (but the\n"
  "  2002 specification says LSDyna doesn't implement it).\n"
  "- All the sample datasets have MATTYP = 0. Need something to test\n"
  "  MATTYP = 1.\n"
  "- I have no test datasets with rigid body and/or road surfaces, so\n"
  "  the implementation is half-baked.\n"
  "- It's unclear how some of the data should be presented. Although\n"
  "  blindly tacking the numbers into a large chuck of cell data is\n"
  "  better than nothing, some attributes (e.g., forces & moments) lend\n"
  "  themselves to more elaborate presentation. Also, shell and thick\n"
  "  shell elements have stresses that belong to a particular side of an\n"
  "element or have a finite thickness that could be rendered. Finally,\n"
  "  beam elements have cross sections that could be rendered. Some of\n"
  "  these operations require numerical processing of the results and so\n"
  "we shouldn't eliminate the ability to get at the raw simulation data.\n"
  "  Perhaps a filter could be applied to \"fancify\" the geometry.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLSDynaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLSDyna.vtkLSDynaReader", // tp_name
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
  PyvtkLSDynaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLSDynaReader_StaticNew()
{
  return vtkLSDynaReader::New();
}

PyObject *PyvtkLSDynaReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLSDynaReader_Type, PyvtkLSDynaReader_Methods,
    "vtkLSDynaReader",
 &PyvtkLSDynaReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLSDynaReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLSDynaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLSDynaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLSDynaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

