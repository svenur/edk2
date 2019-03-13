/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    AcpiS3Save.c

Abstract:

  Tiano Tiano S3 Save Protocol

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (AcpiS3Save)

EFI_GUID  gEfiAcpiS3SaveGuid = EFI_ACPI_S3_SAVE_GUID;

EFI_GUID_STRING(&gEfiAcpiS3SaveGuid, "EFI Acpi S3 Save Protocol", "Tiano Acpi S3 Save Protocol");
