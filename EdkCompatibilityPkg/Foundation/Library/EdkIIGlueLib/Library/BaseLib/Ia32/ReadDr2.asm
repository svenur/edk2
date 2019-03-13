;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr2  PROC
    mov     eax, dr2
    ret
AsmReadDr2  ENDP

    END
