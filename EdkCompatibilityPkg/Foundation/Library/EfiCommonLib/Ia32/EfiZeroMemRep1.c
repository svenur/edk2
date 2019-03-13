/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiZeroMemRep1.c

Abstract:

  This is the code that uses rep stosb ZeroMem service

--*/

#include "Tiano.h"

VOID
EfiCommonLibZeroMem (
  IN VOID   *Buffer,
  IN UINTN  Count
  )
/*++

Input:  VOID   *Buffer - Pointer to buffer to clear
        UINTN  Count  - Number of bytes to clear

Output: None.

Saves:

Modifies:

Description:  This function uses rep stosb to zero memory.

--*/
{
  __asm {
    mov         ecx, Count
    xor         eax, eax
    mov         edi, Buffer
    rep stosb
Exit:
  }
}

