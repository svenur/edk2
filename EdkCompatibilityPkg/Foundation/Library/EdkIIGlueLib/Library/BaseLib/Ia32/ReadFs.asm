;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadFs.Asm
;
; Abstract:
;
;   AsmReadFs function
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
; AsmReadFs (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadFs   PROC
    mov     eax, fs
    ret
AsmReadFs   ENDP

    END
