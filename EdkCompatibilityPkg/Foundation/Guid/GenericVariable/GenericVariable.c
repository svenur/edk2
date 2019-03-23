/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    GenericVariable.c
    
Abstract:

    The variable space Guid to pair with a Unicode string name to tag an EFI variable

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (GenericVariable)

EFI_GUID  gEfiGenericVariableGuid = EFI_GENERIC_VARIABLE_GUID;

EFI_GUID_STRING(&gEfiGenericVariableGuid, "GenericVariable", "Generic Variable GUID");
