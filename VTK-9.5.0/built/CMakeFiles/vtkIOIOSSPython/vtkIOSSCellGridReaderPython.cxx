// python wrapper for vtkIOSSCellGridReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIOSSCellGridReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkIOSSCellGridReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkIOSSCellGridReader_ClassNew(); }

#ifndef DECLARED_PyvtkIOSSReader_ClassNew
extern "C" { PyObject *PyvtkIOSSReader_ClassNew(); }
#define DECLARED_PyvtkIOSSReader_ClassNew
#endif

static PyObject *
PyvtkIOSSCellGridReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIOSSCellGridReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIOSSCellGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIOSSCellGridReader *tempr = vtkIOSSCellGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIOSSCellGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIOSSCellGridReader::NewInstance());

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
PyvtkIOSSCellGridReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIOSSCellGridReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIOSSCellGridReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkIOSSCellGridReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMesh(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSCellGridReader::ReadMesh(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSCellGridReader::ReadPoints(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSCellGridReader_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSCellGridReader *op = static_cast<vtkIOSSCellGridReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadArrays(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSCellGridReader::ReadArrays(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIOSSCellGridReader_Methods[] = {
  {"IsTypeOf", PyvtkIOSSCellGridReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIOSSCellGridReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIOSSCellGridReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIOSSCellGridReader\nC++: static vtkIOSSCellGridReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIOSSCellGridReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIOSSCellGridReader\nC++: vtkIOSSCellGridReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIOSSCellGridReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIOSSCellGridReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReadMetaData", PyvtkIOSSCellGridReader_ReadMetaData, METH_VARARGS,
   "ReadMetaData(self, metadata:vtkInformation) -> int\nC++: int ReadMetaData(vtkInformation *metadata) override;\n\nImplementation for vtkReaderAlgorithm API\n"},
  {"ReadMesh", PyvtkIOSSCellGridReader_ReadMesh, METH_VARARGS,
   "ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int,\n    output:vtkDataObject) -> int\nC++: int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead the mesh (connectivity) for a given set of data\npartitioning, number of ghost levels and time step (index). The\nreader populates the data object passed in as the last argument.\nIt is OK to read more than the mesh (points, arrays etc.).\nHowever, this may interfere with any caching implemented by the\nexecutive (i.e. cause more reads).\n"},
  {"ReadPoints", PyvtkIOSSCellGridReader_ReadPoints, METH_VARARGS,
   "ReadPoints(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadPoints(int, int, int, int, vtkDataObject *) override;\n\nRead the points. The reader populates the input data object. This\nis called after ReadMesh() so the data object should already\ncontain the mesh.\n"},
  {"ReadArrays", PyvtkIOSSCellGridReader_ReadArrays, METH_VARARGS,
   "ReadArrays(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadArrays(int, int, int, int, vtkDataObject *) override;\n\nRead all the arrays (point, cell, field etc.). This is called\nafter ReadPoints() so the data object should already contain the\nmesh and points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkIOSSCellGridReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkIOSSCellGridReader_Doc =
  "vtkIOSSCellGridReader - Reader for IOSS (Sierra IO System) that\nproduces cell-grid data.\n\n"
  "Superclass: vtkIOSSReader\n\n"
  "This reader is a subclass of vtkIOSSReader that produces vtkCellGrid\n"
  "objects instead of vtkUnstructuredGrid objects inside each partition\n"
  "of its output partitioned-dataset collection.\n\n"
  "This reader ignores some of its base-class settings: +\n"
  "RemoveUnusedPoints + MergeExodusEntityBlocks\n\n"
  "@sa\n"
  "vtkIOSSReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIOSSCellGridReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOIOSS.vtkIOSSCellGridReader", // tp_name
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
  PyvtkIOSSCellGridReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIOSSCellGridReader_StaticNew()
{
  return vtkIOSSCellGridReader::New();
}

PyObject *PyvtkIOSSCellGridReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIOSSCellGridReader_Type, PyvtkIOSSCellGridReader_Methods,
    "vtkIOSSCellGridReader",
 &PyvtkIOSSCellGridReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkIOSSReader_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkIOSSCellGridReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIOSSCellGridReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIOSSCellGridReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIOSSCellGridReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

