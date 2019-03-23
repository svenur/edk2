/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverConfiguration.c
    
Abstract:

    EFI Driver Configuration Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverConfiguration)

EFI_GUID  gEfiDriverConfigurationProtocolGuid = EFI_DRIVER_CONFIGURATION_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiDriverConfigurationProtocolGuid, "Driver Configuration Protocol", "EFI 1.1 Driver Configuration Protocol");
