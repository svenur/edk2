;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586p
    .model  flat,C
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
    ret
AsmReadTsc  ENDP

    END
