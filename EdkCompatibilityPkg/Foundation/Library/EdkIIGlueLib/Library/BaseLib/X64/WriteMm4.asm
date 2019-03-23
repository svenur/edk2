; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteMm4.Asm
;
; Abstract:
;
;   AsmWriteMm4 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmWriteMm4 (
;   IN UINT64   Value
;   );
;------------------------------------------------------------------------------
AsmWriteMm4 PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 6eh, 0e1h
    ret
AsmWriteMm4 ENDP

    END
