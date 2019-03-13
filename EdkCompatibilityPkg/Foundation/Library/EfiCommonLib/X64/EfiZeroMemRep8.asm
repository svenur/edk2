;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EfiZeroMemRep8.asm
;
; Abstract:
;
;   ZeroMem function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
;  VOID
;  EfiCommonLibZeroMem (
;    IN VOID   *Buffer,
;    IN UINTN  Size
;    );
;------------------------------------------------------------------------------
EfiCommonLibZeroMem  PROC    USES    rdi
    xor     rax, rax
    mov     rdi, rcx
    mov     rcx, rdx
    shr     rcx, 3
    and     rdx, 7
    rep     stosq
    mov     rcx, rdx
    rep     stosb
    ret
EfiCommonLibZeroMem  ENDP

    END