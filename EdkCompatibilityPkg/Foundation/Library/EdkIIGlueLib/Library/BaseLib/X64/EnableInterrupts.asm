; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EnableInterrupts.Asm
;
; Abstract:
;
;   EnableInterrupts function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; EnableInterrupts (
;   VOID
;   );
;------------------------------------------------------------------------------
EnableInterrupts    PROC
    sti
    ret
EnableInterrupts    ENDP

    END
