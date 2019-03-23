; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadGs.Asm
;
; Abstract:
;
;   AsmReadGs function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT16
; EFIAPI
; AsmReadGs (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadGs   PROC
    mov     eax, gs
    ret
AsmReadGs   ENDP

    END
