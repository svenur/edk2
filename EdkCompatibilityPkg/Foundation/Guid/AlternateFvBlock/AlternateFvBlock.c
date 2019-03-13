/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  AlternateFvBlock.c
    
Abstract:

  Tiano Guid used to define the Alternate Firmware Volume Block Guid.  

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (AlternateFvBlock)

EFI_GUID  gEfiAlternateFvBlockGuid = EFI_ALTERNATE_FV_BLOCK_GUID;

EFI_GUID_STRING
  (&gEfiAlternateFvBlockGuid, "Alternate Firmware Volume Block GUID", "Alternate Firmware Volume Block GUID");
