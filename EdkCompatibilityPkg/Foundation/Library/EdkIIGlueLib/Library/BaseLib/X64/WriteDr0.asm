; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr0.Asm
;
; Abstract:
;
;   AsmWriteDr0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr0 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr0 PROC
    mov     dr0, rcx
    mov     rax, rcx
    ret
AsmWriteDr0 ENDP

    END
