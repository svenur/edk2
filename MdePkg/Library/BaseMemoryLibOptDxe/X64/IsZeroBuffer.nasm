;------------------------------------------------------------------------------
;
; Copyright (c) 2016 - 2018, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http://opensource.org/licenses/bsd-license.php.
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
; Module Name:
;
;   IsZeroBuffer.nasm
;
; Abstract:
;
;   IsZeroBuffer function
;
; Notes:
;
;------------------------------------------------------------------------------

%pragma macho subsections_via_symbols

    DEFAULT REL
    SECTION .text

;------------------------------------------------------------------------------
;  BOOLEAN
;  EFIAPI
;  InternalMemIsZeroBuffer (
;    IN CONST VOID  *Buffer,
;    IN UINTN       Length
;    );
;------------------------------------------------------------------------------
global ASM_PFX(InternalMemIsZeroBuffer)
ASM_PFX(InternalMemIsZeroBuffer):
    push    rdi
    mov     rdi, rcx                   ; rdi <- Buffer
    mov     rcx, rdx                   ; rcx <- Length
    shr     rcx, 3                     ; rcx <- number of qwords
    and     rdx, 7                     ; rdx <- number of trailing bytes
    xor     rax, rax                   ; rax <- 0, also set ZF
    repe    scasq
    jnz     L_ReturnFalse               ; ZF=0 means non-zero element found
    mov     rcx, rdx
    repe    scasb
    jnz     L_ReturnFalse
    pop     rdi
    mov     rax, 1                     ; return TRUE
    ret
L_ReturnFalse:
    pop     rdi
    xor     rax, rax
    ret                                ; return FALSE

