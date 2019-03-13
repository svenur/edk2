;------------------------------------------------------------------------------ ;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .386
    .model  flat,C
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
