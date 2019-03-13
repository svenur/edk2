; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteMsr64.Asm
;
; Abstract:
;
;   AsmWriteMsr64 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmWriteMsr64 (
;   IN UINT32  Index,
;   IN UINT64  Value
;   );
;------------------------------------------------------------------------------
AsmWriteMsr64   PROC
    mov     rax, rdx                    ; meanwhile, rax <- return value
    shr     rdx, 20h                    ; edx:eax contains the value to write
    wrmsr
    ret
AsmWriteMsr64   ENDP

    END
