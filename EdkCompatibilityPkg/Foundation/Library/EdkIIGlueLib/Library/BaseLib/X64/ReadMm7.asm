; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm7.Asm
;
; Abstract:
;
;   AsmReadMm7 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm7 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm7  PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 7eh, 0f8h
    ret
AsmReadMm7  ENDP

    END
