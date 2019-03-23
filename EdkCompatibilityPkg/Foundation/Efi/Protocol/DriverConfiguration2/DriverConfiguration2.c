/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverConfiguration.c

Abstract:

    EFI Driver Configuration Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverConfiguration2)

EFI_GUID  gEfiDriverConfiguration2ProtocolGuid = EFI_DRIVER_CONFIGURATION2_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiDriverConfiguration2ProtocolGuid, "Driver Configuration2 Protocol", "UEFI 2.0 Driver Configuration2 Protocol");
