#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ARShiftU64.asm
#
# Abstract:
#
#   64-bit arithmetic right shift function for IA-32
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalMathARShiftU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathARShiftU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathARShiftU64):
    movb    12(%esp), %cl
    movl    8(%esp), %eax
    cltd
    testb   $32, %cl
    cmovz   %eax, %edx
    cmovz   4(%esp), %eax
    shrdl   %cl, %edx, %eax
    sar     %cl, %edx
    ret
