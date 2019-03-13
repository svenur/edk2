;/*++
;
;Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
;SPDX-License-Identifier: BSD-2-Clause-Patent
;
;Module Name:
;
  ;EfiSetMemRep4.c
;
;Abstract:
;
  ;This is the code that uses rep stosd SetMem service
;
;--*/
;
;---------------------------------------------------------------------------
    .686
    .model  flat,C
    .code

;---------------------------------------------------------------------------
;#include "Tiano.h"
;
;VOID
;EfiCommonLibSetMem (
  ;IN VOID   *Buffer,
  ;IN UINTN  Count,
  ;IN UINT8  Value
  ;)
;/*++
;
;Input:  VOID   *Buffer - Pointer to buffer to write
        ;UINTN  Count   - Number of bytes to write
        ;UINT8  Value   - Value to write
;
;Output: None.
;
;Saves:
;
;Modifies:
;
;Description:  This function uses rep stosd to set memory.
;
;--*/
EfiCommonLibSetMem PROC
    push        ebp
    mov         ebp,esp
    push        edi
    mov         ecx,dword ptr [ebp+0Ch]
    test        ecx, ecx
    je          Exit
    mov         al,byte ptr [ebp+10h]
    mov         ah,  al
    shrd        edx, eax, 16
    shld        eax, edx, 16
    mov         edx, ecx
    mov         edi,dword ptr [ebp+8]
    shr         ecx, 2
    rep stosd
    mov         ecx, edx
    and         ecx, 3
    rep stosb
Exit:
    pop         edi
    pop         ebp
    ret

EfiCommonLibSetMem ENDP
	END
