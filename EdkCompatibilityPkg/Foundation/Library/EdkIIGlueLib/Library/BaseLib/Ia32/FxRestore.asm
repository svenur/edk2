;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   FxRestore.Asm
;
; Abstract:
;
;   AsmFxRestore function
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
; InternalX86FxRestore (
;   IN CONST IA32_FX_BUFFER *Buffer
;   );
;------------------------------------------------------------------------------
InternalX86FxRestore  PROC
    mov     eax, [esp + 4]              ; Buffer must be 16-byte aligned
    fxrstor [eax]
    ret
InternalX86FxRestore  ENDP

    END
