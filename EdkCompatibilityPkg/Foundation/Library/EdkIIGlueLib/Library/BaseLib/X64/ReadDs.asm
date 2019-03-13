; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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
