; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr2.Asm
;
; Abstract:
;
;   AsmWriteDr2 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr2 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr2 PROC
    mov     dr2, rcx
    mov     rax, rcx
    ret
AsmWriteDr2 ENDP

    END
