// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkIOMPIImageObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPNrrdReader.h"
#include "vtkMPIImageReader.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkIOMPIImageObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPNrrdReader)
VTK_CREATE_CREATE_FUNCTION(vtkMPIImageReader)


vtkIOMPIImageObjectFactory::vtkIOMPIImageObjectFactory()
{
this->RegisterOverride("vtkNrrdReader", "vtkPNrrdReader", "Override for VTK::IOMPIImage module", 1, vtkObjectFactoryCreatevtkPNrrdReader);
this->RegisterOverride("vtkImageReader", "vtkMPIImageReader", "Override for VTK::IOMPIImage module", 1, vtkObjectFactoryCreatevtkMPIImageReader);

}

const char * vtkIOMPIImageObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkIOMPIImageObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkIOMPIImageCount = 0;

VTKIOMPIIMAGE_EXPORT void vtkIOMPIImage_AutoInit_Construct()
{
  if(++vtkIOMPIImageCount == 1)
  {


    vtkIOMPIImageObjectFactory* factory = vtkIOMPIImageObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
