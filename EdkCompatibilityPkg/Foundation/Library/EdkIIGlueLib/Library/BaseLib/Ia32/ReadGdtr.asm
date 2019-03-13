;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadGdtr.Asm
;
; Abstract:
;
;   AsmReadGdtr function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86ReadGdtr (
;   OUT IA32_DESCRIPTOR  *Gdtr
;   );
;------------------------------------------------------------------------------
InternalX86ReadGdtr   PROC
    mov     eax, [esp + 4]
    sgdt    fword ptr [eax]
    ret
InternalX86ReadGdtr   ENDP

    END
