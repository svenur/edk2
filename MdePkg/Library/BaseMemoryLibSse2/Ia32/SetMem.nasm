;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
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
;   SetMem.nasm
;
; Abstract:
;
;   SetMem function
;
; Notes:
;
;------------------------------------------------------------------------------

%pragma macho subsections_via_symbols

    SECTION .text

;------------------------------------------------------------------------------
;  VOID *
;  EFIAPI
;  InternalMemSetMem (
;    IN VOID   *Buffer,
;    IN UINTN  Count,
;    IN UINT8  Value
;    );
;------------------------------------------------------------------------------
global ASM_PFX(InternalMemSetMem)
ASM_PFX(InternalMemSetMem):
    push    edi
    mov     edx, [esp + 12]             ; edx <- Count
    mov     edi, [esp + 8]              ; edi <- Buffer
    mov     al, [esp + 16]              ; al <- Value
    xor     ecx, ecx
    sub     ecx, edi
    and     ecx, 15                     ; ecx + edi aligns on 16-byte boundary
    jz      L_0
    cmp     ecx, edx
    cmova   ecx, edx
    sub     edx, ecx
    rep     stosb
L_0:
    mov     ecx, edx
    and     edx, 15
    shr     ecx, 4                      ; ecx <- # of DQwords to set
    jz      L_SetBytes
    mov     ah, al                      ; ax <- Value | (Value << 8)
    add     esp, -16
    movdqu  [esp], xmm0                 ; save xmm0
    movd    xmm0, eax
    pshuflw xmm0, xmm0, 0               ; xmm0[0..63] <- Value repeats 8 times
    movlhps xmm0, xmm0                  ; xmm0 <- Value repeats 16 times
L_1:
    movntdq [edi], xmm0                 ; edi should be 16-byte aligned
    add     edi, 16
    loop    L_1
    mfence
    movdqu  xmm0, [esp]                 ; restore xmm0
    add     esp, 16                     ; stack cleanup
L_SetBytes:
    mov     ecx, edx
    rep     stosb
    mov     eax, [esp + 8]              ; eax <- Buffer as return value
    pop     edi
    ret

