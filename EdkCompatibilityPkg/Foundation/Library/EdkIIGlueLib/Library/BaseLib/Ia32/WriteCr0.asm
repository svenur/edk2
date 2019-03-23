;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteCr0 (
;   UINTN  Cr0
;   );
;------------------------------------------------------------------------------
AsmWriteCr0 PROC
    mov     eax, [esp + 4]
    mov     cr0, eax
    ret
AsmWriteCr0 ENDP

    END
