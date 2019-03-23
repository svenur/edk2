;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SetMem64.Asm
;
; Abstract:
;
;   SetMem64 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
;  VOID *
;  InternalMemSetMem64 (
;    IN VOID   *Buffer,
;    IN UINTN  Count,
;    IN UINT64 Value
;    )
;------------------------------------------------------------------------------
InternalMemSetMem64 PROC    USES    edi
    mov     ecx, [esp + 12]
    mov     eax, [esp + 16]
    mov     edx, [esp + 20]
    mov     edi, [esp + 8]
@@:
    mov     [edi + ecx*8 - 8], eax
    mov     [edi + ecx*8 - 4], edx
    loop    @B
    mov     eax, edi
    ret
InternalMemSetMem64 ENDP

    END
