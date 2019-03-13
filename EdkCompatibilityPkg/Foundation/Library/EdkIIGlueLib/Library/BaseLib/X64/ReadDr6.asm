; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr6.Asm
;
; Abstract:
;
;   AsmReadDr6 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr6 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr6  PROC
    mov     rax, dr6
    ret
AsmReadDr6  ENDP

    END
