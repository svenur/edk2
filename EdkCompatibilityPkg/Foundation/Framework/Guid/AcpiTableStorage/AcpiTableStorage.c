/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  AcpiTableStorage.c
    
Abstract:

  The filename of the Acpi table storage file.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (AcpiTableStorage)

EFI_GUID gEfiAcpiTableStorageGuid = EFI_ACPI_TABLE_STORAGE_GUID;

EFI_GUID_STRING (&gEfiAcpiTableStorageGuid, "ACPI Table Storage File Name", 
                "Tiano ACPI 2.0 Table Storage file name GUID");
