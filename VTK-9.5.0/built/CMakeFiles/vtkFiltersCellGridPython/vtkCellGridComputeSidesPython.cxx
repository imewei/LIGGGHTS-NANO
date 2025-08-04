// python wrapper for vtkCellGridComputeSides
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGridSidesQuery.h"
#include "vtkStringToken.h"
#include "vtkCellGridComputeSides.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridComputeSides(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridComputeSides_ClassNew(); }


static PyObject *
PyvtkCellGridComputeSides_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridComputeSides::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridComputeSides::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridComputeSides *tempr = vtkCellGridComputeSides::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridComputeSides *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridComputeSides::NewInstance());

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
PyvtkCellGridComputeSides_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridComputeSides::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridComputeSides::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SetPreserveRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveRenderableInputs(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetPreserveRenderableInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_GetPreserveRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveRenderableInputs() :
      op->vtkCellGridComputeSides::GetPreserveRenderableInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_PreserveRenderableInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveRenderableInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveRenderableInputsOn();
    }
    else
    {
      op->vtkCellGridComputeSides::PreserveRenderableInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_PreserveRenderableInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveRenderableInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveRenderableInputsOff();
    }
    else
    {
      op->vtkCellGridComputeSides::PreserveRenderableInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SetOmitSidesForRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOmitSidesForRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOmitSidesForRenderableInputs(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetOmitSidesForRenderableInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_GetOmitSidesForRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOmitSidesForRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOmitSidesForRenderableInputs() :
      op->vtkCellGridComputeSides::GetOmitSidesForRenderableInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_OmitSidesForRenderableInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitSidesForRenderableInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitSidesForRenderableInputsOn();
    }
    else
    {
      op->vtkCellGridComputeSides::OmitSidesForRenderableInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_OmitSidesForRenderableInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitSidesForRenderableInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitSidesForRenderableInputsOff();
    }
    else
    {
      op->vtkCellGridComputeSides::OmitSidesForRenderableInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SetOutputDimensionControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensionControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensionControl(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetOutputDimensionControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_GetOutputDimensionControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionControl() :
      op->vtkCellGridComputeSides::GetOutputDimensionControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SetStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  vtkCellGridSidesQuery::SummaryStrategy temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SummaryStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridComputeSides_SetStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridComputeSides_SetStrategy_Methods[] = {
  {"SetStrategy", PyvtkCellGridComputeSides_SetStrategy_s1, METH_VARARGS,
   "@E vtkCellGridSidesQuery.SummaryStrategy"},
  {"SetStrategy", PyvtkCellGridComputeSides_SetStrategy_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGridComputeSides_SetStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGridComputeSides_SetStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStrategy");
  return nullptr;
}


static PyObject *
PyvtkCellGridComputeSides_GetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridSidesQuery::SummaryStrategy tempr = (ap.IsBound() ?
      op->GetStrategy() :
      op->vtkCellGridComputeSides::GetStrategy());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkCellGridSidesQuery.SummaryStrategy");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_SetSelectionType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  vtkCellGridSidesQuery::SelectionMode temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SelectionMode"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridComputeSides_SetSelectionType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkCellGridComputeSides::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridComputeSides_SetSelectionType_Methods[] = {
  {"SetSelectionType", PyvtkCellGridComputeSides_SetSelectionType_s1, METH_VARARGS,
   "@E vtkCellGridSidesQuery.SelectionMode"},
  {"SetSelectionType", PyvtkCellGridComputeSides_SetSelectionType_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGridComputeSides_SetSelectionType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGridComputeSides_SetSelectionType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionType");
  return nullptr;
}


static PyObject *
PyvtkCellGridComputeSides_GetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridComputeSides *op = static_cast<vtkCellGridComputeSides *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridSidesQuery::SelectionMode tempr = (ap.IsBound() ?
      op->GetSelectionType() :
      op->vtkCellGridComputeSides::GetSelectionType());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkCellGridSidesQuery.SelectionMode");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridComputeSides_GetSideAttribute(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSideAttribute");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStringToken tempr = vtkCellGridComputeSides::GetSideAttribute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridComputeSides_Methods[] = {
  {"IsTypeOf", PyvtkCellGridComputeSides_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridComputeSides_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridComputeSides_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridComputeSides\nC++: static vtkCellGridComputeSides *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridComputeSides_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridComputeSides\nC++: vtkCellGridComputeSides *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridComputeSides_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridComputeSides_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPreserveRenderableInputs", PyvtkCellGridComputeSides_SetPreserveRenderableInputs, METH_VARARGS,
   "SetPreserveRenderableInputs(self, preserve:bool) -> None\nC++: virtual void SetPreserveRenderableInputs(bool preserve)\n\nSet/get whether the output should include cells which are\nthemselves renderable (surfaces, edges, or vertices) or should\nonly include sides of the input cells.\n\nIf you are implementing a responder, you are expected to employ\nthis query parameter.\n"},
  {"GetPreserveRenderableInputs", PyvtkCellGridComputeSides_GetPreserveRenderableInputs, METH_VARARGS,
   "GetPreserveRenderableInputs(self) -> bool\nC++: bool GetPreserveRenderableInputs()\n\n"},
  {"PreserveRenderableInputsOn", PyvtkCellGridComputeSides_PreserveRenderableInputsOn, METH_VARARGS,
   "PreserveRenderableInputsOn(self) -> None\nC++: virtual void PreserveRenderableInputsOn()\n\n"},
  {"PreserveRenderableInputsOff", PyvtkCellGridComputeSides_PreserveRenderableInputsOff, METH_VARARGS,
   "PreserveRenderableInputsOff(self) -> None\nC++: virtual void PreserveRenderableInputsOff()\n\n"},
  {"SetOmitSidesForRenderableInputs", PyvtkCellGridComputeSides_SetOmitSidesForRenderableInputs, METH_VARARGS,
   "SetOmitSidesForRenderableInputs(self, omit:bool) -> None\nC++: virtual void SetOmitSidesForRenderableInputs(bool omit)\n\nSet/get whether sides should be computed if the cells are\nthemselves renderable (surfaces, edges, or vertices).\n\nIf this is true, no sides will be computed for inputs that are\nrenderable. If false, then sides will be computed. Note that\nOmitSidesForRenderableInputs is distinct from\nPreserveRenderableInputs, which determines whether renderable\ncells should be copied to the output.\n\nThe default is false.\n"},
  {"GetOmitSidesForRenderableInputs", PyvtkCellGridComputeSides_GetOmitSidesForRenderableInputs, METH_VARARGS,
   "GetOmitSidesForRenderableInputs(self) -> bool\nC++: bool GetOmitSidesForRenderableInputs()\n\n"},
  {"OmitSidesForRenderableInputsOn", PyvtkCellGridComputeSides_OmitSidesForRenderableInputsOn, METH_VARARGS,
   "OmitSidesForRenderableInputsOn(self) -> None\nC++: virtual void OmitSidesForRenderableInputsOn()\n\n"},
  {"OmitSidesForRenderableInputsOff", PyvtkCellGridComputeSides_OmitSidesForRenderableInputsOff, METH_VARARGS,
   "OmitSidesForRenderableInputsOff(self) -> None\nC++: virtual void OmitSidesForRenderableInputsOff()\n\n"},
  {"SetOutputDimensionControl", PyvtkCellGridComputeSides_SetOutputDimensionControl, METH_VARARGS,
   "SetOutputDimensionControl(self, flags:int) -> None\nC++: virtual void SetOutputDimensionControl(int flags)\n\nSet/get a bit-vector flag indicating which sides of which\ndimension to generate.\n\n\\sa vtkCellGridSidesQuery\n"},
  {"GetOutputDimensionControl", PyvtkCellGridComputeSides_GetOutputDimensionControl, METH_VARARGS,
   "GetOutputDimensionControl(self) -> int\nC++: int GetOutputDimensionControl()\n\n"},
  {"SetStrategy", PyvtkCellGridComputeSides_SetStrategy, METH_VARARGS,
   "SetStrategy(self, strategy:vtkCellGridSidesQuery.SummaryStrategy)\n    -> None\nC++: virtual void SetStrategy(SummaryStrategy strategy)\nSetStrategy(self, strategy:int) -> None\nC++: virtual void SetStrategy(int strategy)\n\nSet/get the strategy used to determine which input sides appear\nin the output.\n"},
  {"GetStrategy", PyvtkCellGridComputeSides_GetStrategy, METH_VARARGS,
   "GetStrategy(self) -> vtkCellGridSidesQuery.SummaryStrategy\nC++: SummaryStrategy GetStrategy()\n\n"},
  {"SetSelectionType", PyvtkCellGridComputeSides_SetSelectionType, METH_VARARGS,
   "SetSelectionType(self,\n    selectionType:vtkCellGridSidesQuery.SelectionMode) -> None\nC++: virtual void SetSelectionType(SelectionMode selectionType)\nSetSelectionType(self, selnType:int) -> None\nC++: virtual void SetSelectionType(int selnType)\n\nSet/get the selection type.\n\nThis determines what shapes should be selected when output sides\nof this filter are picked by a user.\n"},
  {"GetSelectionType", PyvtkCellGridComputeSides_GetSelectionType, METH_VARARGS,
   "GetSelectionType(self) -> vtkCellGridSidesQuery.SelectionMode\nC++: SelectionMode GetSelectionType()\n\n"},
  {"GetSideAttribute", PyvtkCellGridComputeSides_GetSideAttribute, METH_VARARGS,
   "GetSideAttribute() -> vtkStringToken\nC++: static vtkStringToken GetSideAttribute()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridComputeSides_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("preserve_renderable_inputs"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetPreserveRenderableInputs(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetPreserveRenderableInputs(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetPreserveRenderableInputs(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPreserveRenderableInputs/SetPreserveRenderableInputs\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("omit_sides_for_renderable_inputs"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetOmitSidesForRenderableInputs(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetOmitSidesForRenderableInputs(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetOmitSidesForRenderableInputs(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOmitSidesForRenderableInputs/SetOmitSidesForRenderableInputs\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_dimension_control"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetOutputDimensionControl(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetOutputDimensionControl(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetOutputDimensionControl(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputDimensionControl/SetOutputDimensionControl\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("strategy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetStrategy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStrategy/SetStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("strategy"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetSelectionType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetSelectionType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetSelectionType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionType/SetSelectionType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_type"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridComputeSides_SetSelectionType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridComputeSides_SetSelectionType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSelectionType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_attribute"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridComputeSides_GetSideAttribute(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSideAttribute\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridComputeSides_Doc =
  "vtkCellGridComputeSides - Generate sides of input data (cells and/or\nsides) based on a strategy.\n\n"
  "Superclass: vtkCellGridAlgorithm\n\n"
  "This filter simply adds or replaces a 2-component array for each type\n"
  "of side, for each cell type which identifies the set sides which are\n"
  "\"un-shared.\" Internally, it uses a vtkCellGridSidesQuery to obtain\n"
  "sides, so the cells in your vtkCellGrid must provide a responder for\n"
  "this query type.\n\n"
  "This filter can be set to indicate which output data is copied\n"
  "directly from the input and which data is a set of sides generated\n"
  "from its input. This is used by the cell-grid representation in\n"
  "ParaView to identify how selections should be extracted: sides not\n"
  "marked as \"original\" will result in their entire cell (not just the\n"
  "side) being extracted.\n\n"
  "@sa vtkCellGridSidesQuery\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridComputeSides_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkCellGridComputeSides", // tp_name
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
  PyvtkCellGridComputeSides_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridComputeSides_StaticNew()
{
  return vtkCellGridComputeSides::New();
}

PyObject *PyvtkCellGridComputeSides_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridComputeSides_Type, PyvtkCellGridComputeSides_Methods,
    "vtkCellGridComputeSides",
 &PyvtkCellGridComputeSides_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridComputeSides_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridComputeSides(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridComputeSides_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridComputeSides", o) != 0)
  {
    Py_DECREF(o);
  }

}

