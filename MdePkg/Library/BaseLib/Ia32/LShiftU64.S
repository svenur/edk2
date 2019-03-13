#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   LShiftU64.S
#
# Abstract:
#
#   64-bit left shift function for IA-32
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathLShiftU64)

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
    testb   $32, %cl                    # Count >= 32?
    jnz     L0
    movl    %edx, %eax
    movl    0x8(%esp), %edx
L0:
    shld    %cl, %eax, %edx
    shl     %cl, %eax
    ret
