; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr7 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr7 PROC
    mov     dr7, rcx
    mov     rax, rcx
    ret
AsmWriteDr7 ENDP

    END
