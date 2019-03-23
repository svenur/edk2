#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ARShiftU64.S
#
# Abstract:
#
#   64-bit arithmetic right shift function for IA-32
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathARShiftU64)

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
    jnz     L0
    movl    %eax, %edx
    movl    4(%esp), %eax
L0:
    shrdl   %cl, %edx, %eax
    sar     %cl, %edx
    ret
