; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadTr.Asm
;
; Abstract:
;
;   AsmReadTr function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT16
; EFIAPI
; AsmReadTr (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadTr   PROC
    str     eax
    ret
AsmReadTr   ENDP

    END
