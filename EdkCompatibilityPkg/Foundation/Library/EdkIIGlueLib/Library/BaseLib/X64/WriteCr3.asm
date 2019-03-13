; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteCr3.Asm
;
; Abstract:
;
;   AsmWriteCr3 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr3 (
;   UINTN  Cr3
;   );
;------------------------------------------------------------------------------
AsmWriteCr3 PROC
    mov     cr3, rcx
    mov     rax, rcx
    ret
AsmWriteCr3 ENDP

    END
