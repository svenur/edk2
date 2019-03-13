;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EnableDisableInterrupts.Asm
;
; Abstract:
;
;   EnableDisableInterrupts function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386p
    .model  flat
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; EnableDisableInterrupts (
;   VOID
;   );
;------------------------------------------------------------------------------
_EnableDisableInterrupts    PROC
    sti
    cli
    ret
_EnableDisableInterrupts    ENDP

    END
