;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr7.Asm
;
; Abstract:
;
;   AsmWriteDr7 function
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
; AsmWriteDr7 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr7 PROC
    mov     eax, [esp + 4]
    mov     dr7, eax
    ret
AsmWriteDr7 ENDP

    END
