// python wrapper for vtkPeriodicTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkPeriodicTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPeriodicTable(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPeriodicTable_ClassNew(); }


static PyObject *
PyvtkPeriodicTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPeriodicTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPeriodicTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPeriodicTable *tempr = vtkPeriodicTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPeriodicTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPeriodicTable::NewInstance());

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
PyvtkPeriodicTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPeriodicTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPeriodicTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetBlueObeliskData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueObeliskData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlueObeliskData *tempr = (ap.IsBound() ?
      op->GetBlueObeliskData() :
      op->vtkPeriodicTable::GetBlueObeliskData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkPeriodicTable::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSymbol(temp0) :
      op->vtkPeriodicTable::GetSymbol(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetElementName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementName(temp0) :
      op->vtkPeriodicTable::GetElementName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetAtomicNumber(temp0) :
      op->vtkPeriodicTable::GetAtomicNumber(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCovalentRadius(temp0) :
      op->vtkPeriodicTable::GetCovalentRadius(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVDWRadius(temp0) :
      op->vtkPeriodicTable::GetVDWRadius(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetMaxVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxVDWRadius() :
      op->vtkPeriodicTable::GetMaxVDWRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultLUT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultLUT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->GetDefaultLUT(temp0);
    }
    else
    {
      op->vtkPeriodicTable::GetDefaultLUT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  const size_t size1 = 3;
  float temp1[3];
  float save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetDefaultRGBTuple(temp0, temp1);
    }
    else
    {
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0, temp1);
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

static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3f tempr = (ap.IsBound() ?
      op->GetDefaultRGBTuple(temp0) :
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3f");
    }
  }

  return result;
}

static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s1(self, args);
    case 1:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDefaultRGBTuple");
  return nullptr;
}

static PyMethodDef PyvtkPeriodicTable_Methods[] = {
  {"IsTypeOf", PyvtkPeriodicTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPeriodicTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPeriodicTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPeriodicTable\nC++: static vtkPeriodicTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPeriodicTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPeriodicTable\nC++: vtkPeriodicTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPeriodicTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPeriodicTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBlueObeliskData", PyvtkPeriodicTable_GetBlueObeliskData, METH_VARARGS,
   "GetBlueObeliskData(self) -> vtkBlueObeliskData\nC++: virtual vtkBlueObeliskData *GetBlueObeliskData()\n\nAccess the static vtkBlueObeliskData object for raw access to\nBODR data.\n"},
  {"GetNumberOfElements", PyvtkPeriodicTable_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self) -> int\nC++: unsigned short GetNumberOfElements()\n\nReturns the number of elements in the periodic table.\n"},
  {"GetSymbol", PyvtkPeriodicTable_GetSymbol, METH_VARARGS,
   "GetSymbol(self, atomicNum:int) -> str\nC++: const char *GetSymbol(unsigned short atomicNum)\n\nGiven an atomic number, returns the symbol associated with the\nelement\n"},
  {"GetElementName", PyvtkPeriodicTable_GetElementName, METH_VARARGS,
   "GetElementName(self, atomicNum:int) -> str\nC++: const char *GetElementName(unsigned short atomicNum)\n\nGiven an atomic number, returns the name of the element\n"},
  {"GetAtomicNumber", PyvtkPeriodicTable_GetAtomicNumber, METH_VARARGS,
   "GetAtomicNumber(self, str:str) -> int\nC++: unsigned short GetAtomicNumber(const vtkStdString &str)\n\nGiven a case-insensitive string that contains the symbol or name\nof an element, return the corresponding atomic number.\n"},
  {"GetCovalentRadius", PyvtkPeriodicTable_GetCovalentRadius, METH_VARARGS,
   "GetCovalentRadius(self, atomicNum:int) -> float\nC++: float GetCovalentRadius(unsigned short atomicNum)\n\nGiven an atomic number, return the covalent radius of the atom\n"},
  {"GetVDWRadius", PyvtkPeriodicTable_GetVDWRadius, METH_VARARGS,
   "GetVDWRadius(self, atomicNum:int) -> float\nC++: float GetVDWRadius(unsigned short atomicNum)\n\nGiven an atomic number, returns the van der Waals radius of the\natom\n"},
  {"GetMaxVDWRadius", PyvtkPeriodicTable_GetMaxVDWRadius, METH_VARARGS,
   "GetMaxVDWRadius(self) -> float\nC++: float GetMaxVDWRadius()\n\nGiven an atomic number, returns the van der Waals radius of the\natom\n"},
  {"GetDefaultLUT", PyvtkPeriodicTable_GetDefaultLUT, METH_VARARGS,
   "GetDefaultLUT(self, __a:vtkLookupTable) -> None\nC++: void GetDefaultLUT(vtkLookupTable *)\n\nFill the given vtkLookupTable to map atomic numbers to the\nfamiliar RGB tuples provided by the Blue Obelisk Data Repository\n"},
  {"GetDefaultRGBTuple", PyvtkPeriodicTable_GetDefaultRGBTuple, METH_VARARGS,
   "GetDefaultRGBTuple(self, atomicNum:int, rgb:[float, float, float])\n     -> None\nC++: void GetDefaultRGBTuple(unsigned short atomicNum,\n    float rgb[3])\nGetDefaultRGBTuple(self, atomicNum:int) -> vtkColor3f\nC++: vtkColor3f GetDefaultRGBTuple(unsigned short atomicNum)\n\nGiven an atomic number, return the familiar RGB tuple provided by\nthe Blue Obelisk Data Repository\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPeriodicTable_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("blue_obelisk_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPeriodicTable_GetBlueObeliskData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBlueObeliskData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("max_vdw_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPeriodicTable_GetMaxVDWRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMaxVDWRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_elements"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPeriodicTable_GetNumberOfElements(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfElements\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPeriodicTable_Doc =
  "vtkPeriodicTable - Access to information about the elements.\n\n"
  "Superclass: vtkObject\n\n"
  "Sourced from the Blue Obelisk Data Repository\n\n"
  "@sa\n"
  "vtkBlueObeliskData vtkBlueObeliskDataParser\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPeriodicTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkPeriodicTable", // tp_name
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
  PyvtkPeriodicTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPeriodicTable_StaticNew()
{
  return vtkPeriodicTable::New();
}

PyObject *PyvtkPeriodicTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPeriodicTable_Type, PyvtkPeriodicTable_Methods,
    "vtkPeriodicTable",
 &PyvtkPeriodicTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPeriodicTable_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPeriodicTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPeriodicTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPeriodicTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

