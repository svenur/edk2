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

    .386
    .model  flat,C
    .code

InternalX86GetApicBase    PROTO   C

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; CpuInitLocalApicTimer (
;   VOID
;   );
;------------------------------------------------------------------------------
CpuInitLocalApicTimer    PROC
    call InternalX86GetApicBase
    mov dword ptr ds:[eax + 3e0h], 0ah
    bts dword ptr ds:[eax + 320h], 17
    mov dword ptr ds:[eax + 380h], -1
    ret
CpuInitLocalApicTimer    ENDP

    END
