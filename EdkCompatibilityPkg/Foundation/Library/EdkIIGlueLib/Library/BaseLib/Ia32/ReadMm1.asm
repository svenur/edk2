;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm1.Asm
;
; Abstract:
;
;   AsmReadMm1 function
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
; AsmReadMm1 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm1  PROC
    push    eax
    push    eax
    movq    [esp], mm1
    pop     eax
    pop     edx
    ret
AsmReadMm1  ENDP

    END
