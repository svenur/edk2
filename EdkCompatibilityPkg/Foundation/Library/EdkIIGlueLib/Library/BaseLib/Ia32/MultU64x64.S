#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   MultU64x64.asm
#
# Abstract:
#
#   Calculate the product of a 64-bit integer and another 64-bit integer
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalMathMultU64x64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathMultU64x64 (
#   IN      UINT64                    Multiplicand,
#   IN      UINT64                    Multiplier
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathMultU64x64):
    push    %ebx
    movl    8(%esp), %ebx
    movl    16(%esp), %edx
    movl    %ebx, %ecx
    movl    %edx, %eax
    imull   20(%esp), %ebx
    imull   12(%esp), %edx
    addl    %edx, %ebx
    mull    %ecx
    addl    %ebx, %edx
    pop     %ebx
    ret
