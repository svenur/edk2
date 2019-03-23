/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Security.c

Abstract:

  Security Architectural Protocol PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Security)

EFI_GUID  gPeiSecurityPpiGuid = PEI_SECURITY_PPI_GUID;

EFI_GUID_STRING(&gPeiSecurityPpiGuid, "Security PPI", "Security Arch PPI");
