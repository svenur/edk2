; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadCr0.Asm
;
; Abstract:
;
;   AsmReadCr0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadCr0 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadCr0  PROC
    mov     rax, cr0
    ret
AsmReadCr0  ENDP

    END
