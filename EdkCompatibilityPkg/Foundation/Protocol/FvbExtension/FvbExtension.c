/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    FvbExtension.c

Abstract:

  IPMI Extension Protocol to extend the FVB functionality to multiple erase blocks
  at different block offsets.


--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(FvbExtension)

EFI_GUID gEfiFvbExtensionProtocolGuid = EFI_FVB_EXTENSION_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFvbExtensionProtocolGuid, "FVB EXTENSION", "FVB EXTENSION");
