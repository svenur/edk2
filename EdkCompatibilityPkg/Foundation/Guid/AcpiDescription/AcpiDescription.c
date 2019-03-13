/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    AcpiDescription.c
    
Abstract:


   GUIDs used for ACPI Description

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (AcpiDescription)

EFI_GUID  gEfiAcpiDescriptionGuid = EFI_ACPI_DESCRIPTION_GUID;

EFI_GUID_STRING(&gEfiAcpiDescriptionGuid, "ACPI Description", "ACPI Description GUID");
