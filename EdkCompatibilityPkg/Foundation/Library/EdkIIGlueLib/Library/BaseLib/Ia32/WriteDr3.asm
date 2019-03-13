;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr3.Asm
;
; Abstract:
;
;   AsmWriteDr3 function
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
; AsmWriteDr3 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr3 PROC
    mov     eax, [esp + 4]
    mov     dr3, eax
    ret
AsmWriteDr3 ENDP

    END
