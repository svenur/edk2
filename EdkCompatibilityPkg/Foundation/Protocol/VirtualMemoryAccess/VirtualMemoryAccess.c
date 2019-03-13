/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  VirtualMemoryAccess.c

Abstract:

  
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (VirtualMemoryAccess)

EFI_GUID  gEfiVirtualMemoryAccessProtocolGuid = EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiVirtualMemoryAccessProtocolGuid, "Virtual Memory Access Protocol", "Tiano Virtual Memory Access Protocol");
