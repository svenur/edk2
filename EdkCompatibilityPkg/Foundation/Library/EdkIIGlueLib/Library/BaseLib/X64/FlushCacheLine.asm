; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   FlushCacheLine.Asm
;
; Abstract:
;
;   AsmFlushCacheLine function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID *
; EFIAPI 
; AsmFlushCacheLine (
;   IN      VOID                      *LinearAddress
;   );
;------------------------------------------------------------------------------
AsmFlushCacheLine   PROC
    clflush [rcx]
    mov     rax, rcx
    ret
AsmFlushCacheLine   ENDP

    END
