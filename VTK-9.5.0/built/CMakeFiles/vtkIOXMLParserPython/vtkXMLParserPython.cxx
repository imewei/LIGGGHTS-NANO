// python wrapper for vtkXMLParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLParser.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkXMLParser(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkXMLParser_ClassNew(); }


static PyObject *
PyvtkXMLParser_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLParser *tempr = vtkXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLParser::NewInstance());

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
PyvtkXMLParser_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLParser::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLParser::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_TellG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TellG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->TellG() :
      op->vtkXMLParser::TellG());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SeekG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeekG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SeekG(temp0);
    }
    else
    {
      op->vtkXMLParser::SeekG(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_Parse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse() :
      op->vtkXMLParser::Parse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0) :
      op->vtkXMLParser::Parse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0, temp1) :
      op->vtkXMLParser::Parse(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLParser_Parse_s1(self, args);
    case 1:
      return PyvtkXMLParser_Parse_s2(self, args);
    case 2:
      return PyvtkXMLParser_Parse_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return nullptr;
}


static PyObject *
PyvtkXMLParser_InitializeParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InitializeParser() :
      op->vtkXMLParser::InitializeParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_ParseChunk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseChunk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ParseChunk(temp0, temp1) :
      op->vtkXMLParser::ParseChunk(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_CleanupParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CleanupParser() :
      op->vtkXMLParser::CleanupParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkXMLParser::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLParser::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreCharacterData(temp0);
    }
    else
    {
      op->vtkXMLParser::SetIgnoreCharacterData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreCharacterData() :
      op->vtkXMLParser::GetIgnoreCharacterData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEncoding(temp0);
    }
    else
    {
      op->vtkXMLParser::SetEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEncoding() :
      op->vtkXMLParser::GetEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_hasLargeOffsets(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "hasLargeOffsets");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkXMLParser::hasLargeOffsets();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLParser_Methods[] = {
  {"IsTypeOf", PyvtkXMLParser_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLParser_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLParser_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLParser\nC++: static vtkXMLParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLParser_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLParser\nC++: vtkXMLParser *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLParser_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLParser_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TellG", PyvtkXMLParser_TellG, METH_VARARGS,
   "TellG(self) -> int\nC++: vtkTypeInt64 TellG()\n\nUsed by subclasses and their supporting classes.  These methods\nwrap around the tellg and seekg methods of the input stream to\nwork-around stream bugs on various platforms.\n"},
  {"SeekG", PyvtkXMLParser_SeekG, METH_VARARGS,
   "SeekG(self, position:int) -> None\nC++: void SeekG(vtkTypeInt64 position)\n\n"},
  {"Parse", PyvtkXMLParser_Parse, METH_VARARGS,
   "Parse(self) -> int\nC++: virtual int Parse()\nParse(self, inputString:str) -> int\nC++: virtual int Parse(const char *inputString)\nParse(self, inputString:str, length:int) -> int\nC++: virtual int Parse(const char *inputString,\n    unsigned int length)\n\nParse the XML input.\n"},
  {"InitializeParser", PyvtkXMLParser_InitializeParser, METH_VARARGS,
   "InitializeParser(self) -> int\nC++: virtual int InitializeParser()\n\nWhen parsing fragments of XML, or when streaming XML, use the\nfollowing three methods:\n- InitializeParser() initializes the parser but does not perform\n  any actual parsing.\n- ParseChunk() parses a fragment of XML; this has to match to\n  what was already parsed.\n- CleanupParser() finishes parsing; if there were errors, it will\nreport them.\n"},
  {"ParseChunk", PyvtkXMLParser_ParseChunk, METH_VARARGS,
   "ParseChunk(self, inputString:str, length:int) -> int\nC++: virtual int ParseChunk(const char *inputString,\n    unsigned int length)\n\n"},
  {"CleanupParser", PyvtkXMLParser_CleanupParser, METH_VARARGS,
   "CleanupParser(self) -> int\nC++: virtual int CleanupParser()\n\n"},
  {"SetFileName", PyvtkXMLParser_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet and get file name.\n"},
  {"GetFileName", PyvtkXMLParser_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetIgnoreCharacterData", PyvtkXMLParser_SetIgnoreCharacterData, METH_VARARGS,
   "SetIgnoreCharacterData(self, _arg:int) -> None\nC++: virtual void SetIgnoreCharacterData(vtkTypeBool _arg)\n\nIf this is off (the default), CharacterDataHandler will be called\nto process text within XML Elements. If this is on, the text will\nbe ignored.\n"},
  {"GetIgnoreCharacterData", PyvtkXMLParser_GetIgnoreCharacterData, METH_VARARGS,
   "GetIgnoreCharacterData(self) -> int\nC++: virtual vtkTypeBool GetIgnoreCharacterData()\n\n"},
  {"SetEncoding", PyvtkXMLParser_SetEncoding, METH_VARARGS,
   "SetEncoding(self, _arg:str) -> None\nC++: virtual void SetEncoding(const char *_arg)\n\nSet and get the encoding the parser should expect (nullptr\ndefaults to Expat's own default encoder, i.e UTF-8). This should\nbe set before parsing (i.e. a call to Parse()) or even\ninitializing the parser (i.e. a call to InitializeParser())\n"},
  {"GetEncoding", PyvtkXMLParser_GetEncoding, METH_VARARGS,
   "GetEncoding(self) -> str\nC++: virtual char *GetEncoding()\n\n"},
  {"hasLargeOffsets", PyvtkXMLParser_hasLargeOffsets, METH_VARARGS,
   "hasLargeOffsets() -> bool\nC++: static bool hasLargeOffsets()\n\nThe Expat library can only handle binary files > 2Gb if either\nsize_of(long) == 8 or the \"large size\" feature is present\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkXMLParser_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLParser_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkXMLParser_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkXMLParser_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("ignore_character_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLParser_GetIgnoreCharacterData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkXMLParser_SetIgnoreCharacterData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkXMLParser_SetIgnoreCharacterData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIgnoreCharacterData/SetIgnoreCharacterData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("encoding"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkXMLParser_GetEncoding(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkXMLParser_SetEncoding(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkXMLParser_SetEncoding(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEncoding/SetEncoding\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkXMLParser_Doc =
  "vtkXMLParser - Parse XML to handle element tags and attributes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLParser reads a stream and parses XML element tags and\n"
  "corresponding attributes.  Each element begin tag and its attributes\n"
  "are sent to the StartElement method.  Each element end tag is sent to\n"
  "the EndElement method.  Subclasses should replace these methods to\n"
  "actually use the tags.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXMLParser.vtkXMLParser", // tp_name
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
  PyvtkXMLParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLParser_StaticNew()
{
  return vtkXMLParser::New();
}

PyObject *PyvtkXMLParser_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLParser_Type, PyvtkXMLParser_Methods,
    "vtkXMLParser",
 &PyvtkXMLParser_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkXMLParser_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

