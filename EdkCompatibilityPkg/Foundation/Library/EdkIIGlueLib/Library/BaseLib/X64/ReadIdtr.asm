; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86ReadIdtr (
;   OUT     IA32_DESCRIPTOR           *Idtr
;   );
;------------------------------------------------------------------------------
InternalX86ReadIdtr   PROC
    sidt    fword ptr [rcx]
    ret
InternalX86ReadIdtr   ENDP

    END
