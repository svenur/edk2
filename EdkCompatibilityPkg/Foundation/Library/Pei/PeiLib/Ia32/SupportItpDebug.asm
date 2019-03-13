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
;   This is the code for debuging IA32, to add a break hook at loading every module
;
;------------------------------------------------------------------------------

; PROC:PRIVATE
  .686P
  .MMX
  .MODEL SMALL
  .CODE

AsmEfiSetBreakSupport  PROTO  C LoadAddr:DWORD

;------------------------------------------------------------------------------
;  VOID
;  AsmEfiSetBreakSupport (
;    IN UINTN  LoadAddr
;    )
;------------------------------------------------------------------------------

AsmEfiSetBreakSupport  PROC  C LoadAddr:DWORD

    mov eax, LoadAddr
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
    ret
    
AsmEfiSetBreakSupport  ENDP
  END
