;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINTN
; EFIAPI
; AsmMwait (
;   IN      UINTN                     Eax,
;   IN      UINTN                     Ecx
;   );
;------------------------------------------------------------------------------
AsmMwait    PROC
    mov     eax, [esp + 4]
    mov     ecx, [esp + 8]
    DB      0fh, 1, 0c9h                ; mwait
    ret
AsmMwait    ENDP

    END
