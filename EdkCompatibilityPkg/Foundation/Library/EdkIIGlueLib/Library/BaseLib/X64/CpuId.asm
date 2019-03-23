; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuId.Asm
;
; Abstract:
;
;   AsmCpuid function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  AsmCpuid (
;    IN   UINT32  RegisterInEax,
;    OUT  UINT32  *RegisterOutEax  OPTIONAL,
;    OUT  UINT32  *RegisterOutEbx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEcx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEdx  OPTIONAL
;    )
;------------------------------------------------------------------------------
AsmCpuid    PROC    USES    rbx
    mov     eax, ecx
    push    rax                         ; save Index on stack
    push    rdx
    cpuid
    test    r9, r9
    jz      @F
    mov     [r9], ecx
@@:
    pop     rcx
    jrcxz   @F
    mov     [rcx], eax
@@:
    mov     rcx, r8
    jrcxz   @F
    mov     [rcx], ebx
@@:
    mov     rcx, [rsp + 38h]
    jrcxz   @F
    mov     [rcx], edx
@@:
    pop     rax                         ; restore Index to rax as return value
    ret
AsmCpuid    ENDP

    END
