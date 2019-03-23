;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   MultU64x32.asm
;
; Abstract:
;
;   Calculate the product of a 64-bit integer and a 32-bit integer
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathMultU64x32 (
;   IN      UINT64                    Multiplicand,
;   IN      UINT32                    Multiplier
;   );
;------------------------------------------------------------------------------
InternalMathMultU64x32  PROC
    mov     ecx, [esp + 12]
    mov     eax, ecx
    imul    ecx, [esp + 8]              ; overflow not detectable
    mul     dword ptr [esp + 4]
    add     edx, ecx
    ret
InternalMathMultU64x32  ENDP

    END
