/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmmAccess.c

Abstract:

  This file defines SMM SMRAM abstraction protocol defined by the 
  SMM Component Interface Specification

 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmAccess)

EFI_GUID  gEfiSmmAccessProtocolGuid = EFI_SMM_ACCESS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmAccessProtocolGuid, "SMM Access Protocol", "SMM Access protocol");
