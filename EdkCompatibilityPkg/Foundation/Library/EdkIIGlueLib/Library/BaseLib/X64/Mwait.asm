; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   Mwait.Asm
;
; Abstract:
;
;   AsmMwait function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmMwait (
;   IN      UINTN                     Eax,
;   IN      UINTN                     Ecx
;   );
;------------------------------------------------------------------------------
AsmMwait    PROC
    mov     eax, ecx
    mov     ecx, edx
    DB      0fh, 1, 0c9h                ; mwait
    ret
AsmMwait    ENDP

    END
