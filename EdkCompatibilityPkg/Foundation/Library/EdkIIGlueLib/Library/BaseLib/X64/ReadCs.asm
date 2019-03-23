; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadCs.Asm
;
; Abstract:
;
;   AsmReadCs function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT16
; EFIAPI
; AsmReadCs (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCs   PROC
    mov     eax, cs
    ret
AsmReadCs   ENDP

    END
