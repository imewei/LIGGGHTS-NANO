// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkDomainsParallelChemistryObjectFactory_h
#define vtkDomainsParallelChemistryObjectFactory_h

#include "vtkDomainsParallelChemistryModule.h" // For export macro
#include "vtkObjectFactory.h"

VTK_ABI_NAMESPACE_BEGIN

class VTKDOMAINSPARALLELCHEMISTRY_EXPORT vtkDomainsParallelChemistryObjectFactory : public vtkObjectFactory
{
public:
  static vtkDomainsParallelChemistryObjectFactory * New();
  vtkTypeMacro(vtkDomainsParallelChemistryObjectFactory, vtkObjectFactory);

  const char * GetDescription() VTK_FUTURE_CONST override { return "vtkDomainsParallelChemistry factory overrides."; }

  const char * GetVTKSourceVersion() VTK_FUTURE_CONST override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkDomainsParallelChemistryObjectFactory();

private:
  vtkDomainsParallelChemistryObjectFactory(const vtkDomainsParallelChemistryObjectFactory&) = delete;
  void operator=(const vtkDomainsParallelChemistryObjectFactory&) = delete;
};

VTK_ABI_NAMESPACE_END

#endif // vtkDomainsParallelChemistryObjectFactory_h
