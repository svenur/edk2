;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   Invd.Asm
;
; Abstract:
;
;   AsmInvd function
;
; Notes:
;
;------------------------------------------------------------------------------

    .486p
    .model  flat
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; AsmInvd (
;   VOID
;   );
;------------------------------------------------------------------------------
_AsmInvd    PROC
    invd
    ret
_AsmInvd    ENDP

    END
