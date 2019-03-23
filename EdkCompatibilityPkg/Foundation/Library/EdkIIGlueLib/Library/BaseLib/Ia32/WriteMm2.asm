;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteMm2.Asm
;
; Abstract:
;
;   AsmWriteMm2 function
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
; AsmWriteMm2 (
;   IN UINT64   Value
;   );
;------------------------------------------------------------------------------
AsmWriteMm2 PROC
    movq    mm2, [esp + 4]
    ret
AsmWriteMm2 ENDP

    END
