;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386
    .model  flat,C
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
