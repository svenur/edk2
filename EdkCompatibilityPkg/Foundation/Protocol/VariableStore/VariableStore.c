/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  VariableStore.c

Abstract:

Revision History

--*/

//
// The variable store protocol interface is specific to the reference
// implementation. The initialization code adds variable store devices
// to the system, and the FW connects to the devices to provide the
// variable store interfaces through these devices.
//
//
// Variable Store Device protocol
//
#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (VariableStore)

EFI_GUID  gEfiVariableStoreProtocolGuid = EFI_VARIABLE_STORE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiVariableStoreProtocolGuid, "Variable Storage Protocol", "Tiano Variable Storage Protocol");
