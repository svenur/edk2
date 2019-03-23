; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CpuIdEx.Asm
;
; Abstract:
;
;   AsmCpuidEx function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
;  UINT32
;  EFIAPI
;  AsmCpuidEx (
;    IN   UINT32  RegisterInEax,
;    IN   UINT32  RegisterInEcx,
;    OUT  UINT32  *RegisterOutEax  OPTIONAL,
;    OUT  UINT32  *RegisterOutEbx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEcx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEdx  OPTIONAL
;    )
;------------------------------------------------------------------------------
AsmCpuidEx  PROC    USES    rbx
    mov     eax, ecx
    mov     ecx, edx
    push    rax                         ; save Index on stack
    cpuid
    mov     r10, [rsp + 38h]
    test    r10, r10
    jz      @F
    mov     [r10], ecx
@@:
    mov     rcx, r8
    jrcxz   @F
    mov     [rcx], eax
@@:
    mov     rcx, r9
    jrcxz   @F
    mov     [rcx], ebx
@@:
    mov     rcx, [rsp + 40h]
    jrcxz   @F
    mov     [rcx], edx
@@:
    pop     rax                         ; restore Index to rax as return value
    ret
AsmCpuidEx  ENDP

    END
