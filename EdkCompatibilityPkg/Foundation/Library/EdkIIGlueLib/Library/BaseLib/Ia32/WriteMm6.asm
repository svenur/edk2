;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteMm6.Asm
;
; Abstract:
;
;   AsmWriteMm6 function
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
; AsmWriteMm6 (
;   IN UINT64   Value
;   );
;------------------------------------------------------------------------------
AsmWriteMm6 PROC
    movq    mm6, [esp + 4]
    ret
AsmWriteMm6 ENDP

    END
