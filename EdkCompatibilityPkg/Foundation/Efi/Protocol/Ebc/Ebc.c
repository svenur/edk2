/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Ebc.c

Abstract:

  EBC protocol as defined in the EFI 1.1 specification.

 
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Ebc)

EFI_GUID  gEfiEbcProtocolGuid = EFI_EBC_INTERPRETER_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiEbcProtocolGuid, "EBC Protocol", "EFI 1.1 EBC protocol");
