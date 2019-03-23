;*****************************************************************************
;*
;*   Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
;*   SPDX-License-Identifier: BSD-2-Clause-Patent
;*   
;*   Module Name:
;*
;*    Fx.asm
;*  
;*   Abstract:
;*  
;*    AsmFxRestore and AsmFxSave function
;*  
;*****************************************************************************

    .code

;------------------------------------------------------------------------------
; VOID
; AsmFxSave (
;   OUT IA32_FX_BUFFER *Buffer
;   );
;------------------------------------------------------------------------------
AsmFxSave PROC
    fxsave  [rcx]
    ret
AsmFxSave ENDP

;------------------------------------------------------------------------------
; VOID
; AsmFxRestore (
;   IN CONST IA32_FX_BUFFER *Buffer
;   );
;------------------------------------------------------------------------------
AsmFxRestore  PROC
    fxrstor [rcx]
    ret
AsmFxRestore  ENDP

;------------------------------------------------------------------------------
; UINTN
; AsmGetEflags (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmGetEflags PROC
    pushfq
    pop   rax
    ret
AsmGetEflags ENDP

;------------------------------------------------------------------------------
; VOID
; AsmSetEflags (
;   IN UINTN   Eflags
;   );
;------------------------------------------------------------------------------
AsmSetEflags PROC
    push  rcx
    popfq
    ret
AsmSetEflags ENDP

    END
