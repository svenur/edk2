;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386
    .model  flat,C
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
