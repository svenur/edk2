;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SetMem.Asm
;
; Abstract:
;
;   SetMem function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
;  VOID *
;  EFIAPI
;  InternalMemSetMem (
;    IN VOID   *Buffer,
;    IN UINTN  Count,
;    IN UINT8  Value
;    )
;------------------------------------------------------------------------------
InternalMemSetMem   PROC    USES    rdi
    mov     rax, r8    ; rax = Value
    mov     rdi, rcx   ; rdi = Buffer
    xchg    rcx, rdx   ; rcx = Count, rdx = Buffer
    rep     stosb
    mov     rax, rdx   ; rax = Buffer
    ret
InternalMemSetMem   ENDP

    END
