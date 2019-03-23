; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86FxSave (
;   OUT IA32_FX_BUFFER *Buffer
;   );
;------------------------------------------------------------------------------
InternalX86FxSave PROC
    fxsave  [rcx]
    ret
InternalX86FxSave ENDP

    END
