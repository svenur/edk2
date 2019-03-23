; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm5.Asm
;
; Abstract:
;
;   AsmReadMm5 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm5 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm5  PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 7eh, 0e8h
    ret
AsmReadMm5  ENDP

    END
