; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadCr2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCr2  PROC
    mov     rax, cr2
    ret
AsmReadCr2  ENDP

    END
