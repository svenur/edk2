/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmBus.c
  
Abstract:

  EFI SMBUS Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (Smbus)

EFI_GUID  gEfiSmbusProtocolGuid = EFI_SMBUS_HC_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmbusProtocolGuid, "SMBUS Protocol", "EFI 2.0 SMBUS Protocol");
