// python wrapper for vtkCellAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkCellAttribute.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellAttribute(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellAttribute_ClassNew(); }


static PyObject *
PyvtkCellAttribute_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellAttribute *tempr = vtkCellAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellAttribute::NewInstance());

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
PyvtkCellAttribute_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellAttribute::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellAttribute::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkCellAttribute::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkCellAttribute::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetId(temp0);
    }
    else
    {
      op->vtkCellAttribute::SetId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_GetSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetSpace() :
      op->vtkCellAttribute::GetSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkCellAttribute::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStringToken *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkStringToken") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize(*temp0, *temp1, temp2) :
      op->vtkCellAttribute::Initialize(*temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkCellAttribute_GetArrayForCellTypeAndRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayForCellTypeAndRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStringToken *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkStringToken"))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArrayForCellTypeAndRole(*temp0, *temp1) :
      op->vtkCellAttribute::GetArrayForCellTypeAndRole(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkCellAttribute_GetColormap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColormap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetColormap() :
      op->vtkCellAttribute::GetColormap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_SetColormap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColormap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetColormap(temp0) :
      op->vtkCellAttribute::SetColormap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellAttribute *op = static_cast<vtkCellAttribute *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0, temp1);
    }
    else
    {
      op->vtkCellAttribute::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_DecodeSpace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecodeSpace");

  std::string temp0;
  std::string temp1;
  double temp2;
  int temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkCellAttribute::DecodeSpace(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellAttribute_EncodeSpace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodeSpace");

  std::string temp0;
  unsigned int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = vtkCellAttribute::EncodeSpace(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellAttribute_Methods[] = {
  {"IsTypeOf", PyvtkCellAttribute_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellAttribute_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellAttribute_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellAttribute\nC++: static vtkCellAttribute *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellAttribute_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellAttribute\nC++: vtkCellAttribute *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellAttribute_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellAttribute_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkCellAttribute_GetName, METH_VARARGS,
   "GetName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetName()\n\nReturn the (user-presentable) name of this attribute.\n"},
  {"GetId", PyvtkCellAttribute_GetId, METH_VARARGS,
   "GetId(self) -> int\nC++: virtual int GetId()\n\nReturn a (cell-grid-assigned) integer identifier for this\nattribute.\n\nDo not call SetId() unless you represent a vtkCellGrid taking\nownership of this attribute instance.\n"},
  {"SetId", PyvtkCellAttribute_SetId, METH_VARARGS,
   "SetId(self, _arg:int) -> None\nC++: virtual void SetId(int _arg)\n\n"},
  {"GetSpace", PyvtkCellAttribute_GetSpace, METH_VARARGS,
   "GetSpace(self) -> vtkStringToken\nC++: virtual vtkStringToken GetSpace()\n\nReturn a token identifying the space containing all field values.\n\nCurrently, this is just a free-form string but in the future we\nmay adopt a more rigorous standard.\n\nSome suggested values + \"\342\204\235\302\271\" \342\200\223 single (scalar) values over\nthe real numbers. + \"\342\204\235\302\271+\" \342\200\223 single (scalar) values over the\nnon-negative real numbers. + \"\342\204\235\302\262\" \342\200\223 2-d vector values over\nthe real numbers. + \"\342\204\235\302\263\" \342\200\223 3-d vector values over the real\nnumbers. + \"\360\235\225\212\302\263\" \342\200\223 points inside a unit 3-dimensional ball.\n+ \"S\302\262\" \342\200\223 points on the surface of a unit 3-dimensional sphere.\n+ \"SO(3)\" \342\200\223 rotation matrices. + \"SU(2)\" \342\200\223 special unitary\ngroup (homeomorphic to SO(3)).\n\nNote that the space might imply the number of components but it\nalso specifies how users should interpret operations such as\naddition and/or multipliciation, especially in the case of\ntransforms applied to the domain.\n\nIf you wish to encode/decode the exponents for a space like\n\342\204\235\302\263, see vtkCellAttribute::EncodeExponent/DecodeExponent().\n"},
  {"GetNumberOfComponents", PyvtkCellAttribute_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual int GetNumberOfComponents()\n\nReturn the number of components this function provides at each\npoint in space.\n\nThis should be consistent with the value returned by GetSpace().\n"},
  {"Initialize", PyvtkCellAttribute_Initialize, METH_VARARGS,
   "Initialize(self, name:vtkStringToken, space:vtkStringToken,\n    numberOfComponents:int) -> bool\nC++: virtual bool Initialize(vtkStringToken name,\n    vtkStringToken space, int numberOfComponents)\n\nInitialize an attribute.\n\nNever call this method after a cell-attribute has been inserted\ninto an unordered container as it will change the reported hash,\nwhich can cause crashes later.\n"},
  {"GetArrayForCellTypeAndRole", PyvtkCellAttribute_GetArrayForCellTypeAndRole, METH_VARARGS,
   "GetArrayForCellTypeAndRole(self, cellType:vtkStringToken,\n    arrayRole:vtkStringToken) -> vtkAbstractArray\nC++: vtkAbstractArray *GetArrayForCellTypeAndRole(\n    vtkStringToken cellType, vtkStringToken arrayRole)\n\nReturn an array for the given cell type and role.\n\nThis is a convenience for use in language bindings like Python.\n"},
  {"GetColormap", PyvtkCellAttribute_GetColormap, METH_VARARGS,
   "GetColormap(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetColormap()\n\nReturn a default colormap associated with the attribute.\n"},
  {"SetColormap", PyvtkCellAttribute_SetColormap, METH_VARARGS,
   "SetColormap(self, colormap:vtkScalarsToColors) -> bool\nC++: bool SetColormap(vtkScalarsToColors *colormap)\n\n"},
  {"ShallowCopy", PyvtkCellAttribute_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, other:vtkCellAttribute, copyArrays:bool=True)\n    -> None\nC++: virtual void ShallowCopy(vtkCellAttribute *other,\n    bool copyArrays=true)\n\nCopy data from an other attribute instance into this instance.\n\nThe colormap is copied by reference when shallow-copying and a\ncloned instance is created when deep-copying. The shallow-copy\nmethod provides an option to omit copying any arrays related to\nthe attribute, while the deep-copy method provides a map to look\nup replacements for arrays.\n\nNote that the list of array pointers is copied by reference (even\nwhen deep-copying a vtkCellAttribute) unless you provide\nDeepCopy() with a map of arrayRewrites pointers. The vtkCellGrid\nowns the arrays, not the vtkCellAttribute, so the when\ndeep-copying a vtkCellGrid, it will have a map of array copies it\nhas created. If any array is mentioned in AllArrays and is not\npresent in arrayRewrites, it is copied by reference.\n"},
  {"DecodeSpace", PyvtkCellAttribute_DecodeSpace, METH_VARARGS,
   "DecodeSpace(space:str, base:str, exp:float, halfspace:int,\n    quiet:bool=False) -> bool\nC++: static bool DecodeSpace(const std::string &space,\n    std::string &base, double &exp, int &halfspace,\n    bool quiet=false)\n\nGiven a space string (e.g., \342\204\235\302\263\342\201\273 or \342\204\232\302\271), decode the base\n(e.g., \342\204\235 resp. \342\204\232), exponent (e.g., 3 resp. 1), and halfspace\nindicator (-1 resp. 0).\n\nIf parsing fails, return false.\n\nThe halfspace indicator is either -1 (indicating only the\nnegative halfspace), +1 (indicating only the positive halfspace),\nor 0 (indicating no restriction).\n\nIf quiet is true, no parse errors will be printed. This is used\nto ensure tests with expected errors do not fail; you should\ngenerally pass false.\n"},
  {"EncodeSpace", PyvtkCellAttribute_EncodeSpace, METH_VARARGS,
   "EncodeSpace(base:str, __b:int, halfspace:int=0) -> str\nC++: static std::string EncodeSpace(const std::string &base,\n    unsigned int, int halfspace=0)\n\nReturn a space string given a description of it via base, exp,\nand halfspace.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellAttribute_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellAttribute_GetId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellAttribute_SetId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellAttribute_SetId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetId/SetId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellAttribute_GetName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("space"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellAttribute_GetSpace(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSpace\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("colormap"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellAttribute_GetColormap(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetColormap\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_components"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellAttribute_GetNumberOfComponents(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfComponents\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellAttribute_Doc =
  "vtkCellAttribute - A function defined over the physical domain of a\nvtkCellGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "This is a base class for attributes (functions) defined on the space\n"
  "discretized by a vtkCellGrid. A vtkCellAttribute class must handle\n"
  "cells of all types present in the grid.\n\n"
  "@sa vtkCellGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellAttribute", // tp_name
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
  PyvtkCellAttribute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellAttribute_StaticNew()
{
  return vtkCellAttribute::New();
}

PyObject *PyvtkCellAttribute_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellAttribute_Type, PyvtkCellAttribute_Methods,
    "vtkCellAttribute",
 &PyvtkCellAttribute_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellAttribute_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

}

