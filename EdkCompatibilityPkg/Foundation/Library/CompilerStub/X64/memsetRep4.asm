;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SetMem.asm
;
; Abstract:
;
;   memset function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
;  VOID *
;  memset (
;    OUT VOID   *Buffer,
;    IN  UINT8  Value,
;    IN  UINTN  Count
;    )
;------------------------------------------------------------------------------
memset   PROC    USES    rdi
    cmp     r8, 0                      ; if Size == 0, do nothing
    mov     r9,  rcx
    je      @SetDone
    mov     al,  dl
    mov     ah,  al
    shrd    edx, eax, 16
    shld    eax, edx, 16
    mov     rdi, rcx
    mov     rcx, r8
    shr     rcx, 2
    rep     stosd
    mov     rcx, r8
    and     rcx, 3
    rep     stosb
@SetDone:
    mov     rax, r9
    ret
memset   ENDP

    END

