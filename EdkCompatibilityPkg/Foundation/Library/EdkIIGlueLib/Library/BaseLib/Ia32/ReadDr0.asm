;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr0 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr0  PROC
    mov     eax, dr0
    ret
AsmReadDr0  ENDP

    END
