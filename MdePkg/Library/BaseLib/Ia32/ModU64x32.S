#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DivU64x32.S
#
# Abstract:
#
#   Calculate the remainder of a 64-bit integer by a 32-bit integer
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathModU64x32)

#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InternalMathModU64x32 (
#   IN      UINT64                    Dividend,
#   IN      UINT32                    Divisor
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathModU64x32):
    movl    8(%esp), %eax
    movl    12(%esp), %ecx
    xorl    %edx, %edx
    divl    %ecx
    movl    4(%esp), %eax
    divl    %ecx
    movl    %edx, %eax
    ret
