/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCodeCallerId.c
    
Abstract:

  GUID used to identify id for the caller who is initiating the Status Code.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (StatusCodeCallerId)

EFI_GUID  gEfiCallerIdGuid = EFI_STANDARD_CALLER_ID_GUID;

EFI_GUID_STRING(&gEfiCallerIdGuid, "Status Code Caller Id", "Caller Id for Tiano ReportStatusCode API");
