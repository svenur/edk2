#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DivError.asm
#
# Abstract:
#
#   Set error flag for all division functions
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalMathDivRemU64x32)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathDivRemU64x32 (
#   IN      UINT64                    Dividend,
#   IN      UINT32                    Divisor,
#   OUT     UINT32                    *Remainder
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathDivRemU64x32):
    movl    12(%esp), %ecx
    movl    8(%esp), %eax
    xorl    %edx, %edx
    divl    %ecx
    push    %eax
    movl    8(%esp), %eax
    divl    %ecx
    movl    20(%esp), %ecx
    jecxz   L1
    movl    %edx, (%ecx)
L1:
    pop     %edx
    ret
