/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    DebugAssert.c

Abstract:

  This protocol allows provides debug services to a driver. This is not 
  debugger support, but things like ASSERT() and DEBUG() macros

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(DebugAssert)
 

EFI_GUID gEfiDebugAssertProtocolGuid = EFI_DEBUG_ASSERT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDebugAssertProtocolGuid, "EFI Debug Assert", "Efi Debug Assert Protocol");

