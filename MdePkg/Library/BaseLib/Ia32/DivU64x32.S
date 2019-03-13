#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DivU64x32.S
#
# Abstract:
#
#   Calculate the quotient of a 64-bit integer by a 32-bit integer
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathDivU64x32)

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
    push    %eax                    # save quotient on stack
    movl    8(%esp), %eax
    divl    %ecx
    pop     %edx                    # restore high-order dword of the quotient
    ret
