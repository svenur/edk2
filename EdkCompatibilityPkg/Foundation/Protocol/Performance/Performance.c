/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    Performance.c

Abstract:

  DXE performance checking infrastructure

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (Performance)

EFI_GUID  gEfiPerformanceProtocolGuid = EFI_PERFORMANCE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPerformanceProtocolGuid, "Performance Protocol", "Performance Protocol");
