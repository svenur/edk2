/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    DebugMask.c

Abstract:

  This protocol is used to abstract the Debug Mask serivces for 
  the specific driver or application image.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(DebugMask)
 

EFI_GUID gEfiDebugMaskProtocolGuid = EFI_DEBUG_MASK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDebugMaskProtocolGuid, "DebugMask Protocol", "Efi Debug Mask Protocol");

