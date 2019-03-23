; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm2.Asm
;
; Abstract:
;
;   AsmReadMm2 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm2 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm2  PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 7eh, 0d0h
    ret
AsmReadMm2  ENDP

    END
