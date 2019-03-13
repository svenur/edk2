; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; EnableDisableInterrupts (
;   VOID
;   );
;------------------------------------------------------------------------------
EnableDisableInterrupts PROC
    sti
    cli
    ret
EnableDisableInterrupts ENDP

    END
