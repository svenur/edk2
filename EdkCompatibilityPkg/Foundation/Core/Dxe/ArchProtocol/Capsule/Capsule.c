/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Capsule.c

Abstract:

  Capsule Architectural Protocol is used to produce the UEFI 2.0 capsule runtime services

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Capsule)

EFI_GUID  gEfiCapsuleArchProtocolGuid = EFI_CAPSULE_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiCapsuleArchProtocolGuid, "Capsule", "Capsule Arch Protocol");
