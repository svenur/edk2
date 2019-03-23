;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586p
    .model  flat,C
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
    mov     edx, [esp + 12]
    mov     eax, [esp + 8]
    mov     ecx, [esp + 4]
    wrmsr
    ret
AsmWriteMsr64   ENDP

    END
