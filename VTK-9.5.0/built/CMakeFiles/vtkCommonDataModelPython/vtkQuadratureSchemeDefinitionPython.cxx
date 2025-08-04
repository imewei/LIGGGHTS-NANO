// python wrapper for vtkQuadratureSchemeDefinition
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkQuadratureSchemeDefinition.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkQuadratureSchemeDefinition(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkQuadratureSchemeDefinition_ClassNew(); }


static PyObject *
PyvtkQuadratureSchemeDefinition_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadratureSchemeDefinition::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadratureSchemeDefinition::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadratureSchemeDefinition *tempr = vtkQuadratureSchemeDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadratureSchemeDefinition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadratureSchemeDefinition::NewInstance());

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
PyvtkQuadratureSchemeDefinition_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkQuadratureSchemeDefinition::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkQuadratureSchemeDefinition::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DICTIONARY(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DICTIONARY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationQuadratureSchemeDefinitionVectorKey *tempr = vtkQuadratureSchemeDefinition::DICTIONARY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QUADRATURE_OFFSET_ARRAY_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkQuadratureSchemeDefinition::QUADRATURE_OFFSET_ARRAY_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkQuadratureSchemeDefinition *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadratureSchemeDefinition"))
  {
    int tempr = (ap.IsBound() ?
      op->DeepCopy(temp0) :
      op->vtkQuadratureSchemeDefinition::DeepCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->SaveState(temp0) :
      op->vtkQuadratureSchemeDefinition::SaveState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->RestoreState(temp0) :
      op->vtkQuadratureSchemeDefinition::RestoreState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
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

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3);
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
PyvtkQuadratureSchemeDefinition_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3, temp4);
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
PyvtkQuadratureSchemeDefinition_Initialize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(size4);
  double *temp4 = store4.Data();
  int temp5;
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(size6);
  double *temp6 = store6.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkQuadratureSchemeDefinition_Initialize_s1(self, args);
    case 5:
      return PyvtkQuadratureSchemeDefinition_Initialize_s2(self, args);
    case 7:
      return PyvtkQuadratureSchemeDefinition_Initialize_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkQuadratureSchemeDefinition::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuadratureKey() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuadraturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuadraturePoints() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfQuadraturePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkQuadratureSchemeDefinition::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights() :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights(temp0) :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(self, args);
    case 1:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetShapeFunctionWeights");
  return nullptr;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionDerivativeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionDerivativeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionDerivativeWeights(temp0) :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionDerivativeWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetQuadratureWeights() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadratureSchemeDefinition_Methods[] = {
  {"IsTypeOf", PyvtkQuadratureSchemeDefinition_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadratureSchemeDefinition_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadratureSchemeDefinition_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkQuadratureSchemeDefinition\nC++: static vtkQuadratureSchemeDefinition *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadratureSchemeDefinition_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkQuadratureSchemeDefinition_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkQuadratureSchemeDefinition_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DICTIONARY", PyvtkQuadratureSchemeDefinition_DICTIONARY, METH_VARARGS,
   "DICTIONARY() -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: static vtkInformationQuadratureSchemeDefinitionVectorKey *DICTIONARY(\n    )\n\n"},
  {"QUADRATURE_OFFSET_ARRAY_NAME", PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME, METH_VARARGS,
   "QUADRATURE_OFFSET_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *QUADRATURE_OFFSET_ARRAY_NAME(\n    )\n\n"},
  {"DeepCopy", PyvtkQuadratureSchemeDefinition_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkQuadratureSchemeDefinition) -> int\nC++: int DeepCopy(const vtkQuadratureSchemeDefinition *other)\n\nDeep copy.\n"},
  {"SaveState", PyvtkQuadratureSchemeDefinition_SaveState, METH_VARARGS,
   "SaveState(self, root:vtkXMLDataElement) -> int\nC++: int SaveState(vtkXMLDataElement *root)\n\nPut the object into an XML representation. The element passed in\nis assumed to be empty.\n"},
  {"RestoreState", PyvtkQuadratureSchemeDefinition_RestoreState, METH_VARARGS,
   "RestoreState(self, root:vtkXMLDataElement) -> int\nC++: int RestoreState(vtkXMLDataElement *root)\n\nRestore the object from an XML representation.\n"},
  {"Initialize", PyvtkQuadratureSchemeDefinition_Initialize, METH_VARARGS,
   "Initialize(self, cellType:int, numberOfNodes:int,\n    numberOfQuadraturePoints:int, shapeFunctionWeights:[float,\n    ...]) -> None\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights)\nInitialize(self, cellType:int, numberOfNodes:int,\n    numberOfQuadraturePoints:int, shapeFunctionWeights:[float,\n    ...], quadratureWeights:[float, ...]) -> None\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights,\n    double *quadratureWeights)\nInitialize(self, cellType:int, numberOfNodes:int,\n    numberOfQuadraturePoints:int, shapeFunctionWeights:(float,\n    ...), quadratureWeights:(float, ...), dim:int,\n    shapeFunctionDerivativeWeights:(float, ...)) -> None\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints,\n    const double *shapeFunctionWeights,\n    const double *quadratureWeights, int dim,\n    const double *shapeFunctionDerivativeWeights)\n\nInitialize the object allocating resources as needed.\n"},
  {"GetCellType", PyvtkQuadratureSchemeDefinition_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType()\n\nAccess the VTK cell type id.\n"},
  {"GetQuadratureKey", PyvtkQuadratureSchemeDefinition_GetQuadratureKey, METH_VARARGS,
   "GetQuadratureKey(self) -> int\nC++: int GetQuadratureKey()\n\nAccess to an alternative key.\n"},
  {"GetNumberOfNodes", PyvtkQuadratureSchemeDefinition_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: int GetNumberOfNodes()\n\nGet the number of nodes associated with the interpolation.\n"},
  {"GetNumberOfQuadraturePoints", PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints, METH_VARARGS,
   "GetNumberOfQuadraturePoints(self) -> int\nC++: int GetNumberOfQuadraturePoints()\n\nGet the number of quadrature points associated with the scheme.\n"},
  {"GetDimension", PyvtkQuadratureSchemeDefinition_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: virtual int GetDimension()\n\nGet the dimension of the reference element.\n"},
  {"GetShapeFunctionWeights", PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights, METH_VARARGS,
   "GetShapeFunctionWeights(self) -> Pointer\nC++: const double *GetShapeFunctionWeights()\nGetShapeFunctionWeights(self, quadraturePointId:int) -> Pointer\nC++: const double *GetShapeFunctionWeights(int quadraturePointId)\n\nGet the array of shape function weights. Shape function weights\nare the shape functions evaluated at the quadrature points. There\nare \"NumberOfNodes\" weights for each quadrature point.\n"},
  {"GetShapeFunctionDerivativeWeights", PyvtkQuadratureSchemeDefinition_GetShapeFunctionDerivativeWeights, METH_VARARGS,
   "GetShapeFunctionDerivativeWeights(self, quadraturePointId:int)\n    -> Pointer\nC++: const double *GetShapeFunctionDerivativeWeights(\n    int quadraturePointId)\n\nGet the array of shape function derivative weights associated\nwith a single quadrature point.\n"},
  {"GetQuadratureWeights", PyvtkQuadratureSchemeDefinition_GetQuadratureWeights, METH_VARARGS,
   "GetQuadratureWeights(self) -> Pointer\nC++: const double *GetQuadratureWeights()\n\nAccess to the quadrature weights.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkQuadratureSchemeDefinition_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("shape_function_weights"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetShapeFunctionWeights\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("quadrature_weights"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetQuadratureWeights(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetQuadratureWeights\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetCellType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("quadrature_key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetQuadratureKey(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetQuadratureKey\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_nodes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetNumberOfNodes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfNodes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_quadrature_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfQuadraturePoints\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkQuadratureSchemeDefinition_Doc =
  "vtkQuadratureSchemeDefinition - An Elemental data type that holds a\ndefinition of a numerical quadrature scheme.\n\n"
  "Superclass: vtkObject\n\n"
  "The definition contains the requisite information to interpolate to\n"
  "the so called quadrature points of the specific scheme. namely:\n\n"
  "1) A matrix of shape function weights(shape functions evaluated at\n"
  "parametric coordinates of the quadrature points).\n\n"
  "2) The number of quadrature points and cell nodes. These parameters\n"
  "size the matrix, and allow for convenient evaluation by users of the\n"
  "definition. \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuadratureSchemeDefinition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkQuadratureSchemeDefinition", // tp_name
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
  PyvtkQuadratureSchemeDefinition_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadratureSchemeDefinition_StaticNew()
{
  return vtkQuadratureSchemeDefinition::New();
}

PyObject *PyvtkQuadratureSchemeDefinition_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkQuadratureSchemeDefinition_Type, PyvtkQuadratureSchemeDefinition_Methods,
    "vtkQuadratureSchemeDefinition",
 &PyvtkQuadratureSchemeDefinition_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkQuadratureSchemeDefinition_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuadratureSchemeDefinition(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadratureSchemeDefinition_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadratureSchemeDefinition", o) != 0)
  {
    Py_DECREF(o);
  }

}

