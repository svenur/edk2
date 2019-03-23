;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   DisableInterrupts.Asm
;
; Abstract:
;
;   DisableInterrupts function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386p
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; DisableInterrupts (
;   VOID
;   );
;------------------------------------------------------------------------------
DisableInterrupts   PROC
    cli
    ret
DisableInterrupts   ENDP

    END
