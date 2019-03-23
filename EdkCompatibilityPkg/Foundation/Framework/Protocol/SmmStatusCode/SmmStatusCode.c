/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmmStatusCode.c

Abstract:

  SMM Status code Protocol as defined in EFI 2.0 (for Status Code Architectural Protocol)

  This code abstracts Status Code reporting.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmStatusCode)

EFI_GUID  gEfiSmmStatusCodeProtocolGuid = EFI_SMM_STATUS_CODE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmStatusCodeProtocolGuid, "SMM Status Code", "SMM Status Code Protocol");
