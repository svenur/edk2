;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   RShiftU64.asm
;
; Abstract:
;
;   64-bit logical right shift function for IA-32
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathRShiftU64 (
;   IN      UINT64                    Operand,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
InternalMathRShiftU64   PROC
    mov     cl, [esp + 12]              ; cl <- Count
    xor     edx, edx
    mov     eax, [esp + 8]
    test    cl, 32                      ; Count >= 32?
    cmovz   edx, eax
    cmovz   eax, [esp + 4]
    shrd    eax, edx, cl
    shr     edx, cl
    ret
InternalMathRShiftU64   ENDP

    END
