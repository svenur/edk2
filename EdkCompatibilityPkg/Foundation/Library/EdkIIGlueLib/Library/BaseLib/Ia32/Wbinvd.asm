;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   Wbinvd.Asm
;
; Abstract:
;
;   AsmWbinvd function
;
; Notes:
;
;------------------------------------------------------------------------------

    .486p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmWbinvd (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmWbinvd   PROC
    wbinvd
    ret
AsmWbinvd   ENDP

    END
