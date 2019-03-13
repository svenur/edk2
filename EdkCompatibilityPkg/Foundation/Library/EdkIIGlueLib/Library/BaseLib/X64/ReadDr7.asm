; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr7.Asm
;
; Abstract:
;
;   AsmReadDr7 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr7 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr7  PROC
    mov     rax, dr7
    ret
AsmReadDr7  ENDP

    END
