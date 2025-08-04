// python wrapper for vtkHyperTreeGridMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridMapper_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridMapper *tempr = vtkHyperTreeGridMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridMapper::NewInstance());

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
PyvtkHyperTreeGridMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SetInputDataObject_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputDataObject(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetInputDataObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridMapper_SetInputDataObject_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputDataObject(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetInputDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridMapper_SetInputDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHyperTreeGridMapper_SetInputDataObject_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridMapper_SetInputDataObject_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputDataObject");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHyperTreeGridMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::GetBounds(temp0);
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
PyvtkHyperTreeGridMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridMapper_GetBoundsComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBoundsComposite(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::GetBoundsComposite(temp0);
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
PyvtkHyperTreeGridMapper_GetUseAdaptiveDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAdaptiveDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAdaptiveDecimation() :
      op->vtkHyperTreeGridMapper::GetUseAdaptiveDecimation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SetUseAdaptiveDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAdaptiveDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAdaptiveDecimation(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetUseAdaptiveDecimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_UseAdaptiveDecimationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAdaptiveDecimationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAdaptiveDecimationOn();
    }
    else
    {
      op->vtkHyperTreeGridMapper::UseAdaptiveDecimationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_UseAdaptiveDecimationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAdaptiveDecimationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAdaptiveDecimationOff();
    }
    else
    {
      op->vtkHyperTreeGridMapper::UseAdaptiveDecimationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeDataDisplayAttributes(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetCompositeDataDisplayAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkHyperTreeGridMapper::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkHyperTreeGridMapper::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkHyperTreeGridMapper::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkHyperTreeGridMapper::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridMapper *op = static_cast<vtkHyperTreeGridMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkHyperTreeGridMapper::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHyperTreeGridMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridMapper_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}

static PyMethodDef PyvtkHyperTreeGridMapper_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridMapper\nC++: static vtkHyperTreeGridMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridMapper\nC++: vtkHyperTreeGridMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputDataObject", PyvtkHyperTreeGridMapper_SetInputDataObject, METH_VARARGS,
   "SetInputDataObject(self, port:int, input:vtkDataObject) -> None\nC++: void SetInputDataObject(int port, vtkDataObject *input)\n    override;\nSetInputDataObject(self, input:vtkDataObject) -> None\nC++: void SetInputDataObject(vtkDataObject *input) override;\n\nSets the data-object as an input on the given port index. Setting\nthe input with this method removes all other connections from the\nport. Internally, this method creates a vtkTrivialProducer\ninstance and sets that as the input-connection for the given\nport. It is safe to call this method repeatedly with the same\ninput data object. The MTime of the vtkAlgorithm will not change\nunless the data object changed.\n"},
  {"GetBounds", PyvtkHyperTreeGridMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nFor this mapper, the bounds correspond to the output for the\ninternal surface filter which may be restricted to the Camera\nfrustum if UseCameraFrustum is on. Bounds take block visibility\ninto account for composite inputs.\n"},
  {"GetBoundsComposite", PyvtkHyperTreeGridMapper_GetBoundsComposite, METH_VARARGS,
   "GetBoundsComposite(self, bounds:[float, float, float, float,\n    float, float]) -> None\nC++: void GetBoundsComposite(double bounds[6])\n\n"},
  {"GetUseAdaptiveDecimation", PyvtkHyperTreeGridMapper_GetUseAdaptiveDecimation, METH_VARARGS,
   "GetUseAdaptiveDecimation(self) -> bool\nC++: virtual bool GetUseAdaptiveDecimation()\n\nThis boolean control whether or not the mapping should adapt to\nthe Camera frustum during the rendering. Setting this variable to\ntrue (default) should provide increased performances.\n"},
  {"SetUseAdaptiveDecimation", PyvtkHyperTreeGridMapper_SetUseAdaptiveDecimation, METH_VARARGS,
   "SetUseAdaptiveDecimation(self, _arg:bool) -> None\nC++: virtual void SetUseAdaptiveDecimation(bool _arg)\n\n"},
  {"UseAdaptiveDecimationOn", PyvtkHyperTreeGridMapper_UseAdaptiveDecimationOn, METH_VARARGS,
   "UseAdaptiveDecimationOn(self) -> None\nC++: virtual void UseAdaptiveDecimationOn()\n\n"},
  {"UseAdaptiveDecimationOff", PyvtkHyperTreeGridMapper_UseAdaptiveDecimationOff, METH_VARARGS,
   "UseAdaptiveDecimationOff(self) -> None\nC++: virtual void UseAdaptiveDecimationOff()\n\n"},
  {"SetCompositeDataDisplayAttributes", PyvtkHyperTreeGridMapper_SetCompositeDataDisplayAttributes, METH_VARARGS,
   "SetCompositeDataDisplayAttributes(self,\n    attributes:vtkCompositeDataDisplayAttributes) -> None\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set attributes. This is forwarded to\nthe internal composite polydata mapper if we're using one.\n"},
  {"GetCompositeDataDisplayAttributes", PyvtkHyperTreeGridMapper_GetCompositeDataDisplayAttributes, METH_VARARGS,
   "GetCompositeDataDisplayAttributes(self)\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\n"},
  {"SetBlockVisibility", PyvtkHyperTreeGridMapper_SetBlockVisibility, METH_VARARGS,
   "SetBlockVisibility(self, index:int, visible:bool) -> None\nC++: void SetBlockVisibility(unsigned int index, bool visible)\n\nSet/get the visibility for a block given its flat index. Only\nworks for subclasses whose mapper is composite.\nCompositeDataDisplayAttributes needs to be set for visibilities\nto be applied.\n"},
  {"GetBlockVisibility", PyvtkHyperTreeGridMapper_GetBlockVisibility, METH_VARARGS,
   "GetBlockVisibility(self, index:int) -> bool\nC++: bool GetBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibility", PyvtkHyperTreeGridMapper_RemoveBlockVisibility, METH_VARARGS,
   "RemoveBlockVisibility(self, index:int) -> None\nC++: void RemoveBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibilities", PyvtkHyperTreeGridMapper_RemoveBlockVisibilities, METH_VARARGS,
   "RemoveBlockVisibilities(self) -> None\nC++: void RemoveBlockVisibilities()\n\n"},
  {"Render", PyvtkHyperTreeGridMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nUse the internal PolyData Mapper to do the rendering of the HTG\ntransformed by the current SurfaceFilter:\n* Adaptive2DGeometryFilter if UseCameraFrustum\n* GeometryFilter otherwise\n"},
  {"FillInputPortInformation", PyvtkHyperTreeGridMapper_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"SetInputConnection", PyvtkHyperTreeGridMapper_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nSetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\n* The input for the connection is the output port of another\n* filter, which is obtained with GetOutputPort().  Typical usage\n  is\n\n* filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("input_data_object"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridMapper_SetInputDataObject(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridMapper_SetInputDataObject(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputDataObject\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_adaptive_decimation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridMapper_GetUseAdaptiveDecimation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridMapper_SetUseAdaptiveDecimation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridMapper_SetUseAdaptiveDecimation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseAdaptiveDecimation/SetUseAdaptiveDecimation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("composite_data_display_attributes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridMapper_GetCompositeDataDisplayAttributes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridMapper_SetCompositeDataDisplayAttributes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridMapper_SetCompositeDataDisplayAttributes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCompositeDataDisplayAttributes/SetCompositeDataDisplayAttributes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridMapper_SetInputConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridMapper_SetInputConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridMapper_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridMapper_Doc =
  "vtkHyperTreeGridMapper - map vtkHyperTreeGrid to graphics primitives\n\n"
  "Superclass: vtkMapper\n\n"
  "* vtkHyperTreeGridMapper is a class that maps polygonal data (i.e.,\n"
  "  vtkHyperTreeGrid)\n"
  "* to graphics primitives. vtkHyperTreeGridMapper serves as a\n"
  "  superclass for\n"
  "* device-specific poly data mappers, that actually do the mapping to\n"
  "  the\n"
  "* rendering/graphics hardware/software.\n\n"
  "* By default, this class use an Adaptive GeometryFilter that extract\n"
  "  only\n"
  "* the part of the geometry to render. Be careful as this implies that\n"
  "new\n"
  "* render may trigger an update of the pipeline to get the new part of\n"
  "the\n"
  "* geometry to render.\n\n"
  "* Note: this class has its own module to avoid cyclic dependency\n"
  "  between Rendering Core\n"
  "* and Filters Hybrid\n"
  "* * It need Filters Hybrid for Adaptive2DGeometryFilter\n"
  "* * Filters Hybrid need Rendering Core because of\n"
  "  Adaptive2DGeometryFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingHyperTreeGrid.vtkHyperTreeGridMapper", // tp_name
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
  PyvtkHyperTreeGridMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridMapper_StaticNew()
{
  return vtkHyperTreeGridMapper::New();
}

PyObject *PyvtkHyperTreeGridMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridMapper_Type, PyvtkHyperTreeGridMapper_Methods,
    "vtkHyperTreeGridMapper",
 &PyvtkHyperTreeGridMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMapper");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

