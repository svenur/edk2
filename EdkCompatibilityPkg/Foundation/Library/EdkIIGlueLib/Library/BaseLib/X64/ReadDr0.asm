; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr0.Asm
;
; Abstract:
;
;   AsmReadDr0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr0 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr0  PROC
    mov     rax, dr0
    ret
AsmReadDr0  ENDP

    END
