// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkIOMPIImageObjectFactory_h
#define vtkIOMPIImageObjectFactory_h

#include "vtkIOMPIImageModule.h" // For export macro
#include "vtkObjectFactory.h"

VTK_ABI_NAMESPACE_BEGIN

class VTKIOMPIIMAGE_EXPORT vtkIOMPIImageObjectFactory : public vtkObjectFactory
{
public:
  static vtkIOMPIImageObjectFactory * New();
  vtkTypeMacro(vtkIOMPIImageObjectFactory, vtkObjectFactory);

  const char * GetDescription() VTK_FUTURE_CONST override { return "vtkIOMPIImage factory overrides."; }

  const char * GetVTKSourceVersion() VTK_FUTURE_CONST override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkIOMPIImageObjectFactory();

private:
  vtkIOMPIImageObjectFactory(const vtkIOMPIImageObjectFactory&) = delete;
  void operator=(const vtkIOMPIImageObjectFactory&) = delete;
};

VTK_ABI_NAMESPACE_END

#endif // vtkIOMPIImageObjectFactory_h
