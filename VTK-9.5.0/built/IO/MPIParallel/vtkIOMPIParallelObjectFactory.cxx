// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkIOMPIParallelObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPWindBladeReader.h"
#include "vtkMPIMultiBlockPLOT3DReader.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkIOMPIParallelObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPWindBladeReader)
VTK_CREATE_CREATE_FUNCTION(vtkMPIMultiBlockPLOT3DReader)


vtkIOMPIParallelObjectFactory::vtkIOMPIParallelObjectFactory()
{
this->RegisterOverride("vtkWindBladeReader", "vtkPWindBladeReader", "Override for VTK::IOMPIParallel module", 1, vtkObjectFactoryCreatevtkPWindBladeReader);
this->RegisterOverride("vtkMultiBlockPLOT3DReader", "vtkMPIMultiBlockPLOT3DReader", "Override for VTK::IOMPIParallel module", 1, vtkObjectFactoryCreatevtkMPIMultiBlockPLOT3DReader);

}

const char * vtkIOMPIParallelObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkIOMPIParallelObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkIOMPIParallelCount = 0;

VTKIOMPIPARALLEL_EXPORT void vtkIOMPIParallel_AutoInit_Construct()
{
  if(++vtkIOMPIParallelCount == 1)
  {


    vtkIOMPIParallelObjectFactory* factory = vtkIOMPIParallelObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
