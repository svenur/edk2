/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCode.c

Abstract:

  Status code Architectural Protocol as defined in Tiano

  This code abstracts Status Code reporting.

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (StatusCode)

EFI_GUID  gEfiStatusCodeRuntimeProtocolGuid = EFI_STATUS_CODE_RUNTIME_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiStatusCodeRuntimeProtocolGuid, "Status Code", "Status Code Arch Protocol");
