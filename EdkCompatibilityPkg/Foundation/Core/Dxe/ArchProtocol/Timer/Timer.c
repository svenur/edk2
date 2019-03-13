/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Timer.c

Abstract:

  Timer Architectural Protocol GUID as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Timer)

EFI_GUID  gEfiTimerArchProtocolGuid = EFI_TIMER_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTimerArchProtocolGuid, "Timer", "Timer Arch Protocol");
