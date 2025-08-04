// python wrapper for vtkCellTypeSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellTypeSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellTypeSource(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellTypeSource_ClassNew(); }


static PyObject *
PyvtkCellTypeSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypeSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellTypeSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellTypeSource *tempr = vtkCellTypeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellTypeSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellTypeSource::NewInstance());

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
PyvtkCellTypeSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellTypeSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellTypeSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellType(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkCellTypeSource::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetCellOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOrder(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCellOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellOrder() :
      op->vtkCellTypeSource::GetCellOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompleteQuadraticSimplicialElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompleteQuadraticSimplicialElements(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCompleteQuadraticSimplicialElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCompleteQuadraticSimplicialElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompleteQuadraticSimplicialElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompleteQuadraticSimplicialElements() :
      op->vtkCellTypeSource::GetCompleteQuadraticSimplicialElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteQuadraticSimplicialElementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompleteQuadraticSimplicialElementsOn();
    }
    else
    {
      op->vtkCellTypeSource::CompleteQuadraticSimplicialElementsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteQuadraticSimplicialElementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompleteQuadraticSimplicialElementsOff();
    }
    else
    {
      op->vtkCellTypeSource::CompleteQuadraticSimplicialElementsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetPolynomialFieldOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialFieldOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialFieldOrder(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetPolynomialFieldOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrderMinValue() :
      op->vtkCellTypeSource::GetPolynomialFieldOrderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrderMaxValue() :
      op->vtkCellTypeSource::GetPolynomialFieldOrderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrder() :
      op->vtkCellTypeSource::GetPolynomialFieldOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkCellTypeSource::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPrecision(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetOutputPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecisionMinValue() :
      op->vtkCellTypeSource::GetOutputPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecisionMaxValue() :
      op->vtkCellTypeSource::GetOutputPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecision() :
      op->vtkCellTypeSource::GetOutputPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetBlocksDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlocksDimensions(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetBlocksDimensions(temp0);
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
PyvtkCellTypeSource_SetBlocksDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

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
      op->SetBlocksDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypeSource::SetBlocksDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellTypeSource_SetBlocksDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellTypeSource_SetBlocksDimensions_s1(self, args);
    case 3:
      return PyvtkCellTypeSource_SetBlocksDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlocksDimensions");
  return nullptr;
}


static PyObject *
PyvtkCellTypeSource_GetBlocksDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlocksDimensions() :
      op->vtkCellTypeSource::GetBlocksDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypeSource_Methods[] = {
  {"IsTypeOf", PyvtkCellTypeSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellTypeSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellTypeSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellTypeSource\nC++: static vtkCellTypeSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellTypeSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellTypeSource\nC++: vtkCellTypeSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellTypeSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellTypeSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellType", PyvtkCellTypeSource_SetCellType, METH_VARARGS,
   "SetCellType(self, cellType:int) -> None\nC++: void SetCellType(int cellType)\n\nSet/Get the type of cells to be generated.\n"},
  {"GetCellType", PyvtkCellTypeSource_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: virtual int GetCellType()\n\n"},
  {"SetCellOrder", PyvtkCellTypeSource_SetCellOrder, METH_VARARGS,
   "SetCellOrder(self, _arg:int) -> None\nC++: virtual void SetCellOrder(int _arg)\n\nSet/Get the order of Lagrange interpolation to be used.\n\nThis is only used when the cell type is a Lagrange element. The\ndefault is cubic (order 3). Lagrange elements are the same order\nalong all axes (i.e., you cannot specify a different\ninterpolation order for the i, j, and k axes of a hexahedron).\n"},
  {"GetCellOrder", PyvtkCellTypeSource_GetCellOrder, METH_VARARGS,
   "GetCellOrder(self) -> int\nC++: virtual int GetCellOrder()\n\n"},
  {"SetCompleteQuadraticSimplicialElements", PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements, METH_VARARGS,
   "SetCompleteQuadraticSimplicialElements(self, _arg:bool) -> None\nC++: virtual void SetCompleteQuadraticSimplicialElements(\n    bool _arg)\n\nSet/Get whether quadratic cells with simplicial shapes should be\n\"completed\".\n\nBy default, quadratic Lagrange cells with simplicial shapes do\nnot completely span the basis of all polynomial of the maximal\ndegree. This can be corrected by adding mid-face and\nbody-centered nodes. Setting this option to true will generate\ncells with these additional nodes.\n\nThis is only used when (1) the cell type is a Lagrange triangle,\ntetrahedron, or wedge; and (2) CellOrder is set to 2 (quadratic\nelements). The default is false.\n\nWhen true, generated (1) triangles will have 7 nodes instead of\n6; (2) tetrahedra will have 15 nodes instead of 10; (3) wedges\nwill have 21 nodes instead of 18.\n"},
  {"GetCompleteQuadraticSimplicialElements", PyvtkCellTypeSource_GetCompleteQuadraticSimplicialElements, METH_VARARGS,
   "GetCompleteQuadraticSimplicialElements(self) -> bool\nC++: virtual bool GetCompleteQuadraticSimplicialElements()\n\n"},
  {"CompleteQuadraticSimplicialElementsOn", PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOn, METH_VARARGS,
   "CompleteQuadraticSimplicialElementsOn(self) -> None\nC++: virtual void CompleteQuadraticSimplicialElementsOn()\n\n"},
  {"CompleteQuadraticSimplicialElementsOff", PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOff, METH_VARARGS,
   "CompleteQuadraticSimplicialElementsOff(self) -> None\nC++: virtual void CompleteQuadraticSimplicialElementsOff()\n\n"},
  {"SetPolynomialFieldOrder", PyvtkCellTypeSource_SetPolynomialFieldOrder, METH_VARARGS,
   "SetPolynomialFieldOrder(self, _arg:int) -> None\nC++: virtual void SetPolynomialFieldOrder(int _arg)\n\nSet/Get the polynomial order of the \"Polynomial\" point field. The\ndefault is 1.\n"},
  {"GetPolynomialFieldOrderMinValue", PyvtkCellTypeSource_GetPolynomialFieldOrderMinValue, METH_VARARGS,
   "GetPolynomialFieldOrderMinValue(self) -> int\nC++: virtual int GetPolynomialFieldOrderMinValue()\n\n"},
  {"GetPolynomialFieldOrderMaxValue", PyvtkCellTypeSource_GetPolynomialFieldOrderMaxValue, METH_VARARGS,
   "GetPolynomialFieldOrderMaxValue(self) -> int\nC++: virtual int GetPolynomialFieldOrderMaxValue()\n\n"},
  {"GetPolynomialFieldOrder", PyvtkCellTypeSource_GetPolynomialFieldOrder, METH_VARARGS,
   "GetPolynomialFieldOrder(self) -> int\nC++: virtual int GetPolynomialFieldOrder()\n\n"},
  {"GetCellDimension", PyvtkCellTypeSource_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension()\n\nGet the dimension of the cell blocks to be generated\n"},
  {"SetOutputPrecision", PyvtkCellTypeSource_SetOutputPrecision, METH_VARARGS,
   "SetOutputPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION (0) - Output single-precision\nfloating point. vtkAlgorithm::DOUBLE_PRECISION (1) - Output\ndouble-precision floating point.\n"},
  {"GetOutputPrecisionMinValue", PyvtkCellTypeSource_GetOutputPrecisionMinValue, METH_VARARGS,
   "GetOutputPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPrecisionMinValue()\n\n"},
  {"GetOutputPrecisionMaxValue", PyvtkCellTypeSource_GetOutputPrecisionMaxValue, METH_VARARGS,
   "GetOutputPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPrecisionMaxValue()\n\n"},
  {"GetOutputPrecision", PyvtkCellTypeSource_GetOutputPrecision, METH_VARARGS,
   "GetOutputPrecision(self) -> int\nC++: virtual int GetOutputPrecision()\n\n"},
  {"SetBlocksDimensions", PyvtkCellTypeSource_SetBlocksDimensions, METH_VARARGS,
   "SetBlocksDimensions(self, __a:[int, ...]) -> None\nC++: void SetBlocksDimensions(int *)\nSetBlocksDimensions(self, __a:int, __b:int, __c:int) -> None\nC++: void SetBlocksDimensions(int, int, int)\n\nSet the number of cells in each direction. If a 1D cell type is\nselected then only the first dimension is used and if a 2D cell\ntype is selected then the first and second dimensions are used.\nDefault is (1, 1, 1), which results in a single block of cells.\n"},
  {"GetBlocksDimensions", PyvtkCellTypeSource_GetBlocksDimensions, METH_VARARGS,
   "GetBlocksDimensions(self) -> (int, int, int)\nC++: virtual int *GetBlocksDimensions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellTypeSource_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("cell_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetCellType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetCellType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetCellType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellType/SetCellType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_order"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetCellOrder(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetCellOrder(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetCellOrder(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellOrder/SetCellOrder\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("complete_quadratic_simplicial_elements"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetCompleteQuadraticSimplicialElements(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCompleteQuadraticSimplicialElements/SetCompleteQuadraticSimplicialElements\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("polynomial_field_order"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetPolynomialFieldOrder(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetPolynomialFieldOrder(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetPolynomialFieldOrder(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPolynomialFieldOrder/SetPolynomialFieldOrder\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetOutputPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetOutputPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetOutputPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputPrecision/SetOutputPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blocks_dimensions"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetBlocksDimensions(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetBlocksDimensions(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetBlocksDimensions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blocks_dimensions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetBlocksDimensions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellTypeSource_SetBlocksDimensions(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellTypeSource_SetBlocksDimensions(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBlocksDimensions/SetBlocksDimensions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellTypeSource_GetCellDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellDimension\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellTypeSource_Doc =
  "vtkCellTypeSource - Create cells of a given type\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkCellTypeSource is a source object that creates cells of the given\n"
  "input type. BlocksDimensions specifies the number of cell \"blocks\" in\n"
  "each direction. A cell block may be divided into multiple cells based\n"
  "on the chosen cell type (e.g. 6 pyramid cells make up a single cell\n"
  "block). If a 1D cell is selected then only the first dimension is\n"
  "used to specify how many cells are generated. If a 2D cell is\n"
  "selected then only the first and second dimensions are used to\n"
  "determine how many cells are created. The source respects pieces.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellTypeSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkCellTypeSource", // tp_name
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
  PyvtkCellTypeSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellTypeSource_StaticNew()
{
  return vtkCellTypeSource::New();
}

PyObject *PyvtkCellTypeSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellTypeSource_Type, PyvtkCellTypeSource_Methods,
    "vtkCellTypeSource",
 &PyvtkCellTypeSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellTypeSource_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellTypeSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellTypeSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellTypeSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

