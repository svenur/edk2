; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadEflags.Asm
;
; Abstract:
;
;   AsmReadEflags function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadEflags (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadEflags   PROC
    pushfq
    pop     rax
    ret
AsmReadEflags   ENDP

    END
