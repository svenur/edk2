;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   RRotU64.asm
;
; Abstract:
;
;   64-bit right rotation for Ia32
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathRRotU64 (
;   IN      UINT64                    Operand,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
InternalMathRRotU64 PROC    USES    ebx
    mov     cl, [esp + 16]
    mov     eax, [esp + 8]
    mov     edx, [esp + 12]
    shrd    ebx, eax, cl
    shrd    eax, edx, cl
    rol     ebx, cl
    shrd    edx, ebx, cl
    test    cl, 32                      ; Count >= 32?
    cmovnz  ecx, eax                    ; switch eax & edx if Count >= 32
    cmovnz  eax, edx
    cmovnz  edx, ecx
    ret
InternalMathRRotU64 ENDP

    END
