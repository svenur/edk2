/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverDiagnostics2.c

Abstract:

    EFI Driver Diagnostics2 Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverDiagnostics2)

EFI_GUID  gEfiDriverDiagnostics2ProtocolGuid = EFI_DRIVER_DIAGNOSTICS2_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiDriverDiagnostics2ProtocolGuid, "Driver Diagnostics Protocol", "UEFI 2.0 Driver Diagnostics2 Protocol");
