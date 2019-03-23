; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteMm1.Asm
;
; Abstract:
;
;   AsmWriteMm1 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmWriteMm1 (
;   IN UINT64   Value
;   );
;------------------------------------------------------------------------------
AsmWriteMm1 PROC
    ;
    ; 64-bit MASM doesn't support MMX instructions, so use opcode here
    ;
    DB      48h, 0fh, 6eh, 0c9h
    ret
AsmWriteMm1 ENDP

    END
