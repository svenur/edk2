;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http://opensource.org/licenses/bsd-license.php.
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
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

%pragma macho subsections_via_symbols

    DEFAULT REL
    SECTION .text

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
global ASM_PFX(AsmCpuid)
ASM_PFX(AsmCpuid):
    push    rbx
    mov     eax, ecx
    push    rax                         ; save Index on stack
    push    rdx
    cpuid
    test    r9, r9
    jz      L_0
    mov     [r9], ecx
L_0:
    pop     rcx
    jrcxz   L_1
    mov     [rcx], eax
L_1:
    mov     rcx, r8
    jrcxz   L_2
    mov     [rcx], ebx
L_2:
    mov     rcx, [rsp + 0x38]
    jrcxz   L_3
    mov     [rcx], edx
L_3:
    pop     rax                         ; restore Index to rax as return value
    pop     rbx
    ret

