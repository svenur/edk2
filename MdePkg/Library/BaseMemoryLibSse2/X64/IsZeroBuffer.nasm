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
    push         rdi
    mov          rdi, rcx              ; rdi <- Buffer
    xor          rcx, rcx              ; rcx <- 0
    sub          rcx, rdi
    and          rcx, 15               ; rcx + rdi aligns on 16-byte boundary
    jz           L_Is16BytesZero
    cmp          rcx, rdx              ; Length already in rdx
    cmova        rcx, rdx              ; bytes before the 16-byte boundary
    sub          rdx, rcx
    xor          rax, rax              ; rax <- 0, also set ZF
    repe         scasb
    jnz          L_ReturnFalse          ; ZF=0 means non-zero element found
L_Is16BytesZero:
    mov          rcx, rdx
    and          rdx, 15
    shr          rcx, 4
    jz           L_IsBytesZero
L_0:
    pxor         xmm0, xmm0            ; xmm0 <- 0
    pcmpeqb      xmm0, [rdi]           ; check zero for 16 bytes
    pmovmskb     eax, xmm0             ; eax <- compare results
                                       ; nasm doesn't support 64-bit destination
                                       ; for pmovmskb
    cmp          eax, 0xffff
    jnz          L_ReturnFalse
    add          rdi, 16
    loop         L_0
L_IsBytesZero:
    mov          rcx, rdx
    xor          rax, rax              ; rax <- 0, also set ZF
    repe         scasb
    jnz          L_ReturnFalse          ; ZF=0 means non-zero element found
    pop          rdi
    mov          rax, 1                ; return TRUE
    ret
L_ReturnFalse:
    pop          rdi
    xor          rax, rax
    ret                                ; return FALSE

