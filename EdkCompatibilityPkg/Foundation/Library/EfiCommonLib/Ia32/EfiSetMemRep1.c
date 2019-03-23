/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiSetMemRep1.c

Abstract:

  This is the code that uses rep stosb SetMem service

--*/

#include "Tiano.h"

VOID
EfiCommonLibSetMem (
  IN VOID   *Buffer,
  IN UINTN  Count,
  IN UINT8  Value
  )
/*++

Input:  VOID   *Buffer - Pointer to buffer to write
        UINTN  Count   - Number of bytes to write
        UINT8  Value   - Value to write

Output: None.

Saves:

Modifies:

Description:  This function uses rep stosb to set memory.

--*/
{
  __asm {
    mov         ecx, Count
    test        ecx, ecx
    je          Exit
    mov         al,  Value
    mov         edi, Buffer
    rep stosb
Exit:
  }
}

