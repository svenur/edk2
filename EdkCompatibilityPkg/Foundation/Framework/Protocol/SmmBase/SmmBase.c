/*++

Copyright (c) 1999 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmmBase.c

Abstract:

  This file defines SMM Base abstraction protocol defined by the 
  SMM Component Interface Specification

 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmBase)

EFI_GUID  gEfiSmmBaseProtocolGuid = EFI_SMM_BASE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmBaseProtocolGuid, "SMM Base Protocol", "SMM Base protocol");

EFI_GUID  gEfiSmmCpuIoGuid = EFI_SMM_CPU_IO_GUID;

EFI_GUID_STRING(&gEfiSmmCpuIoGuid, "SMM CPU IO", "SMM CPU IO");

EFI_GUID  gEfiSmmCommunicateHeaderGuid = SMM_COMMUNICATE_HEADER_GUID;

EFI_GUID_STRING(&gEfiSmmCommunicateHeaderGuid, "SMM Communicate Header Guid", "SMM Communicate Header Guid");
