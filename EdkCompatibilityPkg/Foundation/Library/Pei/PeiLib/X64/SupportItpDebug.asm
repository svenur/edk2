;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SupportItpDebug.asm
; 
; Abstract:
; 
;   This is the code for debuging X64, to add a break hook at loading every module
;
;------------------------------------------------------------------------------

; PROC:PRIVATE
  .CODE

;------------------------------------------------------------------------------
;  VOID
;  AsmEfiSetBreakSupport (
;    IN UINTN  LoadAddr    // rcx
;    )
;------------------------------------------------------------------------------

AsmEfiSetBreakSupport  PROC    PUBLIC

    mov dx,  60000
    out dx,  eax
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    ret
    
AsmEfiSetBreakSupport  ENDP
  END

