/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Dpc.c

Abstract:

  EFI Deferred Procedure Call Protocol

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Dpc)

EFI_GUID gEfiDpcProtocolGuid = EFI_DPC_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiDpcProtocolGuid, "EFI Deferred Procedure Call Protocol", "EFI Deferred Procedure Call Protocol");
