;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm6.Asm
;
; Abstract:
;
;   AsmReadMm6 function
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
; AsmReadMm6 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm6  PROC
    push    eax
    push    eax
    movq    [esp], mm6
    pop     eax
    pop     edx
    ret
AsmReadMm6  ENDP

    END
