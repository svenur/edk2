; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr1 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr1 PROC
    mov     dr1, rcx
    mov     rax, rcx
    ret
AsmWriteDr1 ENDP

    END
