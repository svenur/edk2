; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   x86LocalApicTimerInitialize.Asm
;
; Abstract:
;
;   Initialize Local Apic Timer
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

EXTERNDEF  InternalX86GetApicBase:PROC

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuInitLocalApicTimer (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuInitLocalApicTimer    PROC
    sub rsp, 28h  ;Reserve home addresses and make RSP 16-byte aligned
    call InternalX86GetApicBase
    add rsp, 28h
    mov dword ptr [rax + 3e0h], 0ah
    bts dword ptr [rax + 320h], 17
    mov dword ptr [rax + 380h], -1
    ret
CpuInitLocalApicTimer    ENDP

    END
