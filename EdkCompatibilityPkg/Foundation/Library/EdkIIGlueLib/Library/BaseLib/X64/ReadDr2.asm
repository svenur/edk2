; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr2.Asm
;
; Abstract:
;
;   AsmReadDr2 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr2  PROC
    mov     rax, dr2
    ret
AsmReadDr2  ENDP

    END
