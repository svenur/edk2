;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   DivError.asm
;
; Abstract:
;
;   Set error flag for all division functions
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathDivRemU64x32 (
;   IN      UINT64                    Dividend,
;   IN      UINT32                    Divisor,
;   OUT     UINT32                    *Remainder
;   );
;------------------------------------------------------------------------------
InternalMathDivRemU64x32    PROC
    mov     ecx, [esp + 12]         ; ecx <- divisor
    mov     eax, [esp + 8]          ; eax <- dividend[32..63]
    xor     edx, edx
    div     ecx                     ; eax <- quotient[32..63], edx <- remainder
    push    eax
    mov     eax, [esp + 8]          ; eax <- dividend[0..31]
    div     ecx                     ; eax <- quotient[0..31]
    mov     ecx, [esp + 20]         ; ecx <- Remainder
    jecxz   @F                      ; abandon remainder if Remainder == NULL
    mov     [ecx], edx
@@:
    pop     edx                     ; edx <- quotient[32..63]
    ret
InternalMathDivRemU64x32    ENDP

    END
