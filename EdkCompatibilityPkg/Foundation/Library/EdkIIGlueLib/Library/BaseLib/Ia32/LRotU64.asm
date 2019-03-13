;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   LRotU64.asm
;
; Abstract:
;
;   64-bit left rotation for Ia32
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathLRotU64 (
;   IN      UINT64                    Operand,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
InternalMathLRotU64 PROC    USES    ebx
    mov     cl, [esp + 16]
    mov     edx, [esp + 12]
    mov     eax, [esp + 8]
    shld    ebx, edx, cl
    shld    edx, eax, cl
    ror     ebx, cl
    shld    eax, ebx, cl
    test    cl, 32                      ; Count >= 32?
    cmovnz  ecx, eax
    cmovnz  eax, edx
    cmovnz  edx, ecx
    ret
InternalMathLRotU64 ENDP

    END
