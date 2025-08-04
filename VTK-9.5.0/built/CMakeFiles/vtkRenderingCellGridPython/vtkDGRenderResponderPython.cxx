// python wrapper for vtkDGRenderResponder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGRenderResponder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGRenderResponder(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGRenderResponder_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCellGrid.vtkDGRenderResponder.ScalarVisualizationOverrideType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkDGRenderResponder_ScalarVisualizationOverrideType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDGRenderResponder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGRenderResponder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGRenderResponder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGRenderResponder *tempr = vtkDGRenderResponder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGRenderResponder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGRenderResponder::NewInstance());

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
PyvtkDGRenderResponder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGRenderResponder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGRenderResponder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  vtkCellGridRenderRequest *temp0 = nullptr;
  vtkCellMetadata *temp1 = nullptr;
  vtkCellGridResponders *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCellGridRenderRequest") &&
      ap.GetVTKObject(temp1, "vtkCellMetadata") &&
      ap.GetVTKObject(temp2, "vtkCellGridResponders"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0, temp1, temp2) :
      op->vtkDGRenderResponder::Query(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_AddMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddMod(temp0);
    }
    else
    {
      op->vtkDGRenderResponder::AddMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_AddMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->AddMods(temp0);
    }
    else
    {
      op->vtkDGRenderResponder::AddMods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_RemoveMod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveMod(temp0);
    }
    else
    {
      op->vtkDGRenderResponder::RemoveMod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_RemoveAllMods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMods();
    }
    else
    {
      op->vtkDGRenderResponder::RemoveAllMods();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_ResetModsToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetModsToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGRenderResponder *op = static_cast<vtkDGRenderResponder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetModsToDefault();
    }
    else
    {
      op->vtkDGRenderResponder::ResetModsToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_SetScalarVisualizationOverrideType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarVisualizationOverrideType");

  typedef vtkDGRenderResponder::ScalarVisualizationOverrideType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGRenderResponder.ScalarVisualizationOverrideType"))
  {
    vtkDGRenderResponder::SetScalarVisualizationOverrideType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGRenderResponder_SetVisualizeTessellation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetVisualizeTessellation");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDGRenderResponder::SetVisualizeTessellation(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDGRenderResponder_Methods[] = {
  {"IsTypeOf", PyvtkDGRenderResponder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGRenderResponder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGRenderResponder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGRenderResponder\nC++: static vtkDGRenderResponder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGRenderResponder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGRenderResponder\nC++: vtkDGRenderResponder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGRenderResponder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGRenderResponder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Query", PyvtkDGRenderResponder_Query, METH_VARARGS,
   "Query(self, request:vtkCellGridRenderRequest,\n    metadata:vtkCellMetadata, caches:vtkCellGridResponders)\n    -> bool\nC++: bool Query(vtkCellGridRenderRequest *request,\n    vtkCellMetadata *metadata, vtkCellGridResponders *caches)\n    override;\n\n"},
  {"AddMod", PyvtkDGRenderResponder_AddMod, METH_VARARGS,
   "AddMod(self, className:str) -> None\nC++: void AddMod(const std::string &className)\n\n"},
  {"AddMods", PyvtkDGRenderResponder_AddMods, METH_VARARGS,
   "AddMods(self, classNames:(str, ...)) -> None\nC++: void AddMods(const std::vector<std::string> &classNames)\n\n"},
  {"RemoveMod", PyvtkDGRenderResponder_RemoveMod, METH_VARARGS,
   "RemoveMod(self, className:str) -> None\nC++: void RemoveMod(const std::string &className)\n\n"},
  {"RemoveAllMods", PyvtkDGRenderResponder_RemoveAllMods, METH_VARARGS,
   "RemoveAllMods(self) -> None\nC++: void RemoveAllMods()\n\n"},
  {"ResetModsToDefault", PyvtkDGRenderResponder_ResetModsToDefault, METH_VARARGS,
   "ResetModsToDefault(self) -> None\nC++: void ResetModsToDefault()\n\nIf you removed all mods, call this to go back to default setting.\n"},
  {"SetScalarVisualizationOverrideType", PyvtkDGRenderResponder_SetScalarVisualizationOverrideType, METH_VARARGS,
   "SetScalarVisualizationOverrideType(\n    type:ScalarVisualizationOverrideType) -> None\nC++: static void SetScalarVisualizationOverrideType(\n    ScalarVisualizationOverrideType type)\n\n"},
  {"SetVisualizeTessellation", PyvtkDGRenderResponder_SetVisualizeTessellation, METH_VARARGS,
   "SetVisualizeTessellation(value:bool) -> None\nC++: static void SetVisualizeTessellation(bool value)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGRenderResponder_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("scalar_visualization_override_type"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDGRenderResponder_SetScalarVisualizationOverrideType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDGRenderResponder_SetScalarVisualizationOverrideType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetScalarVisualizationOverrideType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("visualize_tessellation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDGRenderResponder_SetVisualizeTessellation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDGRenderResponder_SetVisualizeTessellation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetVisualizeTessellation\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGRenderResponder_Doc =
  "vtkDGRenderResponder - Rendering simple DG cells (i.e., those with a\nfixed reference shape).\n\n"
  "Superclass: vtkCellGridResponder[vtkCellGridRenderRequest]\n\n"
  "This currently handles hexahedra, tetrahedra, quadrilaterals, and\n"
  "triangles.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGRenderResponder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCellGrid.vtkDGRenderResponder", // tp_name
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
  PyvtkDGRenderResponder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGRenderResponder_StaticNew()
{
  return vtkDGRenderResponder::New();
}

PyObject *PyvtkDGRenderResponder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGRenderResponder_Type, PyvtkDGRenderResponder_Methods,
    "vtkDGRenderResponder",
 &PyvtkDGRenderResponder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject(typeid(vtkCellGridResponder<vtkCellGridRenderRequest>).name());

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type);
  // members of vtkDGRenderResponder::ScalarVisualizationOverrideType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type.tp_dict = enumdict;

    typedef vtkDGRenderResponder::ScalarVisualizationOverrideType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[7] = {
      { "NONE", cxx_enum_type::NONE },
      { "R", cxx_enum_type::R },
      { "S", cxx_enum_type::S },
      { "T", cxx_enum_type::T },
      { "L2_NORM_R_S", cxx_enum_type::L2_NORM_R_S },
      { "L2_NORM_S_T", cxx_enum_type::L2_NORM_S_T },
      { "L2_NORM_T_R", cxx_enum_type::L2_NORM_T_R },
    };

    for (int c = 0; c < 7; c++)
    {
      enumval = PyvtkDGRenderResponder_ScalarVisualizationOverrideType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type, "vtkDGRenderResponder.ScalarVisualizationOverrideType");

  o = (PyObject *)&PyvtkDGRenderResponder_ScalarVisualizationOverrideType_Type;
  if (PyDict_SetItemString(d, "ScalarVisualizationOverrideType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGRenderResponder_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGRenderResponder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGRenderResponder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGRenderResponder", o) != 0)
  {
    Py_DECREF(o);
  }

}

