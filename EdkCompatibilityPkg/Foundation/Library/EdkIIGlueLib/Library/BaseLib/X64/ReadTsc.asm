; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadTsc.Asm
;
; Abstract:
;
;   AsmReadTsc function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadTsc (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadTsc  PROC
    rdtsc
    shl     rdx, 20h
    or      rax, rdx
    ret
AsmReadTsc  ENDP

    END
