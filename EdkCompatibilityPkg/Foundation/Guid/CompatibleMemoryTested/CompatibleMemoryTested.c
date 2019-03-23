/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  CompatibleMemoryTested.c
    
Abstract:

  Tiano Guid used for all Compatible Memory Range Tested GUID.  

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (CompatibleMemoryTested)

EFI_GUID  gEfiCompatibleMemoryTestedGuid = EFI_COMPATIBLE_MEMORY_TESTED_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiCompatibleMemoryTestedGuid, "CompatibleMemoryTested Protocol", "Tiano Generic Memory Test Protocol");
