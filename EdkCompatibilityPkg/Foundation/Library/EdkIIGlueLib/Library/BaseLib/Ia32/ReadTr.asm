;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT16
; EFIAPI
; AsmReadTr (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadTr   PROC
    str     ax
    ret
AsmReadTr   ENDP

    END
