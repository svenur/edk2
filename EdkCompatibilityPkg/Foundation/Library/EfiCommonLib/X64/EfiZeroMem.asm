;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ZeroMem.asm
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
;  VOID *
;  EfiCommonLibZeroMem (
;    IN VOID   *Buffer,
;    IN UINTN  Size
;    );
;------------------------------------------------------------------------------
EfiCommonLibZeroMem  PROC    USES    rdi
    mov     rdi, rcx
    mov     rcx, rdx
    mov     r8, rdi
    and     edx, 7
    shr     rcx, 3
    jz      @ZeroBytes
    DB      0fh, 0efh, 0c0h             ; pxor mm0, mm0
@@:
    DB      48h, 0fh, 7eh, 07h          ; movd [rdi], mm0
    add     rdi, 8
    loop    @B
@ZeroBytes:
    xor     eax, eax
    mov     ecx, edx
    rep     stosb
    mov     rax, r8
    ret
EfiCommonLibZeroMem  ENDP

    END
