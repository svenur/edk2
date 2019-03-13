/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  CpuIO.c

Abstract:

  CPU IO PPI GUID as defined in Tiano


--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (CpuIo)

EFI_GUID  gPeiCpuIoPpiInServiceTableGuid = PEI_CPU_IO_PPI_GUID;

EFI_GUID_STRING(&gPeiCpuIoPpiInServiceTableGuid, "CPU IO", "CPU IO PPI");
