// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkIOParallelNetCDFObjectFactory_h
#define vtkIOParallelNetCDFObjectFactory_h

#include "vtkIOParallelNetCDFModule.h" // For export macro
#include "vtkObjectFactory.h"

VTK_ABI_NAMESPACE_BEGIN

class VTKIOPARALLELNETCDF_EXPORT vtkIOParallelNetCDFObjectFactory : public vtkObjectFactory
{
public:
  static vtkIOParallelNetCDFObjectFactory * New();
  vtkTypeMacro(vtkIOParallelNetCDFObjectFactory, vtkObjectFactory);

  const char * GetDescription() VTK_FUTURE_CONST override { return "vtkIOParallelNetCDF factory overrides."; }

  const char * GetVTKSourceVersion() VTK_FUTURE_CONST override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkIOParallelNetCDFObjectFactory();

private:
  vtkIOParallelNetCDFObjectFactory(const vtkIOParallelNetCDFObjectFactory&) = delete;
  void operator=(const vtkIOParallelNetCDFObjectFactory&) = delete;
};

VTK_ABI_NAMESPACE_END

#endif // vtkIOParallelNetCDFObjectFactory_h
