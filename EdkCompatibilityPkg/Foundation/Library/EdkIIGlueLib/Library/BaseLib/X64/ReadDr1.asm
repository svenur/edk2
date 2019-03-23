; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr1.Asm
;
; Abstract:
;
;   AsmReadDr1 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr1 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr1  PROC
    mov     rax, dr1
    ret
AsmReadDr1  ENDP

    END
