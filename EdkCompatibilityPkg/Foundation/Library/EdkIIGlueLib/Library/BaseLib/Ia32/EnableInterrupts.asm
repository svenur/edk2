;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386p
    .model  flat
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; EnableInterrupts (
;   VOID
;   );
;------------------------------------------------------------------------------
_EnableInterrupts   PROC
    sti
    ret
_EnableInterrupts   ENDP

    END
