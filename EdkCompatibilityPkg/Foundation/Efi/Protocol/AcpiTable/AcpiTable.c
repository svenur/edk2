/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  AcpiTable.c

Abstract:

  ACPI Table Protocol from the UEFI 2.1 specification.

  This protocol may be used to install or remove an ACPI table from a platform.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (AcpiTable)

EFI_GUID  gEfiAcpiTableProtocolGuid = EFI_ACPI_TABLE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiAcpiTableProtocolGuid, "UEFI ACPI Table Protocol", "UEFI ACPI Table Protocol");
