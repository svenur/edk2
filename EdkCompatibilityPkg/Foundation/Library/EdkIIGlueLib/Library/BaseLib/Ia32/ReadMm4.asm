;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm4.Asm
;
; Abstract:
;
;   AsmReadMm4 function
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
; AsmReadMm4 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm4  PROC
    push    eax
    push    eax
    movq    [esp], mm4
    pop     eax
    pop     edx
    ret
AsmReadMm4  ENDP

    END
