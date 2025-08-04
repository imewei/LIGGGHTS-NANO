// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// VTK_DEPRECATED_IN_9_5_0()
#define VTK_DEPRECATION_LEVEL 0

#include "vtkDataArrayPrivate.txx"

#define VTK_TYPED_VALUERANGE_INSTANTIATING
#include "vtkTypedDataArray.h"

namespace vtkDataArrayPrivate
{
VTK_ABI_NAMESPACE_BEGIN
VTK_INSTANTIATE_VALUERANGE_VALUETYPE(float)
VTK_ABI_NAMESPACE_END
}
