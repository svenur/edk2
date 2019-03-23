; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuBreakpoint.Asm
;
; Abstract:
;
;   CpuBreakpoint function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuBreakpoint (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuBreakpoint   PROC
    int  3
    ret
CpuBreakpoint   ENDP

    END
