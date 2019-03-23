;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteLdtr.Asm
;
; Abstract:
;
;   AsmWriteLdtr function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386p
    .model  flat
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmWriteLdtr (
;   IN UINT16 Ldtr
;   );
;------------------------------------------------------------------------------
_AsmWriteLdtr   PROC
    mov     eax, [esp + 4]
    lldt    ax
    ret
_AsmWriteLdtr   ENDP

    END
