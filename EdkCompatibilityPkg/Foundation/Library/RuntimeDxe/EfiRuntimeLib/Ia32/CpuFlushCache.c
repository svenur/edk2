/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    CpuFlushCache.c

Abstract:

 Cpu Flush Cache Function.

--*/
#include "Tiano.h"
#include "EfiRuntimeLib.h"

//
// Cache Flush Routine.
//
EFI_STATUS
EfiCpuFlushCache (
  IN EFI_PHYSICAL_ADDRESS          Start,
  IN UINT64                        Length
  )
/*++

Routine Description:

  Flush cache with specified range.

Arguments:

  Start   - Start address
  Length  - Length in bytes

Returns:

  Status code
  
  EFI_SUCCESS - success

--*/
{
  __asm {
    wbinvd
  }
  return EFI_SUCCESS;
}
