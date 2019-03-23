;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586
    .model  flat,C
    .mmx
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmWriteMm4 (
;   IN UINT64   Value
;   );
;------------------------------------------------------------------------------
AsmWriteMm4 PROC
    movq    mm4, [esp + 4]
    ret
AsmWriteMm4 ENDP

    END
