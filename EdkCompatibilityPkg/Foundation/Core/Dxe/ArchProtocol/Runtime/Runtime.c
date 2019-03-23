/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Runtime.c

Abstract:

  Runtime Architectural Protocol as defined in Tiano

  This code is used to produce the EFI 1.0 runtime virtual switch over

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Runtime)

EFI_GUID  gEfiRuntimeArchProtocolGuid = EFI_RUNTIME_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiRuntimeArchProtocolGuid, "Runtime", "Runtime Arch Protocol");
