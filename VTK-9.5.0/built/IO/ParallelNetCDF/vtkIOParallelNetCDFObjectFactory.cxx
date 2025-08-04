// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkIOParallelNetCDFObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPSLACReader.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkIOParallelNetCDFObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPSLACReader)


vtkIOParallelNetCDFObjectFactory::vtkIOParallelNetCDFObjectFactory()
{
this->RegisterOverride("vtkSLACReader", "vtkPSLACReader", "Override for VTK::IOParallelNetCDF module", 1, vtkObjectFactoryCreatevtkPSLACReader);

}

const char * vtkIOParallelNetCDFObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkIOParallelNetCDFObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkIOParallelNetCDFCount = 0;

VTKIOPARALLELNETCDF_EXPORT void vtkIOParallelNetCDF_AutoInit_Construct()
{
  if(++vtkIOParallelNetCDFCount == 1)
  {


    vtkIOParallelNetCDFObjectFactory* factory = vtkIOParallelNetCDFObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
