/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiZeroMemRep4.c

Abstract:

  This is the code that uses rep stosd ZeroMem service

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

Description:  This function uses rep stosd to zero memory.

--*/
{
  __asm {
    mov         ecx, Count
    test        ecx, ecx
    je          Exit
    xor         eax, eax
    mov         edi, Buffer
    mov         edx, ecx
    shr         ecx, 2
    and         edx, 3
    rep         stosd
    mov         ecx, edx
    rep         stosb
Exit:
  }
}

