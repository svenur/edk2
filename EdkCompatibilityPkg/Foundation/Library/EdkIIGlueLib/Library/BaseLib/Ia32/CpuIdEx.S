#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuIdEx.Asm
#
# Abstract:
#
#   AsmCpuidEx function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

    .686:
    .code:

#------------------------------------------------------------------------------
#  UINT32
#  EFIAPI
#  AsmCpuidEx (
#    IN   UINT32  RegisterInEax,
#    IN   UINT32  RegisterInEcx,
#    OUT  UINT32  *RegisterOutEax  OPTIONAL,
#    OUT  UINT32  *RegisterOutEbx  OPTIONAL,
#    OUT  UINT32  *RegisterOutEcx  OPTIONAL,
#    OUT  UINT32  *RegisterOutEdx  OPTIONAL
#    )
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmCpuidEx)
ASM_PFX(AsmCpuidEx):
    push    %ebx
    push    %ebp
    movl    %esp, %ebp
    movl    12(%ebp), %eax
    movl    16(%ebp), %ecx
    cpuid
    push    %ecx
    movl    20(%ebp), %ecx
    jecxz   L1
    movl    %eax, (%ecx)
L1:
    movl    24(%ebp), %ecx
    jecxz   L2
    movl    %ebx, (%ecx)
L2:
    movl    28(%ebp), %ecx
    jecxz   L3
    popl    (%ecx)
L3:
    movl    32(%ebp), %edx
    jecxz   L4
    movl    %edx, (%ecx)
L4:
    movl    12(%ebp), %eax
    leave
    pop     %ebx
    ret
