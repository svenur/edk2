; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteCr0.Asm
;
; Abstract:
;
;   AsmWriteCr0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr0 (
;   UINTN  Cr0
;   );
;------------------------------------------------------------------------------
AsmWriteCr0 PROC
    mov     cr0, rcx
    mov     rax, rcx
    ret
AsmWriteCr0 ENDP

    END
