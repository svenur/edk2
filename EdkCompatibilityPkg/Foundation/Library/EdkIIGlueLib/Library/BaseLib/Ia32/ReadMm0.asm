;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm0.Asm
;
; Abstract:
;
;   AsmReadMm0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586
    .model  flat,C
    .mmx
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm0 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm0  PROC
    push    eax
    push    eax
    movq    [esp], mm0
    pop     eax
    pop     edx
    ret
AsmReadMm0  ENDP

    END
