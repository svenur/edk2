/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SecPlatformInformation.c

Abstract:

  Sec Platform Information as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (SecPlatformInformation)

EFI_GUID  gEfiSecPlatformInformationPpiGuid = EFI_SEC_PLATFORM_INFORMATION_GUID;

EFI_GUID_STRING(&gEfiSecPlatformInformationPpiGuid, "SecPlatformInformation", "Sec Platform Information");
