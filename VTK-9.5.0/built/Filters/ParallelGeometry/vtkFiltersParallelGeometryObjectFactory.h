// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkFiltersParallelGeometryObjectFactory_h
#define vtkFiltersParallelGeometryObjectFactory_h

#include "vtkFiltersParallelGeometryModule.h" // For export macro
#include "vtkObjectFactory.h"

VTK_ABI_NAMESPACE_BEGIN

class VTKFILTERSPARALLELGEOMETRY_EXPORT vtkFiltersParallelGeometryObjectFactory : public vtkObjectFactory
{
public:
  static vtkFiltersParallelGeometryObjectFactory * New();
  vtkTypeMacro(vtkFiltersParallelGeometryObjectFactory, vtkObjectFactory);

  const char * GetDescription() VTK_FUTURE_CONST override { return "vtkFiltersParallelGeometry factory overrides."; }

  const char * GetVTKSourceVersion() VTK_FUTURE_CONST override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkFiltersParallelGeometryObjectFactory();

private:
  vtkFiltersParallelGeometryObjectFactory(const vtkFiltersParallelGeometryObjectFactory&) = delete;
  void operator=(const vtkFiltersParallelGeometryObjectFactory&) = delete;
};

VTK_ABI_NAMESPACE_END

#endif // vtkFiltersParallelGeometryObjectFactory_h
