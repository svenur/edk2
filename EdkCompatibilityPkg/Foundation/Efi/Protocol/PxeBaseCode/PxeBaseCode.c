/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  PxeBaseCode.c

Abstract:
  PxeBaseCode GUID declaration.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (PxeBaseCode)

EFI_GUID  gEfiPxeBaseCodeProtocolGuid = EFI_PXE_BASE_CODE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPxeBaseCodeProtocolGuid, "PXE Base Code Protocol", "EFI PXE Base Code Protocol");

/* EOF - PxeBaseCode.c */
