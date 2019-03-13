/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Cpu.c

Abstract:

  CPU Architectural Protocol GUID as defined in Tiano


--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Cpu)

EFI_GUID  gEfiCpuArchProtocolGuid = EFI_CPU_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiCpuArchProtocolGuid, "CPU", "CPU Arch Protocol");
