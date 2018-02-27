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
;   SetMem16.nasm
;
; Abstract:
;
;   SetMem16 function
;
; Notes:
;
;------------------------------------------------------------------------------

%pragma macho subsections_via_symbols

    SECTION .text

;------------------------------------------------------------------------------
;  VOID *
;  EFIAPI
;  InternalMemSetMem16 (
;    IN VOID   *Buffer,
;    IN UINTN  Count,
;    IN UINT16 Value
;    );
;------------------------------------------------------------------------------
global ASM_PFX(InternalMemSetMem16)
ASM_PFX(InternalMemSetMem16):
    push    edi
    mov     edx, [esp + 12]
    mov     edi, [esp + 8]
    xor     ecx, ecx
    sub     ecx, edi
    and     ecx, 15                     ; ecx + edi aligns on 16-byte boundary
    mov     eax, [esp + 16]
    jz      L_0
    shr     ecx, 1
    cmp     ecx, edx
    cmova   ecx, edx
    sub     edx, ecx
    rep     stosw
L_0:
    mov     ecx, edx
    and     edx, 7
    shr     ecx, 3
    jz      L_SetWords
    movd    xmm0, eax
    pshuflw xmm0, xmm0, 0
    movlhps xmm0, xmm0
L_1:
    movntdq [edi], xmm0                 ; edi should be 16-byte aligned
    add     edi, 16
    loop    L_1
    mfence
L_SetWords:
    mov     ecx, edx
    rep     stosw
    mov     eax, [esp + 8]
    pop     edi
    ret

