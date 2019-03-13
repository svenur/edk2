/*++

Copyright (c) 1999 - 2005, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  AcpiSupport.c

Abstract:

  Tiano EFI 2.0 ACPI Support Protocol

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (AcpiSupport)

EFI_GUID  gEfiAcpiSupportGuid = EFI_ACPI_SUPPORT_GUID;

EFI_GUID_STRING(&gEfiAcpiSupportGuid, "ACPI Support Protocol", "EFI 2.0 ACPI Support Protocol");
