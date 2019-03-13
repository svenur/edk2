;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   memsetRep1.asm
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
; VOID *
; memset (
;   OUT     VOID                      *Buffer,
;   IN      UINTN                     Size,
;   IN      UINT8                     Value
;   );
;------------------------------------------------------------------------------
memset   PROC    USES    rdi
    cmp     rdx, 0                      ; if Size == 0, do nothing
    mov     r9,  rcx
    je      @SetDone
    mov     rax, r8
    mov     rdi, rcx
    mov     rcx, rdx
    rep     stosb
@SetDone:
    mov     rax, r9
    ret
memset   ENDP

    END

