/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PeiFlushInstructionCache.c
    
Abstract:

  GUID for the Instruction Cache Flushing APIs shared between PEI and DXE

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PeiFlushInstructionCache)

EFI_GUID gEfiPeiFlushInstructionCacheGuid  = EFI_PEI_FLUSH_INSTRUCTION_CACHE_GUID;

EFI_GUID_STRING(&gEfiPeiFlushInstructionCacheGuid, "PEI Flush Instruction Cache", 
                "Flush Instruction Cache APIs from PEI");

