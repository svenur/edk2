/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    PlatformToDriverConfiguration.c

Abstract:

    UEFI Platform to Driver Configuration Protocol

Revision History:

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (PlatformToDriverConfiguration)

EFI_GUID  gEfiPlatformToDriverConfigurationProtocolGuid = EFI_PLATFORM_TO_DRIVER_CONFIGURATION_PROTOCOL_GUID;
EFI_GUID  gEfiPlatformToDriverConfigurationClpGuid = EFI_PLATFORM_TO_DRIVER_CONFIGURATION_CLP_GUID;

EFI_GUID_STRING
  (&gEfiPlatformToDriverConfigurationProtocolGuid, "Platform to Driver Configuration Protocol", "UEFI 2.1 Platform to Driver Configuration Protocol");
