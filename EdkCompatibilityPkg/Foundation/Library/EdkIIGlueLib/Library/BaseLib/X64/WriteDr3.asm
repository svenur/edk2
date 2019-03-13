; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr3 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr3 PROC
    mov     dr3, rcx
    mov     rax, rcx
    ret
AsmWriteDr3 ENDP

    END
