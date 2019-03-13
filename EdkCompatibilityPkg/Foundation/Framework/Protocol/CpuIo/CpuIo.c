/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  CpuIO.c

Abstract:

  CPU IO Protocol GUID as defined in Tiano


--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (CpuIo)

EFI_GUID  gEfiCpuIoProtocolGuid = EFI_CPU_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiCpuIoProtocolGuid, "CPU IO", "CPU IO Protocol");
