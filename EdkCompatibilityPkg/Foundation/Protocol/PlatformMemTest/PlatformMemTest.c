/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PlatformMemTest.c

Abstract:

  // TBD defined in the Tiano specification??

  The Platform memory test protocol is used to provide platform specific
  information and functionality for memory test
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (PlatformMemTest)

EFI_GUID  gEfiPlatformMemTestGuid = EFI_PLATFORM_MEMTEST_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPlatformMemTestGuid, "Platform Memory Test Protocol", "Platform MemTest protocol");
