;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr4 (
;   UINTN  Cr4
;   );
;------------------------------------------------------------------------------
AsmWriteCr4 PROC
    mov     eax, [esp + 4]
    mov     cr4, eax
    ret
AsmWriteCr4 ENDP

    END
