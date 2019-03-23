;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteIdt.Asm
;
; Abstract:
;
;   SetIdtBase function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586p
    .model  flat,C
    .mmx
    .code

;------------------------------------------------------------------------------
; void
; SetIdtBase (
;   UINT32  IdtBase,
;   UINT16  IdtLimit 
;   )
;
; Abstract: Set IDTR with the given physical address
;
SetIdtBase      PROC    C PUBLIC IdtBase:DWORD, IdtLimit:WORD
                LOCAL   IdtrBuf:FWORD

                mov     eax, IdtBase
                mov     cx, IdtLimit
                mov     DWORD PTR IdtrBuf + 2, eax                  ; write IDT base address
                mov     WORD  PTR IdtrBuf, cx                        ; write ITD limit
                lidt    FWORD PTR IdtrBuf
                ret
SetIdtBase      ENDP

     END