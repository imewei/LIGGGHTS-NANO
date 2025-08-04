// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkFiltersParallelGeometryObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPConnectivityFilter.h"
#include "vtkPDistributedDataFilter.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkFiltersParallelGeometryObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPConnectivityFilter)
VTK_CREATE_CREATE_FUNCTION(vtkPDistributedDataFilter)


vtkFiltersParallelGeometryObjectFactory::vtkFiltersParallelGeometryObjectFactory()
{
this->RegisterOverride("vtkConnectivityFilter", "vtkPConnectivityFilter", "Override for VTK::FiltersParallelGeometry module", 1, vtkObjectFactoryCreatevtkPConnectivityFilter);
this->RegisterOverride("vtkDistributedDataFilter", "vtkPDistributedDataFilter", "Override for VTK::FiltersParallelGeometry module", 1, vtkObjectFactoryCreatevtkPDistributedDataFilter);

}

const char * vtkFiltersParallelGeometryObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkFiltersParallelGeometryObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkFiltersParallelGeometryCount = 0;

VTKFILTERSPARALLELGEOMETRY_EXPORT void vtkFiltersParallelGeometry_AutoInit_Construct()
{
  if(++vtkFiltersParallelGeometryCount == 1)
  {


    vtkFiltersParallelGeometryObjectFactory* factory = vtkFiltersParallelGeometryObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
