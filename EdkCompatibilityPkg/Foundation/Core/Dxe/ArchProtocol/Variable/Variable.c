/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Variable.c

Abstract:

  Variable Architectural Protocol as defined in Tiano

  This code is used to produce the EFI 1.0 runtime variable services

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Variable)

EFI_GUID  gEfiVariableArchProtocolGuid = EFI_VARIABLE_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiVariableArchProtocolGuid, "Variable", "Variable Arch Protocol");
