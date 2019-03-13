/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  RealTimeClock.c

Abstract:

  Real Time clock Architectural Protocol GUID as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (RealTimeClock)

EFI_GUID  gEfiRealTimeClockArchProtocolGuid = EFI_REAL_TIME_CLOCK_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiRealTimeClockArchProtocolGuid, "RTC", "Real Time Clock Arch Protocol");
