/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    MemoryAllocationHob.c
    
Abstract:

    GUIDs for HOBs used in memory allcation
    
--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(MemoryAllocationHob)

EFI_GUID gEfiHobMemeryAllocBspStoreGuid  = EFI_HOB_MEMORY_ALLOC_BSP_STORE_GUID;
EFI_GUID gEfiHobMemeryAllocStackGuid     = EFI_HOB_MEMORY_ALLOC_STACK_GUID;
EFI_GUID gEfiHobMemeryAllocModuleGuid    = EFI_HOB_MEMORY_ALLOC_MODULE_GUID;

EFI_GUID_STRING(&gEfiHobMemeryAllocBspStoreGuid, "BSP Store HOB", "HOB for BSP Store Memory Allocation");
EFI_GUID_STRING(&gEfiHobMemeryAllocStackGuid, "Stack HOB", "HOB for Stack Memory Allocation");
EFI_GUID_STRING(&gEfiHobMemeryAllocModuleGuid, "Memry Allocation Module HOB", "HOB for Memory Allocation Module");
