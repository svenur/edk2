; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr3.Asm
;
; Abstract:
;
;   AsmReadDr3 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr3 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr3  PROC
    mov     rax, dr3
    ret
AsmReadDr3  ENDP

    END
