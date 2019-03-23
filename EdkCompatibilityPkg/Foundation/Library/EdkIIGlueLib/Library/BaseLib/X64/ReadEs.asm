; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadEs.Asm
;
; Abstract:
;
;   AsmReadEs function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT16
; EFIAPI
; AsmReadEs (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadEs   PROC
    mov     eax, es
    ret
AsmReadEs   ENDP

    END
