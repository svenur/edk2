;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmReadEflags (
;   VOID
;   );
;------------------------------------------------------------------------------
AsmReadEflags   PROC
    pushfd
    pop     eax
    ret
AsmReadEflags   ENDP

    END
