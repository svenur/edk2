;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   memsetRep8.asm
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
; memset (
;   OUT     VOID                      *Buffer,
;   IN      UINT8                     Value,
;   IN      UINTN                     Length
;   );
;------------------------------------------------------------------------------
memset   PROC    USES    rdi rbx
    cmp     r8, 0                      ; if Size == 0, do nothing
    mov     r9,  rcx
    je      @SetDone
    mov     rax, rdx
    mov     bl,  al
    mov     bh,  bl
    mov     ax,  bx
    shl     rax, 10h
    mov     ax,  bx
    mov     ebx, eax
    shl     rax, 20h
    mov     eax, ebx
    mov     rdi, rcx
    mov     rcx, r8
    shr     rcx, 3
    rep     stosq
    mov     rcx, rdx
    and     rcx, 7
    rep     stosb
@SetDone:
    mov     rax, r9
    ret
memset   ENDP

    END

