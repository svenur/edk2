#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   MultU64x32.asm
#
# Abstract:
#
#   Calculate the product of a 64-bit integer and a 32-bit integer
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

    .386:
    .code:

.globl ASM_PFX(InternalMathMultU64x32)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathMultU64x32 (
#   IN      UINT64                    Multiplicand,
#   IN      UINT32                    Multiplier
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathMultU64x32):
    movl    12(%esp), %ecx
    movl    %ecx, %eax
    imull   8(%esp), %ecx
    mull    0x4(%esp)
    addl    %ecx, %edx
    ret
