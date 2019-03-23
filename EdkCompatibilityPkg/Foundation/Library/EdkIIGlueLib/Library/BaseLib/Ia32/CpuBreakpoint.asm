;------------------------------------------------------------------------------ ;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .686
    .model  flat
    .xmm
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuBreakpoint (
;   VOID
;   );
;------------------------------------------------------------------------------
_CpuBreakpoint   PROC
    int  3
    ret
_CpuBreakpoint   ENDP

    END
