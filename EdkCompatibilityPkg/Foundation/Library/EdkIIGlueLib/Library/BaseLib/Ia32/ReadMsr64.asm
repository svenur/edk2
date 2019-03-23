;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadMsr64.Asm
;
; Abstract:
;
;   AsmReadMsr64 function
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
; AsmReadMsr64 (
;   IN UINT64  Index
;   );
;------------------------------------------------------------------------------
AsmReadMsr64    PROC
    mov     ecx, [esp + 4]
    rdmsr
    ret
AsmReadMsr64    ENDP

    END
