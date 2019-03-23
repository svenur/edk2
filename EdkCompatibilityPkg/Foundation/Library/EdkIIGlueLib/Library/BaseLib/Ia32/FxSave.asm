;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   FxSave.Asm
;
; Abstract:
;
;   AsmFxSave function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586
    .model  flat,C
    .xmm
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86FxSave (
;   OUT IA32_FX_BUFFER *Buffer
;   );
;------------------------------------------------------------------------------
InternalX86FxSave PROC
    mov     eax, [esp + 4]              ; Buffer must be 16-byte aligned
    fxsave  [eax]
    ret
InternalX86FxSave ENDP

    END
