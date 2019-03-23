/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    AuthenticationInfo.c

Abstract:

    UEFI Authentication Info Protocol.

Revision History:

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (AuthenticationInfo)

EFI_GUID  gEfiAuthenticationInfoProtocolGuid = EFI_AUTHENTICATION_INFO_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiAuthenticationInfoProtocolGuid, "Authentication Info Protocol", "UEFI 2.1 Authentication Info Protocol");
