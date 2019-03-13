#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DivU64x32.asm
#
# Abstract:
#
#   Calculate the quotient of a 64-bit integer by a 32-bit integer
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalMathDivU64x32)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathDivU64x32 (
#   IN      UINT64                    Dividend,
#   IN      UINT32                    Divisor
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathDivU64x32):
    movl    8(%esp), %eax
    movl    12(%esp), %ecx
    xorl    %edx, %edx
    divl    %ecx
    push    %eax
    movl    8(%esp), %eax
    divl    %ecx
    pop     %edx
    ret
