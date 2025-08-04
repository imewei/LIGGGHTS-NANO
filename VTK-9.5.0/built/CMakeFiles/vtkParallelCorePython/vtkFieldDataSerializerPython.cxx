// python wrapper for vtkFieldDataSerializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFieldDataSerializer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFieldDataSerializer(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFieldDataSerializer_ClassNew(); }


static PyObject *
PyvtkFieldDataSerializer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldDataSerializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldDataSerializer *tempr = vtkFieldDataSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldDataSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataSerializer::NewInstance());

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
PyvtkFieldDataSerializer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFieldDataSerializer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFieldDataSerializer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_SerializeMetaData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeMetaData");

  vtkFieldData *temp0 = nullptr;
  vtkMultiProcessStream *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetSpecialObject(temp1, "vtkMultiProcessStream"))
  {
    vtkFieldDataSerializer::SerializeMetaData(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_DeserializeMetaData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeserializeMetaData");

  vtkMultiProcessStream *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  vtkIntArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetVTKObject(temp1, "vtkStringArray") &&
      ap.GetVTKObject(temp2, "vtkIntArray") &&
      ap.GetVTKObject(temp3, "vtkIntArray"))
  {
    vtkFieldDataSerializer::DeserializeMetaData(*temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_Serialize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Serialize");

  vtkFieldData *temp0 = nullptr;
  vtkMultiProcessStream *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetSpecialObject(temp1, "vtkMultiProcessStream"))
  {
    vtkFieldDataSerializer::Serialize(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_SerializeTuples(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeTuples");

  vtkIdList *temp0 = nullptr;
  vtkFieldData *temp1 = nullptr;
  vtkMultiProcessStream *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkFieldData") &&
      ap.GetSpecialObject(temp2, "vtkMultiProcessStream"))
  {
    vtkFieldDataSerializer::SerializeTuples(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_SerializeSubExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeSubExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkFieldData *temp2 = nullptr;
  vtkMultiProcessStream *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkFieldData") &&
      ap.GetSpecialObject(temp3, "vtkMultiProcessStream"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkFieldDataSerializer::SerializeSubExtent(temp0, temp1, temp2, *temp3);

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


static PyObject *
PyvtkFieldDataSerializer_DeSerializeToSubExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeSerializeToSubExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkFieldData *temp2 = nullptr;
  vtkMultiProcessStream *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkFieldData") &&
      ap.GetSpecialObject(temp3, "vtkMultiProcessStream"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkFieldDataSerializer::DeSerializeToSubExtent(temp0, temp1, temp2, *temp3);

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


static PyObject *
PyvtkFieldDataSerializer_Deserialize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Deserialize");

  vtkMultiProcessStream *temp0 = nullptr;
  vtkFieldData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
  {
    vtkFieldDataSerializer::Deserialize(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldDataSerializer_Methods[] = {
  {"IsTypeOf", PyvtkFieldDataSerializer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldDataSerializer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldDataSerializer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFieldDataSerializer\nC++: static vtkFieldDataSerializer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldDataSerializer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFieldDataSerializer\nC++: vtkFieldDataSerializer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFieldDataSerializer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFieldDataSerializer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SerializeMetaData", PyvtkFieldDataSerializer_SerializeMetaData, METH_VARARGS,
   "SerializeMetaData(fieldData:vtkFieldData,\n    bytestream:vtkMultiProcessStream) -> None\nC++: static void SerializeMetaData(vtkFieldData *fieldData,\n    vtkMultiProcessStream &bytestream)\n\nSerializes the metadata of the given field data instance, i.e.,\nthe number of arrays, the name of each array and their\ndimensions.\n"},
  {"DeserializeMetaData", PyvtkFieldDataSerializer_DeserializeMetaData, METH_VARARGS,
   "DeserializeMetaData(bytestream:vtkMultiProcessStream,\n    names:vtkStringArray, datatypes:vtkIntArray,\n    dimensions:vtkIntArray) -> None\nC++: static void DeserializeMetaData(\n    vtkMultiProcessStream &bytestream, vtkStringArray *names,\n    vtkIntArray *datatypes, vtkIntArray *dimensions)\n\nGiven the serialized field metadata in a bytestream, this method\nextracts the name, datatype and dimensions of each array. The\nmetadata is deserialized on user-supplied, pre-allocated data\nstructures. (1) names -- an array of strings wherein, each\nelement, names[i], corresponds to the name of array i. (2)\ndatatypes -- an array of ints where each element corresponds to\nthe actual primitive type of each array, e.g.,VTK_DOUBLE,VTK_INT,\netc. (3) dimensions -- a 2-component array of integers where the\nfirst component corresponds to the number of tuples of and the\nsecond component corresponds to the number components of array i.\n"},
  {"Serialize", PyvtkFieldDataSerializer_Serialize, METH_VARARGS,
   "Serialize(fieldData:vtkFieldData,\n    bytestream:vtkMultiProcessStream) -> None\nC++: static void Serialize(vtkFieldData *fieldData,\n    vtkMultiProcessStream &bytestream)\n\nSerializes the given field data (all the field data) into a\nbytestream.\n"},
  {"SerializeTuples", PyvtkFieldDataSerializer_SerializeTuples, METH_VARARGS,
   "SerializeTuples(tupleIds:vtkIdList, fieldData:vtkFieldData,\n    bytestream:vtkMultiProcessStream) -> None\nC++: static void SerializeTuples(vtkIdList *tupleIds,\n    vtkFieldData *fieldData, vtkMultiProcessStream &bytestream)\n\nSerializes the selected tuples from the field data in a\nbyte-stream.\n"},
  {"SerializeSubExtent", PyvtkFieldDataSerializer_SerializeSubExtent, METH_VARARGS,
   "SerializeSubExtent(subext:[int, int, int, int, int, int],\n    gridExtent:[int, int, int, int, int, int],\n    fieldData:vtkFieldData, bytestream:vtkMultiProcessStream)\n    -> None\nC++: static void SerializeSubExtent(int subext[6],\n    int gridExtent[6], vtkFieldData *fieldData,\n    vtkMultiProcessStream &bytestream)\n\nSerializes the given sub-extent of field data of a structured\ngrid in a byte-stream. The field data can be either cell-centered\nor node-centered depending on what subext and gridExtent actually\nrepresents.\n"},
  {"DeSerializeToSubExtent", PyvtkFieldDataSerializer_DeSerializeToSubExtent, METH_VARARGS,
   "DeSerializeToSubExtent(subext:[int, int, int, int, int, int],\n    gridExtent:[int, int, int, int, int, int],\n    fieldData:vtkFieldData, bytestream:vtkMultiProcessStream)\n    -> None\nC++: static void DeSerializeToSubExtent(int subext[6],\n    int gridExtent[6], vtkFieldData *fieldData,\n    vtkMultiProcessStream &bytestream)\n\nDeserializes the field data from a bytestream to a the given\nsub-extent. The field data can be either cell-centered or\nnode-centered depending on what subext and gridExtent actually\nrepresent.\n"},
  {"Deserialize", PyvtkFieldDataSerializer_Deserialize, METH_VARARGS,
   "Deserialize(bytestream:vtkMultiProcessStream,\n    fieldData:vtkFieldData) -> None\nC++: static void Deserialize(vtkMultiProcessStream &bytestream,\n    vtkFieldData *fieldData)\n\nDeserializes the field data from a bytestream.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFieldDataSerializer_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFieldDataSerializer_Doc =
  "vtkFieldDataSerializer -  A concrete instance of vtkObject which\nprovides functionality for\n serializing and de-serializing field data, primarily used for the\npurpose\n of preparing the data for transfer over MPI or other communication\n mechanism.\n\n"
  "Superclass: vtkObject\n\n"
  "@sa\n"
  "vtkFieldData vtkPointData vtkCellData vtkMultiProcessStream\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFieldDataSerializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkFieldDataSerializer", // tp_name
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
  PyvtkFieldDataSerializer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldDataSerializer_StaticNew()
{
  return vtkFieldDataSerializer::New();
}

PyObject *PyvtkFieldDataSerializer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFieldDataSerializer_Type, PyvtkFieldDataSerializer_Methods,
    "vtkFieldDataSerializer",
 &PyvtkFieldDataSerializer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFieldDataSerializer_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldDataSerializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldDataSerializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldDataSerializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

