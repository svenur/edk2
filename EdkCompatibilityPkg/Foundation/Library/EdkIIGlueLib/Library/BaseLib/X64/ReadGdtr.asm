; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86ReadGdtr (
;   OUT IA32_DESCRIPTOR  *Gdtr
;   );
;------------------------------------------------------------------------------
InternalX86ReadGdtr   PROC
    sgdt    fword ptr [rcx]
    ret
InternalX86ReadGdtr   ENDP

    END
