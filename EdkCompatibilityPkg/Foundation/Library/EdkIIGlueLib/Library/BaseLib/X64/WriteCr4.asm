; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteCr4.Asm
;
; Abstract:
;
;   AsmWriteCr4 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr4 (
;   UINTN  Cr4
;   );
;------------------------------------------------------------------------------
AsmWriteCr4 PROC
    mov     cr4, rcx
    mov     rax, rcx
    ret
AsmWriteCr4 ENDP

    END
