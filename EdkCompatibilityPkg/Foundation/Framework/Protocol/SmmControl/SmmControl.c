/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmmControl.c

Abstract:

  This file defines SMM Control abstraction protocol defined by the 
  SMM Component Interface Specification

 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmControl)

EFI_GUID  gEfiSmmControlProtocolGuid = EFI_SMM_CONTROL_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmControlProtocolGuid, "SMM Control Protocol", "SMM Control protocol");
