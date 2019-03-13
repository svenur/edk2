;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   LShiftU64.asm
;
; Abstract:
;
;   64-bit left shift function for IA-32
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathLShiftU64 (
;   IN      UINT64                    Operand,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
InternalMathLShiftU64   PROC
    mov     cl, [esp + 12]
    xor     eax, eax
    mov     edx, [esp + 4]
    test    cl, 32                      ; Count >= 32?
    cmovz   eax, edx
    cmovz   edx, [esp + 8]
    shld    edx, eax, cl
    shl     eax, cl
    ret
InternalMathLShiftU64   ENDP

    END
