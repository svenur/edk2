;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EfiSetMemRep8.asm
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
EfiCommonLibSetMem   PROC    USES    rdi rbx
    cmp     rdx, 0                      ; if Size == 0, do nothing
    je      @SetDone
    mov     rax, r8
    mov     bl,  al
    mov     bh,  bl
    mov     ax,  bx
    shl     rax, 10h
    mov     ax,  bx
    mov     ebx, eax 
    shl     rax, 20h
    mov     eax, ebx
    mov     rdi, rcx
    mov     rcx, rdx
    shr     rcx, 3
    rep     stosq
    mov     rcx, rdx
    and     rcx, 7
    rep     stosb
@SetDone:
    ret
EfiCommonLibSetMem   ENDP

    END

