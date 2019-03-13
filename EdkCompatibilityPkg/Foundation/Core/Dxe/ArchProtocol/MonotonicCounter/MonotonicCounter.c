/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MonotonicCounter.c

Abstract:

  Monotonic Counter Architectural Protocol GUID as defined in the DXE CIS

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION(MonotonicCounter)

EFI_GUID gEfiMonotonicCounterArchProtocolGuid = EFI_MONTONIC_COUNTER_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiMonotonicCounterArchProtocolGuid, "Monotonic Counter", "Monotonic Counter Arch Protocol");
