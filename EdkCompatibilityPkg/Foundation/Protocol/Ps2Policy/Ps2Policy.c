/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  Ps2Policy.c
    
Abstract:

  Protocol used for PS/2 Policy definition.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (Ps2Policy)

EFI_GUID  gEfiPs2PolicyProtocolGuid = EFI_PS2_POLICY_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPs2PolicyProtocolGuid, "PS2 Policy", "Policy for Configuring PS2");
