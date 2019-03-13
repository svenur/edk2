#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   RShiftU64.S
#
# Abstract:
#
#   64-bit logical right shift function for IA-32
#
#------------------------------------------------------------------------------


    .code:

ASM_GLOBAL ASM_PFX(InternalMathRShiftU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathRShiftU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathRShiftU64):
    movb    12(%esp), %cl               # cl <- Count
    xorl    %edx, %edx
    movl    8(%esp), %eax
    testb   $32, %cl                    # Count >= 32?
    jnz     L0
    movl    %eax, %edx
    movl    0x4(%esp), %eax
L0:
    shrdl   %cl, %edx, %eax
    shr     %cl, %edx
    ret
