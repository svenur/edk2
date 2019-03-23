/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  VariableWrite.c

Abstract:

  Variable Write Architectural Protocol as defined in DXE CIS

  This code is used to indicate the EFI 1.0 runtime variable services
  support writting to variables.

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (VariableWrite)

EFI_GUID  gEfiVariableWriteArchProtocolGuid = EFI_VARIABLE_WRITE_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiVariableWriteArchProtocolGuid, "VariableWrite", "Variable Write Arch Protocol");
