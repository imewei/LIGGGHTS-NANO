// python wrapper for vtkPolyLine
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyLine.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPolyLine(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPolyLine_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static PyObject *
PyvtkPolyLine_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyLine::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyLine::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyLine *tempr = vtkPolyLine::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyLine *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyLine::NewInstance());

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
PyvtkPolyLine_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyLine::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyLine::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GenerateSlidingNormals_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateSlidingNormals");

  vtkPoints *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    int tempr = vtkPolyLine::GenerateSlidingNormals(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyLine_GenerateSlidingNormals_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateSlidingNormals");

  vtkPoints *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  bool temp4 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = vtkPolyLine::GenerateSlidingNormals(temp0, temp1, temp2, temp3, temp4);

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
PyvtkPolyLine_GenerateSlidingNormals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyLine_GenerateSlidingNormals_s1(self, args);
    case 4:
    case 5:
      return PyvtkPolyLine_GenerateSlidingNormals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateSlidingNormals");
  return nullptr;
}


static PyObject *
PyvtkPolyLine_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkPolyLine::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkPolyLine::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkPolyLine::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkPolyLine::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkPolyLine::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkPolyLine::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->CellBoundary(temp0, temp1, temp2) :
      op->vtkPolyLine::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkCellArray *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkPointData *temp7 = nullptr;
  vtkCellData *temp8 = nullptr;
  long long temp9;
  vtkCellData *temp10 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }
    else
    {
      op->vtkPolyLine::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkPolyLine::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPolyLine::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
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
PyvtkPolyLine_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->EvaluateLocation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyLine::EvaluateLocation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPolyLine::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
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
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_TriangulateLocalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateLocalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->TriangulateLocalIds(temp0, temp1) :
      op->vtkPolyLine::TriangulateLocalIds(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Derivatives(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPolyLine::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPolyLine_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkPolyLine::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyLine_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLine *op = static_cast<vtkPolyLine *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetParametricCenter(temp0) :
      op->vtkPolyLine::GetParametricCenter(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyLine_Methods[] = {
  {"IsTypeOf", PyvtkPolyLine_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyLine_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyLine_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyLine\nC++: static vtkPolyLine *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyLine_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyLine\nC++: vtkPolyLine *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyLine_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyLine_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateSlidingNormals", PyvtkPolyLine_GenerateSlidingNormals, METH_VARARGS,
   "GenerateSlidingNormals(pts:vtkPoints, lines:vtkCellArray,\n    normals:vtkDataArray) -> int\nC++: static int GenerateSlidingNormals(vtkPoints *pts,\n    vtkCellArray *lines, vtkDataArray *normals)\nGenerateSlidingNormals(pts:vtkPoints, lines:vtkCellArray,\n    normals:vtkDataArray, firstNormal:[float, ...],\n    threading:bool=False) -> int\nC++: static int GenerateSlidingNormals(vtkPoints *pts,\n    vtkCellArray *lines, vtkDataArray *normals,\n    double *firstNormal, bool threading=false)\n\nGiven points and lines, compute normals to the lines. These are\nnot true normals, they are \"orientation\" normals used by classes\nlike vtkTubeFilter that control the rotation around the line. The\nnormals try to stay pointing in the same direction as much as\npossible (i.e., minimal rotation) w.r.t the firstNormal (which is\ncomputed if firstnormal=nullptr). Always returns 1 (success).\nNote that it is possible to thread this computation by setting\n\"threading=true\". However make sure that none of the points are\nused more than one time if threading is enabled, otherwise a data\nrace will be produced.\n"},
  {"GetCellType", PyvtkPolyLine_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellDimension", PyvtkPolyLine_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {"GetNumberOfEdges", PyvtkPolyLine_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkPolyLine_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkPolyLine_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkPolyLine_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"CellBoundary", PyvtkPolyLine_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"Contour", PyvtkPolyLine_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"Clip", PyvtkPolyLine_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, lines:vtkCellArray,\n    inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *lines,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell. The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-nullptr,\nthe cell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)\n"},
  {"EvaluatePosition", PyvtkPolyLine_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkPolyLine_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"IntersectWithLine", PyvtkPolyLine_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition p1[3], p2[3] and tolerance tol. The method returns\nnon-zero value if intersection occurs. A parametric distance t\nbetween 0 and 1 along the ray representing the intersection\npoint, the point coordinates x[3] in data coordinates and also\npcoords[3] in parametric coordinates. subId is the index within\nthe cell if a composed cell like a triangle strip.\n"},
  {"TriangulateLocalIds", PyvtkPolyLine_TriangulateLocalIds, METH_VARARGS,
   "TriangulateLocalIds(self, index:int, ptIds:vtkIdList) -> int\nC++: int TriangulateLocalIds(int index, vtkIdList *ptIds)\n    override;\n\nGenerate simplices of proper dimension. If cell is 3D, tetrahedra\nare generated; if 2D triangles; if 1D lines; if 0D points. The\nform of the output is a sequence of points, each n+1 points\n(where n is topological cell dimension) defining a simplex. The\nindex is a parameter that controls which triangulation to use (if\nmore than one is possible). If numerical degeneracy encountered,\n0 is returned, otherwise 1 is returned. This method does not\ninsert new points: all the points that define the simplices are\nthe points that define the cell. ptIds are the local indices with\nrespect to the cell\n"},
  {"Derivatives", PyvtkPolyLine_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"IsPrimaryCell", PyvtkPolyLine_IsPrimaryCell, METH_VARARGS,
   "IsPrimaryCell(self) -> int\nC++: int IsPrimaryCell() override;\n\nReturn whether this cell type has a fixed topology or whether the\ntopology varies depending on the data (e.g., vtkConvexPointSet).\nThis compares to composite cells that are typically composed of\nprimary cells (e.g., a triangle strip composite cell is made up\nof triangle primary cells).\n"},
  {"GetParametricCenter", PyvtkPolyLine_GetParametricCenter, METH_VARARGS,
   "GetParametricCenter(self, pcoords:[float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn the center of the point cloud in parametric coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPolyLine_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("cell_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolyLine_GetCellType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPolyLine_GetCellDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellDimension\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPolyLine_Doc =
  "vtkPolyLine - cell represents a set of 1D lines\n\n"
  "Superclass: vtkCell\n\n"
  "vtkPolyLine is a concrete implementation of vtkCell to represent a\n"
  "set of 1D lines.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyLine_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPolyLine", // tp_name
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
  PyvtkPolyLine_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyLine_StaticNew()
{
  return vtkPolyLine::New();
}

PyObject *PyvtkPolyLine_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyLine_Type, PyvtkPolyLine_Methods,
    "vtkPolyLine",
 &PyvtkPolyLine_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPolyLine_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyLine(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyLine_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyLine", o) != 0)
  {
    Py_DECREF(o);
  }

}

