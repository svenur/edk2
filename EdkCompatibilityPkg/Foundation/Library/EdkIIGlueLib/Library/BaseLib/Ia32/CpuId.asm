;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
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

    .586P
    .model  flat,C
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
;    );
;------------------------------------------------------------------------------
AsmCpuid    PROC    USES    ebx
    push    ebp
    mov     ebp, esp
    mov     eax, [ebp + 12]
    cpuid
    push    ecx
    mov     ecx, [ebp + 16]
    jecxz   @F
    mov     [ecx], eax
@@:
    mov     ecx, [ebp + 20]
    jecxz   @F
    mov     [ecx], ebx
@@:
    mov     ecx, [ebp + 24]
    jecxz   @F
    pop     [ecx]
@@:
    mov     ecx, [ebp + 28]
    jecxz   @F
    mov     [ecx], edx
@@:
    mov     eax, [ebp + 12]
    leave
    ret
AsmCpuid    ENDP

    END
