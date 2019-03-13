/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCode.c
    
Abstract:

  GUIDs used to identify Data Hub records that originate from the Tiano 
  ReportStatusCode API.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (StatusCode)

EFI_GUID  gEfiStatusCodeGuid = EFI_STATUS_CODE_GUID;

EFI_GUID_STRING(&gEfiStatusCodeGuid, "Status Code", "Data Hub record for Tiano ReportStatusCode API");
