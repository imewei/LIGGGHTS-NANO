// python wrapper for vtkReebGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkReebGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkReebGraph(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkReebGraph_ClassNew(); }

#ifndef DECLARED_PyvtkMutableDirectedGraph_ClassNew
extern "C" { PyObject *PyvtkMutableDirectedGraph_ClassNew(); }
#define DECLARED_PyvtkMutableDirectedGraph_ClassNew
#endif

static PyObject *
PyvtkReebGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReebGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReebGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReebGraph *tempr = vtkReebGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReebGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReebGraph::NewInstance());

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
PyvtkReebGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkReebGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkReebGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkReebGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_Build_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkReebGraph_Build_Methods[] = {
  {"Build", PyvtkReebGraph_Build_s1, METH_VARARGS,
   "@VV *vtkPolyData *vtkDataArray"},
  {"Build", PyvtkReebGraph_Build_s2, METH_VARARGS,
   "@VV *vtkUnstructuredGrid *vtkDataArray"},
  {"Build", PyvtkReebGraph_Build_s3, METH_VARARGS,
   "@Vk *vtkPolyData"},
  {"Build", PyvtkReebGraph_Build_s4, METH_VARARGS,
   "@Vk *vtkUnstructuredGrid"},
  {"Build", PyvtkReebGraph_Build_s5, METH_VARARGS,
   "@Vz *vtkPolyData"},
  {"Build", PyvtkReebGraph_Build_s6, METH_VARARGS,
   "@Vz *vtkUnstructuredGrid"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkReebGraph_Build(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkReebGraph_Build_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Build");
  return nullptr;
}


static PyObject *
PyvtkReebGraph_StreamTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  long long temp0;
  double temp1;
  long long temp2;
  double temp3;
  long long temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    int tempr = (ap.IsBound() ?
      op->StreamTriangle(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkReebGraph::StreamTriangle(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_StreamTetrahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamTetrahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  long long temp0;
  double temp1;
  long long temp2;
  double temp3;
  long long temp4;
  double temp5;
  long long temp6;
  double temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    int tempr = (ap.IsBound() ?
      op->StreamTetrahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkReebGraph::StreamTetrahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_CloseStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseStream();
    }
    else
    {
      op->vtkReebGraph::CloseStream();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkReebGraph::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_Simplify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Simplify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  double temp0;
  vtkReebGraphSimplificationMetric *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkReebGraphSimplificationMetric"))
  {
    int tempr = (ap.IsBound() ?
      op->Simplify(temp0, temp1) :
      op->vtkReebGraph::Simplify(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraph_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkMutableDirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0);
    }
    else
    {
      op->vtkReebGraph::Set(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkReebGraph_Methods[] = {
  {"IsTypeOf", PyvtkReebGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReebGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReebGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkReebGraph\nC++: static vtkReebGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReebGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkReebGraph\nC++: vtkReebGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkReebGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkReebGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkReebGraph_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {"Build", PyvtkReebGraph_Build, METH_VARARGS,
   "Build(self, mesh:vtkPolyData, scalarField:vtkDataArray) -> int\nC++: int Build(vtkPolyData *mesh, vtkDataArray *scalarField)\nBuild(self, mesh:vtkUnstructuredGrid, scalarField:vtkDataArray)\n    -> int\nC++: int Build(vtkUnstructuredGrid *mesh,\n    vtkDataArray *scalarField)\nBuild(self, mesh:vtkPolyData, scalarFieldId:int) -> int\nC++: int Build(vtkPolyData *mesh, vtkIdType scalarFieldId)\nBuild(self, mesh:vtkUnstructuredGrid, scalarFieldId:int) -> int\nC++: int Build(vtkUnstructuredGrid *mesh, vtkIdType scalarFieldId)\nBuild(self, mesh:vtkPolyData, scalarFieldName:str) -> int\nC++: int Build(vtkPolyData *mesh, const char *scalarFieldName)\nBuild(self, mesh:vtkUnstructuredGrid, scalarFieldName:str) -> int\nC++: int Build(vtkUnstructuredGrid *mesh,\n    const char *scalarFieldName)\n\nBuild the Reeb graph of the field 'scalarField' defined on the\nsurface mesh 'mesh'.\n\n* Returned values:\n\n* vtkReebGraph::ERR_INCORRECT_FIELD: 'scalarField' does not have\n  as many\n* tuples as 'mesh' has vertices.\n\n* vtkReebGraph::ERR_NOT_A_SIMPLICIAL_MESH: the input mesh 'mesh'\n  is not a\n* simplicial mesh (for example, the surface mesh contains quads\n  instead of\n* triangles).\n"},
  {"StreamTriangle", PyvtkReebGraph_StreamTriangle, METH_VARARGS,
   "StreamTriangle(self, vertex0Id:int, scalar0:float, vertex1Id:int,\n    scalar1:float, vertex2Id:int, scalar2:float) -> int\nC++: int StreamTriangle(vtkIdType vertex0Id, double scalar0,\n    vtkIdType vertex1Id, double scalar1, vtkIdType vertex2Id,\n    double scalar2)\n\nStreaming Reeb graph computation. Add to the streaming\ncomputation the triangle of the vtkPolyData surface mesh\ndescribed by vertex0Id, scalar0 vertex1Id, scalar1 vertex2Id,\nscalar2\n\n* where vertexNId is the Id of the vertex in the vtkPolyData\n  structure\n* and scalarN is the corresponding scalar field value.\n\n* IMPORTANT: The stream _must_ be finalized with the\n  \"CloseStream\" call.\n"},
  {"StreamTetrahedron", PyvtkReebGraph_StreamTetrahedron, METH_VARARGS,
   "StreamTetrahedron(self, vertex0Id:int, scalar0:float,\n    vertex1Id:int, scalar1:float, vertex2Id:int, scalar2:float,\n    vertex3Id:int, scalar3:float) -> int\nC++: int StreamTetrahedron(vtkIdType vertex0Id, double scalar0,\n    vtkIdType vertex1Id, double scalar1, vtkIdType vertex2Id,\n    double scalar2, vtkIdType vertex3Id, double scalar3)\n\nStreaming Reeb graph computation. Add to the streaming\ncomputation the tetrahedra of the vtkUnstructuredGrid volume mesh\ndescribed by vertex0Id, scalar0 vertex1Id, scalar1 vertex2Id,\nscalar2 vertex3Id, scalar3\n\nwhere vertexNId is the Id of the vertex in the\nvtkUnstructuredGrid structure and scalarN is the corresponding\nscalar field value.\n\nIMPORTANT: The stream _must_ be finalized with the \"CloseStream\"\ncall.\n"},
  {"CloseStream", PyvtkReebGraph_CloseStream, METH_VARARGS,
   "CloseStream(self) -> None\nC++: void CloseStream()\n\nFinalize internal data structures, in the case of streaming\ncomputations (with StreamTriangle or StreamTetrahedron). After\nthis call, no more triangle or tetrahedron can be inserted via\nStreamTriangle or StreamTetrahedron. IMPORTANT: This method\n_must_ be called when the input stream is finished. If you need\nto get a snapshot of the Reeb graph during the streaming process\n(to parse or simplify it), do a DeepCopy followed by a\nCloseStream on the copy.\n"},
  {"DeepCopy", PyvtkReebGraph_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nImplements deep copy\n"},
  {"Simplify", PyvtkReebGraph_Simplify, METH_VARARGS,
   "Simplify(self, simplificationThreshold:float,\n    simplificationMetric:vtkReebGraphSimplificationMetric) -> int\nC++: int Simplify(double simplificationThreshold,\n    vtkReebGraphSimplificationMetric *simplificationMetric)\n\nSimplify the Reeb graph given a threshold\n'simplificationThreshold' (between 0 and 1).\n\n* This method is the core feature for Reeb graph multi-resolution\nhierarchy\n* construction.\n\n* Return the number of arcs that have been removed through the\n  simplification\n* process.\n\n* 'simplificationThreshold' represents a \"scale\", under which\n  each Reeb graph\n* feature is considered as noise. 'simplificationThreshold' is\n  expressed as a\n* fraction of the scalar field overall span. It can vary from 0\n* (no simplification) to 1 (maximal simplification).\n\n* 'simplificationMetric' is an object in charge of evaluating the\nimportance\n* of a Reeb graph arc at each step of the simplification process.\n* if 'simplificationMetric' is nullptr, the default strategy\n  (persitence of the\n* scalar field) is used.\n* Customized simplification metric evaluation algorithm can be\n  designed (see\n* vtkReebGraphSimplificationMetric), enabling the user to control\nthe\n* definition of what should be considered as noise or signal.\n\n* References:\n\n* \"Topological persistence and simplification\",\n* H. Edelsbrunner, D. Letscher, and A. Zomorodian,\n* Discrete Computational Geometry, 28:511-533, 2002.\n\n* \"Extreme elevation on a 2-manifold\",\n* P.K. Agarwal, H. Edelsbrunner, J. Harer, and Y. Wang,\n* ACM Symposium on Computational Geometry, pp. 357-365, 2004.\n\n* \"Simplifying flexible isosurfaces using local geometric\n  measures\",\n* H. Carr, J. Snoeyink, M van de Panne,\n* IEEE Visualization, 497-504, 2004\n\n* \"Loop surgery for volumetric meshes: Reeb graphs reduced to contour\n  trees\",\n* J. Tierny, A. Gyulassy, E. Simon, V. Pascucci,\n* IEEE Trans. on Vis. and Comp. Graph. (Proc of IEEE VIS),\n  15:1177-1184,2009.\n"},
  {"Set", PyvtkReebGraph_Set, METH_VARARGS,
   "Set(self, g:vtkMutableDirectedGraph) -> None\nC++: void Set(vtkMutableDirectedGraph *g)\n\nUse a pre-defined Reeb graph (post-processing). Use with caution!\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkReebGraph_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("data_object_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkReebGraph_GetDataObjectType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataObjectType\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkReebGraph_Doc =
  "vtkReebGraph - Reeb graph computation for PL scalar fields.\n\n"
  "Superclass: vtkMutableDirectedGraph\n\n"
  "vtkReebGraph is a class that computes a Reeb graph given a PL scalar\n"
  "field (vtkDataArray) defined on a simplicial mesh. A Reeb graph is a\n"
  "concise representation of the connectivity evolution of the level\n"
  "sets of a scalar function.\n\n"
  "It is particularly useful in visualization (optimal seed set\n"
  "computation, fast flexible isosurface extraction, automated transfer\n"
  "function design, feature-driven visualization, etc.) and computer\n"
  "graphics (shape deformation, shape matching, shape compression,\n"
  "etc.).\n\n"
  "Reference: \"Sur les points singuliers d'une forme de Pfaff\n"
  "completement integrable ou d'une fonction numerique\", G. Reeb,\n"
  "Comptes-rendus de l'Academie des Sciences, 222:847-849, 1946.\n\n"
  "vtkReebGraph implements one of the latest and most robust Reeb graph\n"
  "computation algorithms.\n\n"
  "Reference: \"Robust on-line computation of Reeb graphs: simplicity and\n"
  "speed\", V. Pascucci, G. Scorzelli, P.-T. Bremer, and A. Mascarenhas,\n"
  "ACM Transactions on Graphics, Proc. of SIGGRAPH 2007.\n\n"
  "vtkReebGraph provides methods for computing multi-resolution\n"
  "topological hierarchies through topological simplification.\n"
  "Topoligical simplification can be either driven by persistence\n"
  "homology concepts (default behavior) or by application specific\n"
  "metrics (see vtkReebGraphSimplificationMetric). In the latter case,\n"
  "designing customized simplification metric evaluation algorithms\n"
  "enables the user to control the definition of what should be\n"
  "considered as noise or signal in the topological filtering process.\n\n"
  "References: \"Topological persistence and simplification\", H.\n"
  "Edelsbrunner, D. Letscher, and A. Zomorodian, Discrete Computational\n"
  "Geometry, 28:511-533, 2002.\n\n"
  "\"Extreme elevation on a 2-manifold\", P.K. Agarwal, H. Edelsbrunner,\n"
  "J. Harer, and Y. Wang, ACM Symposium on Computational Geometry, pp.\n"
  "357-365, 2004.\n\n"
  "\"Simplifying flexible isosurfaces using local geometric measures\", H.\n"
  "Carr, J. Snoeyink, M van de Panne, IEEE Visualization, 497-504, 2004\n\n"
  "\"Loop surgery for volumetric meshes: Reeb graphs reduced to contour\n"
  "trees\", J. Tierny, A. Gyulassy, E. Simon, V. Pascucci, IEEE Trans. on\n"
  "Vis. and Comp. Graph. (Proc of IEEE VIS), 15:1177-1184, 2009.\n\n"
  "Reeb graphs can be computed from 2D data (vtkPolyData, with triangles\n"
  "only) or 3D data (vtkUnstructuredGrid, with tetrahedra only),\n"
  "sequentially (see the \"Build\" calls) or in streaming (see the\n"
  "\"StreamTriangle\" and \"StreamTetrahedron\" calls).\n\n"
  "vtkReebGraph inherits from vtkMutableDirectedGraph.\n\n"
  "Each vertex of a vtkReebGraph object represents a critical point of\n"
  "the scalar field where the connectivity of the related level set\n"
  "changes (creation, deletion, split or merge of connected components).\n"
  "A vtkIdTypeArray (called \"Vertex Ids\") is associated with the\n"
  "VertexData of a vtkReebGraph object, in order to retrieve if\n"
  "necessary the exact Ids of the corresponding vertices in the input\n"
  "mesh.\n\n"
  "The edges of a vtkReebGraph object represent the regions of the input\n"
  "mesh separated by the critical contours of the field, and where the\n"
  "connectivity of the input field does not change. A vtkVariantArray is\n"
  "associated with the EdgeDta of a vtkReebGraph object and each entry\n"
  "of this array is a vtkAbstractArray containing the Ids of the\n"
  "vertices of those regions, sorted by function value (useful for\n"
  "flexible isosurface extraction or level set signature computation,\n"
  "for instance).\n\n"
  "See Graphics/Testing/Cxx/TestReebGraph.cxx for examples of traversals\n"
  "and typical usages (customized simplification, skeletonization,\n"
  "contour spectra,\n"
  " etc.) of a vtkReebGraph object.\n\n"
  "@sa\n"
  "     vtkReebGraphSimplificationMetric\n"
  "     vtkPolyDataToReebGraphFilter\n"
  "     vtkUnstructuredGridToReebGraphFilter\n"
  "     vtkReebGraphSimplificationFilter\n"
  "     vtkReebGraphSurfaceSkeletonFilter\n"
  "     vtkReebGraphVolumeSkeletonFilter\n"
  "     vtkAreaContourSpectrumFilter\n"
  "     vtkVolumeContourSpectrumFilter\n\n"
  "@par Tests:\n"
  "     Graphics/Testing/Cxx/TestReebGraph.cxx\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkReebGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkReebGraph", // tp_name
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
  PyvtkReebGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReebGraph_StaticNew()
{
  return vtkReebGraph::New();
}

PyObject *PyvtkReebGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkReebGraph_Type, PyvtkReebGraph_Methods,
    "vtkReebGraph",
 &PyvtkReebGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMutableDirectedGraph_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ERR_INCORRECT_FIELD", vtkReebGraph::ERR_INCORRECT_FIELD },
        { "ERR_NO_SUCH_FIELD", vtkReebGraph::ERR_NO_SUCH_FIELD },
        { "ERR_NOT_A_SIMPLICIAL_MESH", vtkReebGraph::ERR_NOT_A_SIMPLICIAL_MESH },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkReebGraph_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReebGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReebGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReebGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

