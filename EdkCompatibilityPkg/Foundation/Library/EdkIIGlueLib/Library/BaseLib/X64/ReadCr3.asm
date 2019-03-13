; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadCr3.Asm
;
; Abstract:
;
;   AsmReadCr3 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadCr3 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCr3  PROC
    mov     rax, cr3
    ret
AsmReadCr3  ENDP

    END
