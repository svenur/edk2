;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadIdtr.Asm
;
; Abstract:
;
;   AsmReadIdtr function
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
; InternalX86ReadIdtr (
;   OUT     IA32_DESCRIPTOR           *Idtr
;   );
;------------------------------------------------------------------------------
InternalX86ReadIdtr PROC
    mov     eax, [esp + 4]
    sidt    fword ptr [eax]
    ret
InternalX86ReadIdtr ENDP

    END
