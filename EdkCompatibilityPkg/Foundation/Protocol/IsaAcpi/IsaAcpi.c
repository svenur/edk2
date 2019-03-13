/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    IsaAcpi.c
    
Abstract:

    EFI ISA ACPI Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (IsaAcpi)

EFI_GUID  gEfiIsaAcpiProtocolGuid = EFI_ISA_ACPI_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiIsaAcpiProtocolGuid, "ISA Acpi Protocol", "ISA Acpi Protocol");
