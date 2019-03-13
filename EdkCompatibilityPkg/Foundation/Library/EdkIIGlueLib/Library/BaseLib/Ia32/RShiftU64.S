#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   RShiftU64.asm
#
# Abstract:
#
#   64-bit logical right shift function for IA-32
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

    .686:
    .code:

.globl ASM_PFX(InternalMathRShiftU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathRShiftU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathRShiftU64):
    movb    12(%esp), %cl
    xorl    %edx, %edx
    movl    8(%esp), %eax
    testb   $32, %cl
    cmovz   %eax, %edx
    cmovz   0x4(%esp), %eax
    shrdl   %cl, %edx, %eax
    shr     %cl, %edx
    ret
