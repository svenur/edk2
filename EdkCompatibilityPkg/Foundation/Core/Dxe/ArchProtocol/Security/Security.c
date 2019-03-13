/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Security.c

Abstract:

  Security Architectural Protocol GUID as defined in DXE CIS

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION(Security)

EFI_GUID gEfiSecurityArchProtocolGuid = EFI_SECURITY_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSecurityArchProtocolGuid, "Security", "Security Arch Protocol");

