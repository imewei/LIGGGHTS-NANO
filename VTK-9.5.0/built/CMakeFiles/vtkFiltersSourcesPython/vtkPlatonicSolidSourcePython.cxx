// python wrapper for vtkPlatonicSolidSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPlatonicSolidSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPlatonicSolidSource(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPlatonicSolidSource_ClassNew(); }


static PyObject *
PyvtkPlatonicSolidSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlatonicSolidSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlatonicSolidSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlatonicSolidSource *tempr = vtkPlatonicSolidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlatonicSolidSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlatonicSolidSource::NewInstance());

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
PyvtkPlatonicSolidSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlatonicSolidSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlatonicSolidSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSolidType(temp0);
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMinValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMaxValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidType() :
      op->vtkPlatonicSolidSource::GetSolidType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToTetrahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToTetrahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToTetrahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToCube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToCube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToCube();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToCube();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToOctahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToOctahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToOctahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToIcosahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToIcosahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToIcosahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToDodecahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToDodecahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToDodecahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkPlatonicSolidSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPlatonicSolidSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlatonicSolidSource_Methods[] = {
  {"IsTypeOf", PyvtkPlatonicSolidSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlatonicSolidSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlatonicSolidSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlatonicSolidSource\nC++: static vtkPlatonicSolidSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlatonicSolidSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlatonicSolidSource\nC++: vtkPlatonicSolidSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlatonicSolidSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlatonicSolidSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSolidType", PyvtkPlatonicSolidSource_SetSolidType, METH_VARARGS,
   "SetSolidType(self, _arg:int) -> None\nC++: virtual void SetSolidType(int _arg)\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"GetSolidTypeMinValue", PyvtkPlatonicSolidSource_GetSolidTypeMinValue, METH_VARARGS,
   "GetSolidTypeMinValue(self) -> int\nC++: virtual int GetSolidTypeMinValue()\n\n"},
  {"GetSolidTypeMaxValue", PyvtkPlatonicSolidSource_GetSolidTypeMaxValue, METH_VARARGS,
   "GetSolidTypeMaxValue(self) -> int\nC++: virtual int GetSolidTypeMaxValue()\n\n"},
  {"GetSolidType", PyvtkPlatonicSolidSource_GetSolidType, METH_VARARGS,
   "GetSolidType(self) -> int\nC++: virtual int GetSolidType()\n\n"},
  {"SetSolidTypeToTetrahedron", PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron, METH_VARARGS,
   "SetSolidTypeToTetrahedron(self) -> None\nC++: void SetSolidTypeToTetrahedron()\n\n"},
  {"SetSolidTypeToCube", PyvtkPlatonicSolidSource_SetSolidTypeToCube, METH_VARARGS,
   "SetSolidTypeToCube(self) -> None\nC++: void SetSolidTypeToCube()\n\n"},
  {"SetSolidTypeToOctahedron", PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron, METH_VARARGS,
   "SetSolidTypeToOctahedron(self) -> None\nC++: void SetSolidTypeToOctahedron()\n\n"},
  {"SetSolidTypeToIcosahedron", PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron, METH_VARARGS,
   "SetSolidTypeToIcosahedron(self) -> None\nC++: void SetSolidTypeToIcosahedron()\n\n"},
  {"SetSolidTypeToDodecahedron", PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron, METH_VARARGS,
   "SetSolidTypeToDodecahedron(self) -> None\nC++: void SetSolidTypeToDodecahedron()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPlatonicSolidSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkPlatonicSolidSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPlatonicSolidSource_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("solid_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlatonicSolidSource_GetSolidType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlatonicSolidSource_SetSolidType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlatonicSolidSource_SetSolidType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSolidType/SetSolidType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_points_precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlatonicSolidSource_GetOutputPointsPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlatonicSolidSource_SetOutputPointsPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlatonicSolidSource_SetOutputPointsPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputPointsPrecision/SetOutputPointsPrecision\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPlatonicSolidSource_Doc =
  "vtkPlatonicSolidSource - produce polygonal Platonic solids\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPlatonicSolidSource can generate each of the five Platonic solids:\n"
  "tetrahedron, cube, octahedron, icosahedron, and dodecahedron. Each of\n"
  "the solids is placed inside a sphere centered at the origin with\n"
  "radius 1.0. To use this class, simply specify the solid to create.\n"
  "Note that this source object creates cell scalars that are (integral\n"
  "value) face numbers.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlatonicSolidSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkPlatonicSolidSource", // tp_name
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
  PyvtkPlatonicSolidSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlatonicSolidSource_StaticNew()
{
  return vtkPlatonicSolidSource::New();
}

PyObject *PyvtkPlatonicSolidSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlatonicSolidSource_Type, PyvtkPlatonicSolidSource_Methods,
    "vtkPlatonicSolidSource",
 &PyvtkPlatonicSolidSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPlatonicSolidSource_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlatonicSolidSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlatonicSolidSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlatonicSolidSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_SOLID_TETRAHEDRON", 0 },
        { "VTK_SOLID_CUBE", 1 },
        { "VTK_SOLID_OCTAHEDRON", 2 },
        { "VTK_SOLID_ICOSAHEDRON", 3 },
        { "VTK_SOLID_DODECAHEDRON", 4 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

