;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EfiSetMemRep4.asm
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
; VOID
; EfiCommonLibSetMem (
;   OUT     VOID                      *Buffer,
;   IN      UINTN                     Size,
;   IN      UINT8                     Value
;   );
;------------------------------------------------------------------------------
EfiCommonLibSetMem   PROC    USES    rdi
    cmp     rdx, 0                      ; if Size == 0, do nothing
    je      @SetDone
    mov     rdi, rcx
    mov     al,  r8b
    mov     ah,  al
    shrd    ecx, eax, 16
    shld    eax, ecx, 16
    mov     rcx, rdx
    shr     rcx, 2
    rep     stosd
    mov     rcx, rdx
    and     rcx, 3
    rep     stosb
@SetDone:
    ret
EfiCommonLibSetMem   ENDP

    END

