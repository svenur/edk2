; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   WriteDr5.Asm
;
; Abstract:
;
;   AsmWriteDr5 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmWriteDr6 (
;   IN UINTN Value
;   );
;------------------------------------------------------------------------------
AsmWriteDr5 PROC
    ;
    ; There's no obvious reason to access this register, since it's aliased to
    ; DR7 when DE=0 or an exception generated when DE=1
    ;
    DB      0fh, 23h, 0e9h
    mov     rax, rcx
    ret
AsmWriteDr5 ENDP

    END
