#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   LShiftU64.asm
#
# Abstract:
#
#   64-bit left shift function for IA-32
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalMathLShiftU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathLShiftU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathLShiftU64):
    movb    12(%esp), %cl
    xorl    %eax, %eax
    movl    4(%esp), %edx
    testb   $32, %cl
    cmovz   %edx, %eax
    cmovz   0x8(%esp), %edx
    shld    %cl, %eax, %edx
    shl     %cl, %eax
    ret
