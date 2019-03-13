/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverDiagnostics.c
    
Abstract:

    EFI Driver Diagnostics Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverDiagnostics)

EFI_GUID  gEfiDriverDiagnosticsProtocolGuid = EFI_DRIVER_DIAGNOSTICS_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiDriverDiagnosticsProtocolGuid, "Driver Diagnostics Protocol", "EFI 1.1 Driver Diagnostics Protocol");
