/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  AbsolutePointer.c

Abstract:

  EFI_ABSOLUTE_POINTER_PROTOCOL from the UEFI 2.1 specification.

  This protocol specifies a simple method for accessing absolute pointer devices.  
  
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (AbsolutePointer)

EFI_GUID  gEfiAbsolutePointerProtocolGuid = EFI_ABSOLUTE_POINTER_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiAbsolutePointerProtocolGuid, "Absolute Pointer Protocol", "UEFI 2.1 Absolute Pointer Protocol");
