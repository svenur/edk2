; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadCr4.Asm
;
; Abstract:
;
;   AsmReadCr4 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadCr4 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCr4  PROC
    mov     rax, cr4
    ret
AsmReadCr4  ENDP

    END
