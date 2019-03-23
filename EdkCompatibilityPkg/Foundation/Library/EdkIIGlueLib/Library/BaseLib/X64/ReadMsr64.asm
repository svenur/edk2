; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadMsr64 (
;   IN UINT32  Index
;   );
;------------------------------------------------------------------------------
AsmReadMsr64    PROC
    rdmsr                               ; edx & eax are zero extended
    shl     rdx, 20h
    or      rax, rdx
    ret
AsmReadMsr64    ENDP

    END
