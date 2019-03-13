;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm2.Asm
;
; Abstract:
;
;   AsmReadMm2 function
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
; AsmReadMm2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm2  PROC
    push    eax
    push    eax
    movq    [esp], mm2
    pop     eax
    pop     edx
    ret
AsmReadMm2  ENDP

    END
