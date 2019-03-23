; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr6.Asm
;
; Abstract:
;
;   AsmWriteDr6 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr6 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr6 PROC
    mov     dr6, rcx
    mov     rax, rcx
    ret
AsmWriteDr6 ENDP

    END
