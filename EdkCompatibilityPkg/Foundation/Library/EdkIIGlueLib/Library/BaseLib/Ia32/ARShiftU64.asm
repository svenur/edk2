;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ARShiftU64.asm
;
; Abstract:
;
;   64-bit arithmetic right shift function for IA-32
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathARShiftU64 (
;   IN      UINT64                    Operand,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
InternalMathARShiftU64  PROC
    mov     cl, [esp + 12]
    mov     eax, [esp + 8]
    cdq
    test    cl, 32
    cmovz   edx, eax
    cmovz   eax, [esp + 4]
    shrd    eax, edx, cl
    sar     edx, cl
    ret
InternalMathARShiftU64  ENDP

    END
