; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm1.Asm
;
; Abstract:
;
;   AsmReadMm1 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm1 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm1  PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 7eh, 0c8h
    ret
AsmReadMm1  ENDP

    END
