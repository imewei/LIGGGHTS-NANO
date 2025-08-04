// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkIOMPIParallelObjectFactory_h
#define vtkIOMPIParallelObjectFactory_h

#include "vtkIOMPIParallelModule.h" // For export macro
#include "vtkObjectFactory.h"

VTK_ABI_NAMESPACE_BEGIN

class VTKIOMPIPARALLEL_EXPORT vtkIOMPIParallelObjectFactory : public vtkObjectFactory
{
public:
  static vtkIOMPIParallelObjectFactory * New();
  vtkTypeMacro(vtkIOMPIParallelObjectFactory, vtkObjectFactory);

  const char * GetDescription() VTK_FUTURE_CONST override { return "vtkIOMPIParallel factory overrides."; }

  const char * GetVTKSourceVersion() VTK_FUTURE_CONST override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkIOMPIParallelObjectFactory();

private:
  vtkIOMPIParallelObjectFactory(const vtkIOMPIParallelObjectFactory&) = delete;
  void operator=(const vtkIOMPIParallelObjectFactory&) = delete;
};

VTK_ABI_NAMESPACE_END

#endif // vtkIOMPIParallelObjectFactory_h
