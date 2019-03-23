; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuSleep.Asm
;
; Abstract:
;
;   CpuSleep function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuSleep (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuSleep    PROC
    hlt
    ret
CpuSleep    ENDP

    END
