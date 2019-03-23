/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SecurityPolicy.c

Abstract:

  Security Policy protocol as defined in the DXE CIS

--*/

#include "Tiano.h"                  
#include EFI_PROTOCOL_DEFINITION (SecurityPolicy)

EFI_GUID gEfiSecurityPolicyProtocolGuid = EFI_SECURITY_POLICY_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSecurityPolicyProtocolGuid, "Security Policy protocol", "Security Policy protocol");

