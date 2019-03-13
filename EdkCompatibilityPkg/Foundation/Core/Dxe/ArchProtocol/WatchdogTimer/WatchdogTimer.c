/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  WatchdogTimer.c

Abstract:

  Watchdog Timer Architectural Protocol GUID as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (WatchdogTimer)

EFI_GUID  gEfiWatchdogTimerArchProtocolGuid = EFI_WATCHDOG_TIMER_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiWatchdogTimerArchProtocolGuid, "Watchdog Timer", "Watchdog Timer Arch Protocol");
