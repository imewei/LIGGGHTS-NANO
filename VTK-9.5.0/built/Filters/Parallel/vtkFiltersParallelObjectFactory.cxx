// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkFiltersParallelObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPConvertToMultiBlockDataSet.h"
#include "vtkPAxisAlignedReflectionFilter.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkFiltersParallelObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPConvertToMultiBlockDataSet)
VTK_CREATE_CREATE_FUNCTION(vtkPAxisAlignedReflectionFilter)


vtkFiltersParallelObjectFactory::vtkFiltersParallelObjectFactory()
{
this->RegisterOverride("vtkConvertToMultiBlockDataSet", "vtkPConvertToMultiBlockDataSet", "Override for VTK::FiltersParallel module", 1, vtkObjectFactoryCreatevtkPConvertToMultiBlockDataSet);
this->RegisterOverride("vtkAxisAlignedReflectionFilter", "vtkPAxisAlignedReflectionFilter", "Override for VTK::FiltersParallel module", 1, vtkObjectFactoryCreatevtkPAxisAlignedReflectionFilter);

}

const char * vtkFiltersParallelObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkFiltersParallelObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkFiltersParallelCount = 0;

VTKFILTERSPARALLEL_EXPORT void vtkFiltersParallel_AutoInit_Construct()
{
  if(++vtkFiltersParallelCount == 1)
  {


    vtkFiltersParallelObjectFactory* factory = vtkFiltersParallelObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
