; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuFlushTlb.Asm
;
; Abstract:
;
;   CpuFlushTlb function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuFlushTlb (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuFlushTlb PROC
    mov     rax, cr3
    mov     cr3, rax
    ret
CpuFlushTlb ENDP

    END
