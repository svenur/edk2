;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SetJump.Asm
;
; Abstract:
;
;   Implementation of SetJump() on IA-32.
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

InternalAssertJumpBuffer    PROTO   C

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; SetJump (
;   OUT     BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer
;   );
;------------------------------------------------------------------------------
SetJump     PROC
    push    [esp + 4]
    call    InternalAssertJumpBuffer    ; To validate JumpBuffer
    pop     ecx
    pop     ecx                         ; ecx <- return address
    mov     edx, [esp]
    mov     [edx], ebx
    mov     [edx + 4], esi
    mov     [edx + 8], edi
    mov     [edx + 12], ebp
    mov     [edx + 16], esp
    mov     [edx + 20], ecx             ; eip value to restore in LongJump
    xor     eax, eax
    jmp     ecx
SetJump     ENDP

    END
