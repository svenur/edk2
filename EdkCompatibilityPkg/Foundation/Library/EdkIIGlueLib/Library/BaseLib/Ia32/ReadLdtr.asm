;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadLdtr.Asm
;
; Abstract:
;
;   AsmReadLdtr function
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
; AsmReadLdtr (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadLdtr PROC
    sldt    ax
    ret
AsmReadLdtr ENDP

    END
