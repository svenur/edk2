/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MemoryTypeInformation.c
    
Abstract:

  GUID used for Memory Type Information entries in the HOB list.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(MemoryTypeInformation)

EFI_GUID gEfiMemoryTypeInformationGuid  = EFI_MEMORY_TYPE_INFORMATION_GUID;

EFI_GUID_STRING(&gEfiMemoryTypeInformationGuid, "Memory Type Information", 
                "Memory Type Information HOB GUID for HOB list.");

