;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteGdtr.Asm
;
; Abstract:
;
;   AsmWriteGdtr function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86WriteGdtr (
;   IN      CONST IA32_DESCRIPTOR     *Idtr
;   );
;------------------------------------------------------------------------------
InternalX86WriteGdtr  PROC
    mov     eax, [esp + 4]
    lgdt    fword ptr [eax]
    ret
InternalX86WriteGdtr  ENDP

    END
