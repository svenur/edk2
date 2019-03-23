;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadCr2.Asm
;
; Abstract:
;
;   AsmReadCr2 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadCr2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCr2  PROC
    mov     eax, cr2
    ret
AsmReadCr2  ENDP

    END
