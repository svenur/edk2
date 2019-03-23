;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadDr5.Asm
;
; Abstract:
;
;   AsmReadDr5 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadDr5 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadDr5  PROC
    ;
    ; DR5 is alias to DR7 only if DE (in CR4) is cleared. Otherwise, reading
    ; this register will cause a #UD exception.
    ;
    ; MS assembler doesn't support this instruction since no one would use it
    ; under normal circustances. Here opcode is used.
    ;
    DB      0fh, 21h, 0e8h
    ret
AsmReadDr5  ENDP

    END
