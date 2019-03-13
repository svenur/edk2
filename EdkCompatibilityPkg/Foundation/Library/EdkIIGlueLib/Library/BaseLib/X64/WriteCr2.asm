; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteCr2.Asm
;
; Abstract:
;
;   AsmWriteCr2 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr2 (
;   UINTN  Cr2
;   );
;------------------------------------------------------------------------------
AsmWriteCr2 PROC
    mov     cr2, rcx
    mov     rax, rcx
    ret
AsmWriteCr2 ENDP

    END
