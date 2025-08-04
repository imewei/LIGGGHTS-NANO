// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkDomainsParallelChemistryObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkPSimpleBondPerceiver.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkDomainsParallelChemistryObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkPSimpleBondPerceiver)


vtkDomainsParallelChemistryObjectFactory::vtkDomainsParallelChemistryObjectFactory()
{
this->RegisterOverride("vtkSimpleBondPerceiver", "vtkPSimpleBondPerceiver", "Override for VTK::DomainsParallelChemistry module", 1, vtkObjectFactoryCreatevtkPSimpleBondPerceiver);

}

const char * vtkDomainsParallelChemistryObjectFactory::GetVTKSourceVersion() VTK_FUTURE_CONST
{
  return VTK_SOURCE_VERSION;
}

void vtkDomainsParallelChemistryObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkDomainsParallelChemistryCount = 0;

VTKDOMAINSPARALLELCHEMISTRY_EXPORT void vtkDomainsParallelChemistry_AutoInit_Construct()
{
  if(++vtkDomainsParallelChemistryCount == 1)
  {


    vtkDomainsParallelChemistryObjectFactory* factory = vtkDomainsParallelChemistryObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
