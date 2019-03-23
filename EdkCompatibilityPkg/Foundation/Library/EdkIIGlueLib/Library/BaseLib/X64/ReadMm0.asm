; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMm0.Asm
;
; Abstract:
;
;   AsmReadMm0 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMm0 (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadMm0  PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 7eh, 0c0h
    ret
AsmReadMm0  ENDP

    END
