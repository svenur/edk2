; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuPause.Asm
;
; Abstract:
;
;   CpuPause function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuPause (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuPause    PROC
    pause
    ret
CpuPause    ENDP

    END
