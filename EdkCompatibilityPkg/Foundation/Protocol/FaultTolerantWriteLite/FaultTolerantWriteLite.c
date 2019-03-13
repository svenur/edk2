/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FaultTolerantWriteLite.c

Abstract:

  This is a simple fault tolerant write driver, based on PlatformFd library.
  And it only supports write BufferSize <= SpareAreaLength.

--*/

#include "Tiano.h"                  
#include EFI_PROTOCOL_DEFINITION(FaultTolerantWriteLite)

EFI_GUID gEfiFaultTolerantWriteLiteProtocolGuid = EFI_FTW_LITE_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiFaultTolerantWriteLiteProtocolGuid, "FaultTolerantWriteLite Protocol", 
                 "Fault Tolerant Write Lite protocol");
