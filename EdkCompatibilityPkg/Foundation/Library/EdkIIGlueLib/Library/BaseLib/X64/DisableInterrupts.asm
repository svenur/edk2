; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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
