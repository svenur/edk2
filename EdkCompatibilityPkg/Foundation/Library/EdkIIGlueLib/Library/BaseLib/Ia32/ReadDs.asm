;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDs.Asm
;
; Abstract:
;
;   AsmReadDs function
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
; AsmReadDs (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDs   PROC
    mov     eax, ds
    ret
AsmReadDs   ENDP

    END
