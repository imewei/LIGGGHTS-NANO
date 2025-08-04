// python wrapper for vtkSphereTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphereTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSphereTree(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSphereTree_ClassNew(); }


static PyObject *
PyvtkSphereTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereTree *tempr = vtkSphereTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereTree::NewInstance());

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
PyvtkSphereTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphereTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphereTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkSphereTree::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkSphereTree::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_Build_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkSphereTree::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTree_Build_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->Build(temp0);
    }
    else
    {
      op->vtkSphereTree::Build(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTree_Build(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSphereTree_Build_s1(self, args);
    case 1:
      return PyvtkSphereTree_Build_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Build");
  return nullptr;
}


static PyObject *
PyvtkSphereTree_SetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildHierarchy(temp0);
    }
    else
    {
      op->vtkSphereTree::SetBuildHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildHierarchy() :
      op->vtkSphereTree::GetBuildHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_BuildHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOn();
    }
    else
    {
      op->vtkSphereTree::BuildHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_BuildHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOff();
    }
    else
    {
      op->vtkSphereTree::BuildHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_SelectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    const unsigned char *tempr = (ap.IsBound() ?
      op->SelectPoint(temp0, temp1) :
      op->vtkSphereTree::SelectPoint(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTree_SelectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SelectPoint(temp0, temp1);
    }
    else
    {
      op->vtkSphereTree::SelectPoint(temp0, temp1);
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

static PyMethodDef PyvtkSphereTree_SelectPoint_Methods[] = {
  {"SelectPoint", PyvtkSphereTree_SelectPoint_s1, METH_VARARGS,
   "@Pk *d"},
  {"SelectPoint", PyvtkSphereTree_SelectPoint_s2, METH_VARARGS,
   "@PV *d *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSphereTree_SelectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSphereTree_SelectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectPoint");
  return nullptr;
}


static PyObject *
PyvtkSphereTree_SelectLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    const unsigned char *tempr = (ap.IsBound() ?
      op->SelectLine(temp0, temp1, temp2) :
      op->vtkSphereTree::SelectLine(temp0, temp1, temp2));

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTree_SelectLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SelectLine(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTree::SelectLine(temp0, temp1, temp2);
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

static PyMethodDef PyvtkSphereTree_SelectLine_Methods[] = {
  {"SelectLine", PyvtkSphereTree_SelectLine_s1, METH_VARARGS,
   "@PPk *d *d"},
  {"SelectLine", PyvtkSphereTree_SelectLine_s2, METH_VARARGS,
   "@PPV *d *d *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSphereTree_SelectLine(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSphereTree_SelectLine_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectLine");
  return nullptr;
}


static PyObject *
PyvtkSphereTree_SelectPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    const unsigned char *tempr = (ap.IsBound() ?
      op->SelectPlane(temp0, temp1, temp2) :
      op->vtkSphereTree::SelectPlane(temp0, temp1, temp2));

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTree_SelectPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SelectPlane(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTree::SelectPlane(temp0, temp1, temp2);
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

static PyMethodDef PyvtkSphereTree_SelectPlane_Methods[] = {
  {"SelectPlane", PyvtkSphereTree_SelectPlane_s1, METH_VARARGS,
   "@PPk *d *d"},
  {"SelectPlane", PyvtkSphereTree_SelectPlane_s2, METH_VARARGS,
   "@PPV *d *d *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSphereTree_SelectPlane(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSphereTree_SelectPlane_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectPlane");
  return nullptr;
}


static PyObject *
PyvtkSphereTree_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkSphereTree::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkSphereTree::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkSphereTree::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSphereTree::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkSphereTree::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMinValue() :
      op->vtkSphereTree::GetMaxLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMaxValue() :
      op->vtkSphereTree::GetMaxLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkSphereTree::GetMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkSphereTree::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetCellSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetCellSpheres() :
      op->vtkSphereTree::GetCellSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_GetTreeSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetTreeSpheres(temp0, temp1) :
      op->vtkSphereTree::GetTreeSpheres(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTree_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTree *op = static_cast<vtkSphereTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkSphereTree::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereTree_Methods[] = {
  {"IsTypeOf", PyvtkSphereTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphereTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphereTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphereTree\nC++: static vtkSphereTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphereTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphereTree\nC++: vtkSphereTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphereTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphereTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataSet", PyvtkSphereTree_SetDataSet, METH_VARARGS,
   "SetDataSet(self, __a:vtkDataSet) -> None\nC++: virtual void SetDataSet(vtkDataSet *)\n\nSpecify the dataset from which to build the sphere tree.\n"},
  {"GetDataSet", PyvtkSphereTree_GetDataSet, METH_VARARGS,
   "GetDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\n"},
  {"Build", PyvtkSphereTree_Build, METH_VARARGS,
   "Build(self) -> None\nC++: void Build()\nBuild(self, input:vtkDataSet) -> None\nC++: void Build(vtkDataSet *input)\n\nBuild the sphere tree (if necessary) from the data set specified.\nThe build time is recorded so the sphere tree will only build if\nsomething has changed. An alternative method is available to both\nset the dataset and then build the sphere tree.\n"},
  {"SetBuildHierarchy", PyvtkSphereTree_SetBuildHierarchy, METH_VARARGS,
   "SetBuildHierarchy(self, _arg:bool) -> None\nC++: virtual void SetBuildHierarchy(bool _arg)\n\nControl whether the tree hierarchy is built. If not, then just\ncell spheres are created (one for each cell).\n"},
  {"GetBuildHierarchy", PyvtkSphereTree_GetBuildHierarchy, METH_VARARGS,
   "GetBuildHierarchy(self) -> bool\nC++: virtual bool GetBuildHierarchy()\n\n"},
  {"BuildHierarchyOn", PyvtkSphereTree_BuildHierarchyOn, METH_VARARGS,
   "BuildHierarchyOn(self) -> None\nC++: virtual void BuildHierarchyOn()\n\n"},
  {"BuildHierarchyOff", PyvtkSphereTree_BuildHierarchyOff, METH_VARARGS,
   "BuildHierarchyOff(self) -> None\nC++: virtual void BuildHierarchyOff()\n\n"},
  {"SelectPoint", PyvtkSphereTree_SelectPoint, METH_VARARGS,
   "SelectPoint(self, point:[float, float, float], numSelected:int)\n    -> Pointer\nC++: const unsigned char *SelectPoint(double point[3],\n    vtkIdType &numSelected)\nSelectPoint(self, point:[float, float, float], cellIds:vtkIdList)\n    -> None\nC++: void SelectPoint(double point[3], vtkIdList *cellIds)\n\nMethods for cell selection based on a geometric query. Internally\ndifferent methods are used depending on the dataset type. The\narray returned is set to non-zero for each cell that intersects\nthe geometric entity. SelectPoint marks all cells with a non-zero\nvalue that may contain a point. SelectLine marks all cells that\nmay intersect an infinite line. SelectPlane marks all cells that\nmay intersect with an infinite plane.\n"},
  {"SelectLine", PyvtkSphereTree_SelectLine, METH_VARARGS,
   "SelectLine(self, origin:[float, float, float], ray:[float, float,\n    float], numSelected:int) -> Pointer\nC++: const unsigned char *SelectLine(double origin[3],\n    double ray[3], vtkIdType &numSelected)\nSelectLine(self, origin:[float, float, float], ray:[float, float,\n    float], cellIds:vtkIdList) -> None\nC++: void SelectLine(double origin[3], double ray[3],\n    vtkIdList *cellIds)\n\n"},
  {"SelectPlane", PyvtkSphereTree_SelectPlane, METH_VARARGS,
   "SelectPlane(self, origin:[float, float, float], normal:[float,\n    float, float], numSelected:int) -> Pointer\nC++: const unsigned char *SelectPlane(double origin[3],\n    double normal[3], vtkIdType &numSelected)\nSelectPlane(self, origin:[float, float, float], normal:[float,\n    float, float], cellIds:vtkIdList) -> None\nC++: void SelectPlane(double origin[3], double normal[3],\n    vtkIdList *cellIds)\n\n"},
  {"SetResolution", PyvtkSphereTree_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSphere tree creation requires gathering spheres into groups. The\nResolution variable is a rough guide to the size of each group\n(the size different meanings depending on the type of data\n(structured versus unstructured). For example, in 3D structured\ndata, blocks of resolution Resolution^3 are created. By default\nthe Resolution is three.\n"},
  {"GetResolutionMinValue", PyvtkSphereTree_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkSphereTree_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkSphereTree_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetMaxLevel", PyvtkSphereTree_SetMaxLevel, METH_VARARGS,
   "SetMaxLevel(self, _arg:int) -> None\nC++: virtual void SetMaxLevel(int _arg)\n\nSpecify the maximum number of levels for the tree. By default,\nthe number of levels is set to ten. If the number of levels is\nset to one or less, then no hierarchy is built (i.e., just the\nspheres for each cell are created). Note that the actual level of\nthe tree may be less than this value depending on the number of\ncells and Resolution factor.\n"},
  {"GetMaxLevelMinValue", PyvtkSphereTree_GetMaxLevelMinValue, METH_VARARGS,
   "GetMaxLevelMinValue(self) -> int\nC++: virtual int GetMaxLevelMinValue()\n\n"},
  {"GetMaxLevelMaxValue", PyvtkSphereTree_GetMaxLevelMaxValue, METH_VARARGS,
   "GetMaxLevelMaxValue(self) -> int\nC++: virtual int GetMaxLevelMaxValue()\n\n"},
  {"GetMaxLevel", PyvtkSphereTree_GetMaxLevel, METH_VARARGS,
   "GetMaxLevel(self) -> int\nC++: virtual int GetMaxLevel()\n\n"},
  {"GetNumberOfLevels", PyvtkSphereTree_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: virtual int GetNumberOfLevels()\n\nGet the current depth of the sphere tree. This value may change\neach time the sphere tree is built and the branching factor\n(i.e., resolution) changes. Note that after building the sphere\ntree there are [0,this->NumberOfLevels) defined levels.\n"},
  {"GetCellSpheres", PyvtkSphereTree_GetCellSpheres, METH_VARARGS,
   "GetCellSpheres(self) -> Pointer\nC++: const double *GetCellSpheres()\n\nSpecial methods to retrieve the sphere tree data. This is\ngenerally used for debugging or with filters like\nvtkSphereTreeFilter. Both methods return an array of double*\nwhere four doubles represent a sphere (center + radius). In the\nfirst method a sphere per cell is returned. In the second method\nthe user must also specify a level in the sphere tree (used to\nretrieve the hierarchy of the tree). Note that null pointers can\nbe returned if the request is not consistent with the state of\nthe sphere tree.\n"},
  {"GetTreeSpheres", PyvtkSphereTree_GetTreeSpheres, METH_VARARGS,
   "GetTreeSpheres(self, level:int, numSpheres:int) -> Pointer\nC++: const double *GetTreeSpheres(int level,\n    vtkIdType &numSpheres)\n\n"},
  {"UsesGarbageCollector", PyvtkSphereTree_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nParticipate in garbage collection via ReportReferences.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSphereTree_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("data_set"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetDataSet(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereTree_SetDataSet(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereTree_SetDataSet(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDataSet/SetDataSet\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("build_hierarchy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetBuildHierarchy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereTree_SetBuildHierarchy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereTree_SetBuildHierarchy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBuildHierarchy/SetBuildHierarchy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereTree_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereTree_SetResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetResolution/SetResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("max_level"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetMaxLevel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereTree_SetMaxLevel(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereTree_SetMaxLevel(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaxLevel/SetMaxLevel\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_spheres"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetCellSpheres(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellSpheres\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_levels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereTree_GetNumberOfLevels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfLevels\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSphereTree_Doc =
  "vtkSphereTree - class to build and traverse sphere trees\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSphereTree is a helper class used to build and traverse sphere\n"
  "trees. Various types of trees can be constructed for different VTK\n"
  "dataset types, as well well as different approaches to organize the\n"
  "tree into hierarchies.\n\n"
  "Typically building a complete sphere tree consists of two parts: 1)\n"
  "creating spheres for each cell in the dataset, then 2) creating an\n"
  "organizing hierarchy. The structure of the hierarchy varies depending\n"
  "on the topological characteristics of the dataset.\n\n"
  "Once the tree is constructed, various geometric operations are\n"
  "available for quickly selecting cells based on sphere tree\n"
  "operations; for example, process all cells intersecting a plane\n"
  "(i.e., use the sphere tree to identify candidate cells for plane\n"
  "intersection).\n\n"
  "This class does not necessarily create optimal sphere trees because\n"
  "some of its requirements (fast build time, provide simple reference\n"
  "code, a single bounding sphere per cell, etc.) precludes optimal\n"
  "performance. It is also oriented to computing on cells versus the\n"
  "classic problem of collision detection for polygonal models. For more\n"
  "information you want to read Gareth Bradshaw's PhD thesis \"Bounding\n"
  "Volume Hierarchies for Level-of-Detail Collision Handling\" which does\n"
  "a nice job of laying out the challenges and important algorithms\n"
  "relative to sphere trees and BVH (bounding volume hierarchies).\n\n"
  "@sa\n"
  "vtkSphereTreeFilter vtkPlaneCutter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphereTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkSphereTree", // tp_name
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
  PyvtkSphereTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereTree_StaticNew()
{
  return vtkSphereTree::New();
}

PyObject *PyvtkSphereTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphereTree_Type, PyvtkSphereTree_Methods,
    "vtkSphereTree",
 &PyvtkSphereTree_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSphereTree_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereTree", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_MAX_SPHERE_TREE_RESOLUTION", 10 },
        { "VTK_MAX_SPHERE_TREE_LEVELS", 20 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

