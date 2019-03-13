;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SetMem16.Asm
;
; Abstract:
;
;   SetMem16 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
;  VOID *
;  InternalMemSetMem16 (
;    IN VOID   *Buffer,
;    IN UINTN  Count,
;    IN UINT16 Value
;    )
;------------------------------------------------------------------------------
InternalMemSetMem16 PROC    USES    edi
    mov     eax, [esp + 16]
    mov     edi, [esp + 8]
    mov     ecx, [esp + 12]
    rep     stosw
    mov     eax, [esp + 8]
    ret
InternalMemSetMem16 ENDP

    END
