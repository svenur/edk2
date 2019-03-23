/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareFileSystem2.c

Abstract:

  PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(FirmwareFileSystem2)

EFI_GUID gEfiFirmwareFileSystem2Guid = EFI_FIRMWARE_FILE_SYSTEM2_GUID;
EFI_GUID_STRING(&gEfiFirmwareFileSystem2Guid, "FirmwareFileSystem2", "Efi FirmwareFileSystem2")

