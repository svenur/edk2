;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr1.Asm
;
; Abstract:
;
;   AsmWriteDr1 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr1 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr1 PROC
    mov     eax, [esp + 4]
    mov     dr1, eax
    ret
AsmWriteDr1 ENDP

    END
